/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QAction *actionRegister;
    QAction *actionHomepage;
    QAction *actionHelp;
    QAction *mnuGame_Setting;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QFrame *frameLogin;
    QWidget *loginWidget;
    QCheckBox *chkAutoLogin;
    QLabel *lblPassword;
    QGraphicsView *graphicsGravatar;
    QCheckBox *chkRememberPassword;
    QLabel *lblAccount;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *txtPassword;
    QComboBox *cmbAccount;
    QLabel *lblStateTips;
    QLabel *lblErrorTip;
    QFrame *frame;
    QPushButton *btnLogin;
    QCommandLinkButton *clbSettings;
    QFrame *frameServerSelector;
    QLabel *lblAccount_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *lblAccount_3;
    QPushButton *btnBack;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->setWindowModality(Qt::NonModal);
        LoginDialog->resize(471, 253);
        QIcon icon;
        icon.addFile(QStringLiteral(":/coeus_client_qt/coeus_boy.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDialog->setWindowIcon(icon);
        LoginDialog->setAutoFillBackground(true);
        LoginDialog->setToolButtonStyle(Qt::ToolButtonIconOnly);
        LoginDialog->setUnifiedTitleAndToolBarOnMac(false);
        actionRegister = new QAction(LoginDialog);
        actionRegister->setObjectName(QStringLiteral("actionRegister"));
        actionRegister->setEnabled(true);
        actionRegister->setVisible(true);
        actionHomepage = new QAction(LoginDialog);
        actionHomepage->setObjectName(QStringLiteral("actionHomepage"));
        actionHelp = new QAction(LoginDialog);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        mnuGame_Setting = new QAction(LoginDialog);
        mnuGame_Setting->setObjectName(QStringLiteral("mnuGame_Setting"));
        mnuGame_Setting->setShortcutContext(Qt::WidgetShortcut);
        actionExit = new QAction(LoginDialog);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(LoginDialog);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(LoginDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frameLogin = new QFrame(centralWidget);
        frameLogin->setObjectName(QStringLiteral("frameLogin"));
        frameLogin->setGeometry(QRect(0, 0, 471, 166));
        frameLogin->setFrameShape(QFrame::StyledPanel);
        frameLogin->setFrameShadow(QFrame::Raised);
        loginWidget = new QWidget(frameLogin);
        loginWidget->setObjectName(QStringLiteral("loginWidget"));
        loginWidget->setGeometry(QRect(0, 20, 471, 146));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginWidget->sizePolicy().hasHeightForWidth());
        loginWidget->setSizePolicy(sizePolicy);
        chkAutoLogin = new QCheckBox(loginWidget);
        chkAutoLogin->setObjectName(QStringLiteral("chkAutoLogin"));
        chkAutoLogin->setGeometry(QRect(265, 95, 71, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        chkAutoLogin->setFont(font);
        lblPassword = new QLabel(loginWidget);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setGeometry(QRect(135, 60, 46, 16));
        lblPassword->setFont(font);
        graphicsGravatar = new QGraphicsView(loginWidget);
        graphicsGravatar->setObjectName(QStringLiteral("graphicsGravatar"));
        graphicsGravatar->setGeometry(QRect(20, 20, 96, 96));
        graphicsGravatar->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsGravatar->setFrameShape(QFrame::Box);
        graphicsGravatar->setFrameShadow(QFrame::Plain);
        graphicsGravatar->setLineWidth(1);
        graphicsGravatar->setMidLineWidth(1);
        graphicsGravatar->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setInteractive(false);
        graphicsGravatar->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        chkRememberPassword = new QCheckBox(loginWidget);
        chkRememberPassword->setObjectName(QStringLiteral("chkRememberPassword"));
        chkRememberPassword->setGeometry(QRect(175, 95, 71, 16));
        chkRememberPassword->setFont(font);
        lblAccount = new QLabel(loginWidget);
        lblAccount->setObjectName(QStringLiteral("lblAccount"));
        lblAccount->setGeometry(QRect(135, 30, 46, 16));
        lblAccount->setFont(font);
        gridLayoutWidget = new QWidget(loginWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(175, 20, 266, 66));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        txtPassword = new QLineEdit(gridLayoutWidget);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setFont(font);
        txtPassword->setContextMenuPolicy(Qt::NoContextMenu);
        txtPassword->setMaxLength(32);
        txtPassword->setFrame(true);
        txtPassword->setEchoMode(QLineEdit::Password);
        txtPassword->setDragEnabled(true);

        gridLayout->addWidget(txtPassword, 1, 0, 1, 1);

        cmbAccount = new QComboBox(gridLayoutWidget);
        cmbAccount->setObjectName(QStringLiteral("cmbAccount"));
        cmbAccount->setFont(font);
        cmbAccount->setEditable(true);
        cmbAccount->setMaxCount(64);

        gridLayout->addWidget(cmbAccount, 0, 0, 1, 1);

        lblStateTips = new QLabel(loginWidget);
        lblStateTips->setObjectName(QStringLiteral("lblStateTips"));
        lblStateTips->setGeometry(QRect(5, 125, 456, 16));
        lblStateTips->setAlignment(Qt::AlignCenter);
        lblErrorTip = new QLabel(loginWidget);
        lblErrorTip->setObjectName(QStringLiteral("lblErrorTip"));
        lblErrorTip->setGeometry(QRect(175, 115, 271, 16));
        lblErrorTip->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-5, 170, 481, 61));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        btnLogin = new QPushButton(frame);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(145, 15, 186, 36));
        clbSettings = new QCommandLinkButton(frame);
        clbSettings->setObjectName(QStringLiteral("clbSettings"));
        clbSettings->setGeometry(QRect(10, 5, 46, 51));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/coeus_client_qt/login_setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        clbSettings->setIcon(icon1);
        clbSettings->setIconSize(QSize(32, 32));
        clbSettings->setAutoDefault(true);
        frameServerSelector = new QFrame(centralWidget);
        frameServerSelector->setObjectName(QStringLiteral("frameServerSelector"));
        frameServerSelector->setGeometry(QRect(-5, 255, 471, 166));
        frameServerSelector->setFrameShape(QFrame::StyledPanel);
        frameServerSelector->setFrameShadow(QFrame::Raised);
        lblAccount_2 = new QLabel(frameServerSelector);
        lblAccount_2->setObjectName(QStringLiteral("lblAccount_2"));
        lblAccount_2->setGeometry(QRect(95, 45, 41, 21));
        lblAccount_2->setFont(font);
        comboBox = new QComboBox(frameServerSelector);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 45, 191, 22));
        comboBox_2 = new QComboBox(frameServerSelector);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(150, 80, 191, 22));
        lblAccount_3 = new QLabel(frameServerSelector);
        lblAccount_3->setObjectName(QStringLiteral("lblAccount_3"));
        lblAccount_3->setGeometry(QRect(95, 80, 41, 21));
        lblAccount_3->setFont(font);
        btnBack = new QPushButton(frameServerSelector);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(0, 0, 56, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setStyleStrategy(QFont::PreferDefault);
        btnBack->setFont(font1);
        btnBack->setMouseTracking(true);
        btnBack->setAutoFillBackground(false);
        btnBack->setStyleSheet(QStringLiteral("background-color: rgb(212, 212, 212);"));
        btnBack->setInputMethodHints(Qt::ImhNone);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/coeus_client_qt/login_back.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBack->setIcon(icon2);
        btnBack->setAutoExclusive(false);
        btnBack->setAutoDefault(false);
        btnBack->setDefault(false);
        btnBack->setFlat(true);
        label = new QLabel(frameServerSelector);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(55, 0, 416, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setOpenExternalLinks(false);
        lblAccount_2->raise();
        comboBox->raise();
        comboBox_2->raise();
        lblAccount_3->raise();
        label->raise();
        btnBack->raise();
        LoginDialog->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoginDialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 471, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        LoginDialog->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionRegister);
        menu->addSeparator();
        menu->addAction(mnuGame_Setting);
        menu->addSeparator();
        menu->addAction(actionHelp);
        menu->addAction(actionAbout);
        menu->addAction(actionHomepage);
        menu->addSeparator();
        menu->addAction(actionExit);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QMainWindow *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\345\217\253\346\210\221\350\213\261\351\233\204", 0));
        actionRegister->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214\345\270\220\345\217\267(&R)...", 0));
#ifndef QT_NO_TOOLTIP
        actionRegister->setToolTip(QApplication::translate("LoginDialog", "\346\263\250\345\206\214\345\270\220\345\217\267(R)", 0));
#endif // QT_NO_TOOLTIP
        actionHomepage->setText(QApplication::translate("LoginDialog", "\350\256\277\351\227\256\345\256\230\347\275\221", 0));
        actionHelp->setText(QApplication::translate("LoginDialog", "\345\270\256\345\212\251(&H)...", 0));
        actionHelp->setShortcut(QApplication::translate("LoginDialog", "F1", 0));
        mnuGame_Setting->setText(QApplication::translate("LoginDialog", "\350\256\276\347\275\256(&S)...", 0));
        mnuGame_Setting->setShortcut(QApplication::translate("LoginDialog", "F12", 0));
        actionExit->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272(&X)", 0));
        actionAbout->setText(QApplication::translate("LoginDialog", "\345\205\263\344\272\216(&A)", 0));
        chkAutoLogin->setText(QApplication::translate("LoginDialog", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        lblPassword->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", 0));
#ifndef QT_NO_TOOLTIP
        graphicsGravatar->setToolTip(QApplication::translate("LoginDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar->setWhatsThis(QApplication::translate("LoginDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        chkRememberPassword->setText(QApplication::translate("LoginDialog", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        lblAccount->setText(QApplication::translate("LoginDialog", "\345\270\220\345\217\267\357\274\232", 0));
        txtPassword->setInputMask(QString());
        txtPassword->setText(QString());
        cmbAccount->setCurrentText(QString());
        lblStateTips->setText(QString());
        lblErrorTip->setText(QString());
        btnLogin->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        clbSettings->setText(QString());
        lblAccount_2->setText(QApplication::translate("LoginDialog", "\347\272\277   \350\267\257", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LoginDialog", "\351\246\231\346\270\257\347\272\277\350\267\257-\346\226\260\344\270\226\347\225\214\347\224\265\350\256\257", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("LoginDialog", "\346\265\213\350\257\225\346\234\215", 0)
        );
        lblAccount_3->setText(QApplication::translate("LoginDialog", "\346\234\215\345\212\241\345\231\250", 0));
        btnBack->setText(QApplication::translate("LoginDialog", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">\351\200\211\346\213\251\346\234\215\345\212\241\345\231\250</span></p></body></html>", 0));
        menu->setTitle(QApplication::translate("LoginDialog", "\345\212\237\350\203\275(&G)", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
