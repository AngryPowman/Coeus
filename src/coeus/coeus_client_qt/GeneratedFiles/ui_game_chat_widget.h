/********************************************************************************
** Form generated from reading UI file 'game_chat_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_CHAT_WIDGET_H
#define UI_GAME_CHAT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameChatWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *txtDefaultChat;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *txtWorldChat;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *txtDefaultChat_3;
    QWidget *widget1;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QComboBox *cmbChannel;
    QComboBox *cmbTargetName;
    QLineEdit *txtChatContent;

    void setupUi(QWidget *GameChatWidget)
    {
        if (GameChatWidget->objectName().isEmpty())
            GameChatWidget->setObjectName(QStringLiteral("GameChatWidget"));
        GameChatWidget->setWindowModality(Qt::NonModal);
        GameChatWidget->resize(567, 227);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameChatWidget->sizePolicy().hasHeightForWidth());
        GameChatWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GameChatWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(GameChatWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txtDefaultChat = new QTextBrowser(tab);
        txtDefaultChat->setObjectName(QStringLiteral("txtDefaultChat"));

        horizontalLayout->addWidget(txtDefaultChat);

        tabWidget->addTab(tab, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        txtWorldChat = new QTextBrowser(widget);
        txtWorldChat->setObjectName(QStringLiteral("txtWorldChat"));

        horizontalLayout_2->addWidget(txtWorldChat);

        tabWidget->addTab(widget, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_3 = new QHBoxLayout(tab_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        txtDefaultChat_3 = new QTextBrowser(tab_3);
        txtDefaultChat_3->setObjectName(QStringLiteral("txtDefaultChat_3"));

        horizontalLayout_3->addWidget(txtDefaultChat_3);

        tabWidget->addTab(tab_3, QString());
        widget1 = new QWidget();
        widget1->setObjectName(QStringLiteral("widget1"));
        tabWidget->addTab(widget1, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cmbChannel = new QComboBox(GameChatWidget);
        cmbChannel->setObjectName(QStringLiteral("cmbChannel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbChannel->sizePolicy().hasHeightForWidth());
        cmbChannel->setSizePolicy(sizePolicy1);
        cmbChannel->setMaximumSize(QSize(69, 20));

        gridLayout->addWidget(cmbChannel, 0, 0, 1, 1);

        cmbTargetName = new QComboBox(GameChatWidget);
        cmbTargetName->setObjectName(QStringLiteral("cmbTargetName"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmbTargetName->sizePolicy().hasHeightForWidth());
        cmbTargetName->setSizePolicy(sizePolicy2);
        cmbTargetName->setMaximumSize(QSize(176, 20));
        cmbTargetName->setEditable(true);

        gridLayout->addWidget(cmbTargetName, 0, 1, 1, 1);

        txtChatContent = new QLineEdit(GameChatWidget);
        txtChatContent->setObjectName(QStringLiteral("txtChatContent"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtChatContent->sizePolicy().hasHeightForWidth());
        txtChatContent->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(txtChatContent, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(GameChatWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameChatWidget);
    } // setupUi

    void retranslateUi(QWidget *GameChatWidget)
    {
        GameChatWidget->setWindowTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GameChatWidget", "\351\273\230\350\256\244", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("GameChatWidget", "\344\270\226\347\225\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GameChatWidget", "\347\247\201\350\201\212", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget1), QApplication::translate("GameChatWidget", "\345\205\254\344\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GameChatWidget", "\347\263\273\347\273\237", 0));
        cmbChannel->clear();
        cmbChannel->insertItems(0, QStringList()
         << QApplication::translate("GameChatWidget", "/W \344\270\226\347\225\214", 0)
         << QApplication::translate("GameChatWidget", "/M \345\234\260\345\233\276", 0)
         << QApplication::translate("GameChatWidget", "/G \345\267\245\344\274\232", 0)
         << QApplication::translate("GameChatWidget", "/T \351\230\237\344\274\215", 0)
         << QApplication::translate("GameChatWidget", "/B \345\275\223\345\211\215", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class GameChatWidget: public Ui_GameChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_CHAT_WIDGET_H
