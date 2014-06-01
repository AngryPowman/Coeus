/********************************************************************************
** Form generated from reading UI file 'game_bag_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_BAG_DIALOG_H
#define UI_GAME_BAG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameBag
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *GameBag)
    {
        if (GameBag->objectName().isEmpty())
            GameBag->setObjectName(QStringLiteral("GameBag"));
        GameBag->setWindowModality(Qt::WindowModal);
        GameBag->resize(674, 467);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameBag->sizePolicy().hasHeightForWidth());
        GameBag->setSizePolicy(sizePolicy);
        GameBag->setAnimated(false);
        GameBag->setDocumentMode(false);
        GameBag->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(GameBag);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        GameBag->setCentralWidget(centralWidget);

        retranslateUi(GameBag);

        QMetaObject::connectSlotsByName(GameBag);
    } // setupUi

    void retranslateUi(QMainWindow *GameBag)
    {
        GameBag->setWindowTitle(QApplication::translate("GameBag", "\345\202\250\347\211\251\345\231\250", 0));
        pushButton_2->setText(QApplication::translate("GameBag", "\344\275\277\347\224\250", 0));
        pushButton->setText(QApplication::translate("GameBag", "\344\270\242\345\274\203", 0));
    } // retranslateUi

};

namespace Ui {
    class GameBag: public Ui_GameBag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_BAG_DIALOG_H
