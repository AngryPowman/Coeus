#include "game_login.h"
#include "game_setting.h"
#include "game_main.h"
#include "game_character_creator.h"
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
    _loginDialog.setupUi(this);

    initControl();
}

GameLogin::~GameLogin()
{
}

void GameLogin::initControl()
{
    connect(_loginDialog.mnuGame_Setting, SIGNAL(triggered()), this, SLOT(slotOpenSettingDialog()));
    connect(_loginDialog.clbSettings, SIGNAL(clicked()), this, SLOT(slotOpenSettingDialog()));
    connect(_loginDialog.btnLogin, SIGNAL(clicked()), this, SLOT(slotOnLoginBtn()));
    connect(_loginDialog.btnBack, SIGNAL(clicked()), this, SLOT(slotOnBackBtn()));
    connect(_loginDialog.chkAutoLogin, SIGNAL(clicked(bool)), this, SLOT(slotAutoLoginCheckedChanged(bool)));
    connect(_loginDialog.txtPassword, SIGNAL(textEdited(QString)), this, SLOT(slotPasswordEdited(QString)));
    connect(_loginDialog.cmbAccount, SIGNAL(currentTextChanged(QString)), this, SLOT(slotAccountEdited(QString)));

    //固定窗体大小
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    //读配置
    _loginDialog.cmbAccount->setCurrentText(LoginConfig::getInstance().savedAccount().c_str());
    _useConfigPasswordDigest = LoginConfig::getInstance().getRememberPassword();
    if (LoginConfig::getInstance().getRememberPassword() == true)
    {
        _loginDialog.txtPassword->setPlaceholderText(PASSWORD_HOLDER_TEXT);
        _passwordDigest = LoginConfig::getInstance().savedPassword().c_str();
        _isPasswordDigest = true;
    }

    _gravatarOriginX = _loginDialog.graphicsGravatar->geometry().left();
    _frameLoginInitialPoint = _loginDialog.frameLogin->pos();


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
        QImage scaleAvatarImage = image->scaled(_loginDialog.graphicsGravatar->width(), _loginDialog.graphicsGravatar->height());

        //创建图形场景
        QGraphicsScene* graphicsScene = new QGraphicsScene();
        graphicsScene->addPixmap(QPixmap::fromImage(scaleAvatarImage));
        _loginDialog.graphicsGravatar->setScene(graphicsScene);
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
    if (GameUtil::checkEmailValid(_loginDialog.cmbAccount->currentText().toStdString()) == false)
    {
        QMessageBox::warning(this, QStringLiteral("警告"), QStringLiteral("别乱写个帐号忽悠我。"));
        _loginDialog.cmbAccount->setFocus();
        return;
    }

    //如果当前使用的不是已保存的密码，则检查空
    if (_isPasswordDigest == false)
    {
        if (_loginDialog.txtPassword->text().length() == 0)
        {
            QMessageBox::warning(this, QStringLiteral("警告"), QStringLiteral("不输入密码就登录，你是猴子请过来的逗比吗？"));
            _loginDialog.txtPassword->selectAll();
            _loginDialog.txtPassword->setFocus();
            return;
        }

        if (_loginDialog.txtPassword->text().length() > 32)
        {
            QMessageBox::warning(this, QStringLiteral("警告"), QStringLiteral("你的密码这么长，你家里人知道吗？"));
            _loginDialog.txtPassword->selectAll();
            _loginDialog.txtPassword->setFocus();
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
    static int end_x = _loginDialog.loginWidget->geometry().width() / 2 -  _loginDialog.graphicsGravatar->geometry().width() / 2;
    static int end_y = _loginDialog.graphicsGravatar->geometry().top();

    static int frame_count = 1;
    frame_count++;

    float speed = (18 - (frame_count * 0.05));

    float x = _loginDialog.graphicsGravatar->pos().x() + (speed > 0 ? speed : 1);
    float y = _loginDialog.graphicsGravatar->pos().y();

    _loginDialog.graphicsGravatar->move(x, y);

    if (x >= end_x)
    {
        _loginDialog.graphicsGravatar->move(end_x, y);
        _moveGravatar->stop();

        loginProcess();
    }
}

void GameLogin::loginProcess()
{
    _loginDialog.lblStateTips->setText(QStringLiteral("正在连接服务器"));
    this->repaint();
    if (GameNetwork::getInstance().connectServer())
    {
        _loginDialog.lblStateTips->setText(QStringLiteral("正在验证用户名和密码"));
        Protocol::CSLoginReq loginReq;
        loginReq.account = _loginDialog.cmbAccount->currentText().toStdString();

        if (_isPasswordDigest == false)
        {
            _passwordDigest = GameUtil::toPasswordDigest(_loginDialog.txtPassword->text().toStdString());
        }

        loginReq.password = _passwordDigest;

        GameNetwork::getInstance().sendMessage(Opcodes::CSLoginReq, loginReq);
    }
}

void GameLogin::setAnimationControlEnabled(bool enabled)
{
    //设置控件状态
    _loginDialog.cmbAccount->setVisible(enabled);
    _loginDialog.txtPassword->setVisible(enabled);
    _loginDialog.chkRememberPassword->setVisible(enabled);
    _loginDialog.chkAutoLogin->setVisible(enabled);
    _loginDialog.lblAccount->setVisible(enabled);
    _loginDialog.lblPassword->setVisible(enabled);
    _loginDialog.lblStateTips->setText("");
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
        _loginDialog.frameLogin->move(_frameLoginInitialPoint);
        _loginDialog.frameLogin->setVisible(true);
        _loginDialog.frameServerSelector->setVisible(false);
        setAnimationControlEnabled(true);
        _loginDialog.graphicsGravatar->move(_gravatarOriginX, _loginDialog.graphicsGravatar->pos().y());

        _loginDialog.btnLogin->setText(QStringLiteral("登录"));
    }
    else if (panel == PANEL_LOGINNING)
    {
        _loginDialog.frameLogin->move(_frameLoginInitialPoint);
        _loginDialog.frameLogin->setVisible(true);
        _loginDialog.frameServerSelector->setVisible(false);
        setAnimationControlEnabled(false);

        _moveGravatar = new QTimer(this);
        connect(_moveGravatar, SIGNAL(timeout()), this, SLOT(slotMoveGravatarAnimation()));
        _moveGravatar->setSingleShot(false);
        _moveGravatar->start(1);

        _loginDialog.btnLogin->setText(QStringLiteral("取消"));
    }
    else
    {
        _loginDialog.frameServerSelector->move(_frameLoginInitialPoint);
        _loginDialog.frameServerSelector->setVisible(true);
        _loginDialog.frameLogin->setVisible(false);

        _loginDialog.btnLogin->setText(QStringLiteral("进入游戏"));

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
            statusText += QStringLiteral("无法连接到服务器。"); break;
        case QAbstractSocket::RemoteHostClosedError:
            break;
        case QAbstractSocket::HostNotFoundError:
            statusText += QStringLiteral("无法找到服务器。"); break;
        case QAbstractSocket::SocketTimeoutError:
            statusText += QStringLiteral("连接服务器超时。"); break;
        case QAbstractSocket::NetworkError:
            statusText += QStringLiteral("网络错误。"); break;
        case QAbstractSocket::AddressInUseError:
            statusText += QStringLiteral("无法使用当前端口。"); break;
        case QAbstractSocket::SocketAddressNotAvailableError:
            statusText += QStringLiteral("网络地址不可用。"); break;
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
            statusText += QStringLiteral("无法找到代理服务器。"); 
            break;
        case QAbstractSocket::ProxyProtocolError:
            statusText += QStringLiteral("使用了错误的代理协议。"); 
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
            statusText += QStringLiteral("未知网络错误，请联系客服（根本就没有客服）。"); break;
            break;
    }

    if (!statusText.isEmpty())
    {
        statusText += errorCodeText;
        //this->_loginDialog.lblErrorTip->setText(statusText);
        QMessageBox::critical(this, QStringLiteral("登录失败"), statusText);
    }

    GameNetwork::getInstance().close();
}

void GameLogin::onLoginRsp(const Protocol::SCLoginRsp& loginRsp)
{
    if (_currentPanel == PANEL_LOGINNING)
    {
        if (loginRsp.login_result)
        {
            _loginDialog.lblStateTips->setText(QStringLiteral("登录成功，正在获取游戏数据"));

            //保存登录配置
            LoginConfig::getInstance().setRememberPassword(_loginDialog.chkRememberPassword);
            LoginConfig::getInstance().setAutoLogin(_loginDialog.chkAutoLogin);
            LoginConfig::getInstance().saveAccount(
                _loginDialog.cmbAccount->currentText().toStdString(), 
                _passwordDigest);

            LoginConfig::getInstance().saveToFile();

            //显示游戏主界面
            GameMain* gameMain = WidgetManager::getInstance().gameMain();
            gameMain->show();

            if (loginRsp.character_create_require == true)
            {
                GameCharacterCreator* characterCreator = WidgetManager::getInstance().gameCharacterCreator(gameMain);
                characterCreator->setWindowModality(Qt::WindowModality::WindowModal);
                characterCreator->show();
            }

            this->close();
        }
        else
        {
            changePanel(PANEL_DEFAULT);
            QMessageBox::critical(this, QStringLiteral("登录失败"), QStringLiteral("用户名和密码不匹配。"));
        }
    }
}

void GameLogin::slotAutoLoginCheckedChanged(bool checked)
{
    if (checked)
    {
        _loginDialog.chkRememberPassword->setChecked(true);
    }
}

void GameLogin::slotPasswordEdited(QString)
{
    if (_loginDialog.txtPassword->text().length() != 0)
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
        if (_loginDialog.cmbAccount->currentText().toStdString() != LoginConfig::getInstance().savedAccount())
        {
            _isPasswordDigest = false;
            _loginDialog.txtPassword->setPlaceholderText("");
        }
        else
        {
            _isPasswordDigest = true;
            _loginDialog.txtPassword->setPlaceholderText(PASSWORD_HOLDER_TEXT);
        }
    }
}