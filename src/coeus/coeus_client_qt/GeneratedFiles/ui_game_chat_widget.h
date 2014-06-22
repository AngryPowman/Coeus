/********************************************************************************
** Form generated from reading UI file 'game_chat_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
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
#include <QtWidgets/QPushButton>
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
    QTextBrowser *txtAllMessages;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *txtWorldMessages;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *txtPrivateMessages;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *txtGuildMessages;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *txtSystemMessages;
    QGridLayout *gridLayout;
    QComboBox *cmbTargetName;
    QComboBox *cmbChannel;
    QLineEdit *txtChatMessage;
    QPushButton *btnSend;

    void setupUi(QWidget *GameChatWidget)
    {
        if (GameChatWidget->objectName().isEmpty())
            GameChatWidget->setObjectName(QStringLiteral("GameChatWidget"));
        GameChatWidget->setWindowModality(Qt::NonModal);
        GameChatWidget->resize(567, 137);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameChatWidget->sizePolicy().hasHeightForWidth());
        GameChatWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GameChatWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(GameChatWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        txtAllMessages = new QTextBrowser(tab);
        txtAllMessages->setObjectName(QStringLiteral("txtAllMessages"));

        horizontalLayout->addWidget(txtAllMessages);

        tabWidget->addTab(tab, QString());
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        txtWorldMessages = new QTextBrowser(widget_2);
        txtWorldMessages->setObjectName(QStringLiteral("txtWorldMessages"));

        horizontalLayout_2->addWidget(txtWorldMessages);

        tabWidget->addTab(widget_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_3 = new QHBoxLayout(tab_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        txtPrivateMessages = new QTextBrowser(tab_3);
        txtPrivateMessages->setObjectName(QStringLiteral("txtPrivateMessages"));

        horizontalLayout_3->addWidget(txtPrivateMessages);

        tabWidget->addTab(tab_3, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        txtGuildMessages = new QTextBrowser(widget);
        txtGuildMessages->setObjectName(QStringLiteral("txtGuildMessages"));

        horizontalLayout_5->addWidget(txtGuildMessages);

        tabWidget->addTab(widget, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_4 = new QHBoxLayout(tab_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        txtSystemMessages = new QTextBrowser(tab_4);
        txtSystemMessages->setObjectName(QStringLiteral("txtSystemMessages"));

        horizontalLayout_4->addWidget(txtSystemMessages);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cmbTargetName = new QComboBox(GameChatWidget);
        cmbTargetName->setObjectName(QStringLiteral("cmbTargetName"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbTargetName->sizePolicy().hasHeightForWidth());
        cmbTargetName->setSizePolicy(sizePolicy1);
        cmbTargetName->setMaximumSize(QSize(176, 20));
        cmbTargetName->setEditable(true);

        gridLayout->addWidget(cmbTargetName, 0, 1, 1, 1);

        cmbChannel = new QComboBox(GameChatWidget);
        cmbChannel->setObjectName(QStringLiteral("cmbChannel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmbChannel->sizePolicy().hasHeightForWidth());
        cmbChannel->setSizePolicy(sizePolicy2);
        cmbChannel->setMaximumSize(QSize(69, 20));

        gridLayout->addWidget(cmbChannel, 0, 0, 1, 1);

        txtChatMessage = new QLineEdit(GameChatWidget);
        txtChatMessage->setObjectName(QStringLiteral("txtChatMessage"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtChatMessage->sizePolicy().hasHeightForWidth());
        txtChatMessage->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(txtChatMessage, 0, 2, 1, 1);

        btnSend = new QPushButton(GameChatWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setMaximumSize(QSize(70, 23));

        gridLayout->addWidget(btnSend, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(GameChatWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameChatWidget);
    } // setupUi

    void retranslateUi(QWidget *GameChatWidget)
    {
        GameChatWidget->setWindowTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GameChatWidget", "\345\205\250\351\203\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget_2), QApplication::translate("GameChatWidget", "\344\270\226\347\225\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GameChatWidget", "\347\247\201\350\201\212", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("GameChatWidget", "\345\205\254\344\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GameChatWidget", "\347\263\273\347\273\237", 0));
        cmbChannel->clear();
        cmbChannel->insertItems(0, QStringList()
         << QApplication::translate("GameChatWidget", "/W \344\270\226\347\225\214", 0)
         << QApplication::translate("GameChatWidget", "/P \347\247\201\350\201\212", 0)
         << QApplication::translate("GameChatWidget", "/G \345\267\245\344\274\232", 0)
        );
        btnSend->setText(QApplication::translate("GameChatWidget", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class GameChatWidget: public Ui_GameChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_CHAT_WIDGET_H
