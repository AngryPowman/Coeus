#include "game_login.h"
#include "game_setting.h"
#include "game_main.h"
#include "character_creator.h"
#include "widget_manager.h"
#include "game_common/game_define.h"
#include "game_common/game_util.h"
#include "login_config.h"

GameLogin::GameLogin(QWidget *parent)
    : QMainWindow(parent), 
    _currentPanel(Panel::PANEL_DEFAULT),
    _useConfigPasswordDigest(false),
    _isPasswordDigest(false)
{
    _ui.setupUi(this);

    initControl();
}

GameLogin::~GameLogin()
{
}

void GameLogin::initControl()
{
    connect(_ui.mnuGame_Setting, SIGNAL(triggered()), this, SLOT(slotOpenSettingDialog()));
    connect(_ui.clbSettings, SIGNAL(clicked()), this, SLOT(slotOpenSettingDialog()));
    connect(_ui.btnLogin, SIGNAL(clicked()), this, SLOT(slotOnLoginBtn()));
    connect(_ui.btnBack, SIGNAL(clicked()), this, SLOT(slotOnBackBtn()));
    connect(_ui.chkAutoLogin, SIGNAL(clicked(bool)), this, SLOT(slotAutoLoginCheckedChanged(bool)));
    connect(_ui.txtPassword, SIGNAL(textEdited(QString)), this, SLOT(slotPasswordEdited(QString)));
    connect(_ui.cmbAccount, SIGNAL(currentTextChanged(QString)), this, SLOT(slotAccountEdited(QString)));
    connect(_ui.actionHomepage, SIGNAL(triggered()), this, SLOT(slotOpenHomepageAction()));
    connect(_ui.actionHelp, SIGNAL(triggered()), this, SLOT(slotHelpAction()));
    connect(_ui.actionAbout, SIGNAL(triggered()), this, SLOT(slotAboutAction()));
    connect(_ui.actionRegister, SIGNAL(triggered()), this, SLOT(slotRegisterAction()));
    connect(_ui.actionExit, SIGNAL(triggered()), this, SLOT(slotExitAction()));

    //固定窗体大小
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    //读配置
    _ui.cmbAccount->setCurrentText(LoginConfig::getInstance().savedAccount().c_str());
    _useConfigPasswordDigest = LoginConfig::getInstance().getRememberPassword();
    if (LoginConfig::getInstance().getRememberPassword() == true)
    {
        _ui.txtPassword->setPlaceholderText(PASSWORD_HOLDER_TEXT);
        _passwordDigest = LoginConfig::getInstance().savedPassword().c_str();
        _isPasswordDigest = true;
    }

    _gravatarOriginX = _ui.graphicsGravatar->geometry().left();
    _frameLoginInitialPoint = _ui.frameLogin->pos();


    // 加载背景
    //QPixmap pixmap = QPixmap("./images/coeus_boy.png").scaled(this->size());
    //palette(this->palette());
    //palette.setBrush(QPalette::Background, QBrush(pixmap));
    //this->setPalette(palette);

    // 加载头像
    QImage* image = new QImage();
    if (image->load("./images/avatar/AngryPowman.jpg"))
    {
        //调整图片尺寸适应头像显示区域
        QImage scaleAvatarImage = image->scaled(_ui.graphicsGravatar->width(), _ui.graphicsGravatar->height());

        //创建图形场景
        QGraphicsScene* graphicsScene = new QGraphicsScene();
        graphicsScene->addPixmap(QPixmap::fromImage(scaleAvatarImage));
        _ui.graphicsGravatar->setScene(graphicsScene);
    }
}

void GameLogin::slotOpenSettingDialog()
{
    std::cout << std::this_thread::get_id() << std::endl;
    changePanel(Panel::PANEL_DEFAULT);
    GameSetting* gameSetting = WidgetManager::getInstance().gameSetting(this);
    gameSetting->show();
}

void GameLogin::slotOnLoginBtn()
{
    if (GameUtil::checkEmailValid(_ui.cmbAccount->currentText().toStdString()) == false)
    {
        QMessageBox::warning(this, "警告", "别乱写个帐号忽悠我。");
        _ui.cmbAccount->setFocus();
        return;
    }

    //如果当前使用的不是已保存的密码，则检查空
    if (_isPasswordDigest == false)
    {
        if (_ui.txtPassword->text().length() == 0)
        {
            QMessageBox::warning(this, "警告", "不输入密码就登录，你是猴子请过来的逗比吗？");
            _ui.txtPassword->selectAll();
            _ui.txtPassword->setFocus();
            return;
        }

        if (_ui.txtPassword->text().length() > 32)
        {
            QMessageBox::warning(this, "警告", "你的密码这么长，你家里人知道吗？");
            _ui.txtPassword->selectAll();
            _ui.txtPassword->setFocus();
            return;
        }
    }

    switch (_currentPanel)
    {
    case GameLogin::PANEL_DEFAULT:
        changePanel(PANEL_LOGINNING);
        break;
    case GameLogin::PANEL_LOGINNING:
        changePanel(PANEL_DEFAULT);
        break;
    case GameLogin::PANEL_SERVER_SELECTOR:
        break;
    default:
        break;
    }
}

void GameLogin::slotMoveGravatarAnimation()
{
    static int end_x = _ui.loginWidget->geometry().width() / 2 -  _ui.graphicsGravatar->geometry().width() / 2;
    static int end_y = _ui.graphicsGravatar->geometry().top();

    static int frame_count = 1;
    frame_count++;

    float speed = (18 - (frame_count * 0.05));

    float x = _ui.graphicsGravatar->pos().x() + (speed > 0 ? speed : 1);
    float y = _ui.graphicsGravatar->pos().y();

    _ui.graphicsGravatar->move(x, y);

    if (x >= end_x)
    {
        _ui.graphicsGravatar->move(end_x, y);
        _moveGravatar->stop();

        loginProcess();
    }
}

void GameLogin::loginProcess()
{
    _ui.lblStateTips->setText("正在连接服务器");
    this->repaint();
    if (GameNetwork::getInstance().connectServer())
    {
        _ui.lblStateTips->setText("正在验证用户名和密码");
        Protocol::CSLoginReq loginReq;
        loginReq.account = _ui.cmbAccount->currentText().toStdString();

        if (_isPasswordDigest == false)
        {
            _passwordDigest = GameUtil::toPasswordDigest(_ui.txtPassword->text().toStdString());
        }

        loginReq.password = _passwordDigest;

        GameNetwork::getInstance().sendMessage(Opcodes::CSLoginReq, loginReq);
    }
}

void GameLogin::setAnimationControlEnabled(bool enabled)
{
    //设置控件状态
    _ui.cmbAccount->setVisible(enabled);
    _ui.txtPassword->setVisible(enabled);
    _ui.chkRememberPassword->setVisible(enabled);
    _ui.chkAutoLogin->setVisible(enabled);
    _ui.lblAccount->setVisible(enabled);
    _ui.lblPassword->setVisible(enabled);
    _ui.lblStateTips->setText("");
}

void GameLogin::showErrorString(const QString& str)
{
    
}

void GameLogin::changePanel(Panel panel)
{
    _isLoginProcess = false;
    _currentPanel = panel;
    if (panel == PANEL_DEFAULT)
    {
        _ui.frameLogin->move(_frameLoginInitialPoint);
        _ui.frameLogin->setVisible(true);
        _ui.frameServerSelector->setVisible(false);
        setAnimationControlEnabled(true);
        _ui.graphicsGravatar->move(_gravatarOriginX, _ui.graphicsGravatar->pos().y());

        _ui.btnLogin->setText("登录");
    }
    else if (panel == PANEL_LOGINNING)
    {
        _ui.frameLogin->move(_frameLoginInitialPoint);
        _ui.frameLogin->setVisible(true);
        _ui.frameServerSelector->setVisible(false);
        setAnimationControlEnabled(false);

        _moveGravatar = new QTimer(this);
        connect(_moveGravatar, SIGNAL(timeout()), this, SLOT(slotMoveGravatarAnimation()));
        _moveGravatar->setSingleShot(false);
        _moveGravatar->start(1);

        _ui.btnLogin->setText("取消");
    }
    else
    {
        _ui.frameServerSelector->move(_frameLoginInitialPoint);
        _ui.frameServerSelector->setVisible(true);
        _ui.frameLogin->setVisible(false);

        _ui.btnLogin->setText("进入游戏");

    }
}

void GameLogin::slotOnBackBtn()
{
    changePanel(Panel::PANEL_DEFAULT);
}

void GameLogin::onConnectFailed(const QAbstractSocket::SocketError& error)
{
    changePanel(Panel::PANEL_DEFAULT);

    QString errorCodeText;
    errorCodeText.sprintf("(0x%08x)", error);

    QString statusText;
    switch (error)
    {
        case QAbstractSocket::ConnectionRefusedError:
            statusText += "无法连接到服务器。"; break;
        case QAbstractSocket::RemoteHostClosedError:
            break;
        case QAbstractSocket::HostNotFoundError:
            statusText += "无法找到服务器。"; break;
        case QAbstractSocket::SocketTimeoutError:
            statusText += "连接服务器超时。"; break;
        case QAbstractSocket::NetworkError:
            statusText += "网络错误。"; break;
        case QAbstractSocket::AddressInUseError:
            statusText += "无法使用当前端口。"; break;
        case QAbstractSocket::SocketAddressNotAvailableError:
            statusText += "网络地址不可用。"; break;
        case QAbstractSocket::UnsupportedSocketOperationError
            :break;
        case QAbstractSocket::UnfinishedSocketOperationError
            :break;
        case QAbstractSocket::ProxyAuthenticationRequiredError
            :break;
        case QAbstractSocket::SslHandshakeFailedError:
            break;
        case QAbstractSocket::ProxyConnectionRefusedError:
            break;
        case QAbstractSocket::ProxyConnectionClosedError:
            break;
        case QAbstractSocket::ProxyConnectionTimeoutError:
            break;
        case QAbstractSocket::ProxyNotFoundError:
            statusText += "无法找到代理服务器。"; 
            break;
        case QAbstractSocket::ProxyProtocolError:
            statusText += "使用了错误的代理协议。"; 
            break;
        case QAbstractSocket::OperationError:
            break;
        case QAbstractSocket::SslInternalError:
            break;
        case QAbstractSocket::SslInvalidUserDataError:
            break;
        case QAbstractSocket::TemporaryError:
            break;
        case QAbstractSocket::UnknownSocketError:
            statusText += "未知网络错误，请联系客服（根本就没有客服）。"; break;
            break;
    }

    if (!statusText.isEmpty())
    {
        statusText += errorCodeText;
        //this->_ui.lblErrorTip->setText(statusText);
        QMessageBox::critical(this, "登录失败", statusText);
    }

    GameNetwork::getInstance().close();
}

void GameLogin::onLoginRsp(const Protocol::SCLoginRsp& loginRsp)
{
    if (_currentPanel == PANEL_LOGINNING)
    {
        if (loginRsp.login_result)
        {
            _ui.lblStateTips->setText("登录成功，正在获取游戏数据");

            //保存登录配置
            LoginConfig::getInstance().setRememberPassword(_ui.chkRememberPassword);
            LoginConfig::getInstance().setAutoLogin(_ui.chkAutoLogin);
            LoginConfig::getInstance().saveAccount(
                _ui.cmbAccount->currentText().toStdString(), 
                _passwordDigest);

            LoginConfig::getInstance().saveToFile();

            if (static_cast<bool>(loginRsp.character_create_require) == true)
            {
                CharacterCreator* characterCreator = WidgetManager::getInstance().characterCreator();
                characterCreator->setWindowModality(Qt::WindowModality::WindowModal);
                characterCreator->show();
            }
            else
            {
                GameMain* gameMain = WidgetManager::getInstance().gameMain();
                gameMain->show();
            }

            this->close();
        }
        else
        {
            changePanel(PANEL_DEFAULT);
            QMessageBox::critical(this, "登录失败", "用户名和密码不匹配。");
        }
    }
}

void GameLogin::slotAutoLoginCheckedChanged(bool checked)
{
    if (checked)
    {
        _ui.chkRememberPassword->setChecked(true);
    }
}

void GameLogin::slotPasswordEdited(QString)
{
    if (_ui.txtPassword->text().length() != 0)
    {
        _isPasswordDigest = false;
    }
    else
    {
        _isPasswordDigest = _useConfigPasswordDigest;
        if (_useConfigPasswordDigest)
        {
            _passwordDigest = LoginConfig::getInstance().savedPassword().c_str();
        }
    }
}

void GameLogin::slotAccountEdited(QString)
{
    if (_useConfigPasswordDigest)
    {
        if (_ui.cmbAccount->currentText().toStdString() != LoginConfig::getInstance().savedAccount())
        {
            _isPasswordDigest = false;
            _ui.txtPassword->setPlaceholderText("");
        }
        else
        {
            _isPasswordDigest = true;
            _ui.txtPassword->setPlaceholderText(PASSWORD_HOLDER_TEXT);
        }
    }
}

void GameLogin::slotOpenHomepageAction()
{
    QDesktopServices::openUrl(QUrl("http://coeus.powman.org"));
}

void GameLogin::slotHelpAction()
{
    QMessageBox::information(this, "帮助", "就这么个玩意儿你还想要什么帮助？");
}

void GameLogin::slotAboutAction()
{
    QMessageBox::about(this, "关于", "Author by AngryPowman\n\nhttp://powman.org");
}

void GameLogin::slotRegisterAction()
{
    QDesktopServices::openUrl(QUrl("http://coeus.powman.org/register"));
}

void GameLogin::slotExitAction()
{
    exit(0);
}