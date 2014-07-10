#ifndef COEUS_CLIENT_QT_H
#define COEUS_CLIENT_QT_H

#include "ui_login_dialog.h"
#include "qt_coeus_common.h"

#define PASSWORD_HOLDER_TEXT ("[要更改已保存的密码，请输入新密码]")

class GameSetting;
class GameLogin : public QMainWindow
{
    Q_OBJECT
    enum Panel { PANEL_DEFAULT, PANEL_LOGINNING, PANEL_SERVER_SELECTOR };

public:
    GameLogin(QWidget* parent = 0);
    virtual ~GameLogin();

public:
    void initControl();

public:
    //网络事件处理
    void onConnectFailed(const QAbstractSocket::SocketError& error);
    //void onLoginRsp(const Protocol::SCLoginRsp& loginRsp);

signals:
    void changePanelSignal(Panel panel);

private slots:
    void slotOpenSettingDialog();
    void slotOnLoginBtn();
    void slotMoveGravatarAnimation();
    void slotOnBackBtn();
    void slotAutoLoginCheckedChanged(bool checked);
    void slotPasswordEdited(QString);
    void slotAccountEdited(QString);
    void slotOpenHomepageAction();
    void slotHelpAction();
    void slotAboutAction();
    void slotRegisterAction();
    void slotExitAction();

private:
    void changePanel(Panel panel);
    void loginProcess();
    void setAnimationControlEnabled(bool enabled);
    void showErrorString(const QString& str);

private:
    Ui::LoginDialog _ui;

private:
    bool _useConfigPasswordDigest;
    bool _isPasswordDigest;
    std::string _passwordDigest;
    Panel _currentPanel;
    bool _isLoginProcess;
    QTimer* _moveGravatar;
    int _gravatarOriginX;
    QPoint _frameLoginInitialPoint;
};

#endif // COEUS_CLIENT_QT_H
