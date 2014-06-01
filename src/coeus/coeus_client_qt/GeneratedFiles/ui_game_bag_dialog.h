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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameBag
{
public:
    QWidget *centralWidget;
    QTreeWidget *gameItemWidget;
    QTableView *tableView;
    QWidget *widget;
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
        gameItemWidget = new QTreeWidget(centralWidget);
        new QTreeWidgetItem(gameItemWidget);
        new QTreeWidgetItem(gameItemWidget);
        gameItemWidget->setObjectName(QStringLiteral("gameItemWidget"));
        gameItemWidget->setGeometry(QRect(364, 204, 256, 192));
        gameItemWidget->setRootIsDecorated(false);
        gameItemWidget->setItemsExpandable(false);
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 40, 256, 192));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        GameBag->setCentralWidget(centralWidget);

        retranslateUi(GameBag);

        QMetaObject::connectSlotsByName(GameBag);
    } // setupUi

    void retranslateUi(QMainWindow *GameBag)
    {
        GameBag->setWindowTitle(QApplication::translate("GameBag", "\345\202\250\347\211\251\345\231\250", 0));
        QTreeWidgetItem *___qtreewidgetitem = gameItemWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("GameBag", "\346\217\217\350\277\260", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("GameBag", "\346\214\201\346\234\211\346\225\260\351\207\217", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("GameBag", "\347\261\273\345\236\213", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("GameBag", "\347\211\251\345\223\201\345\220\215\347\247\260", 0));

        const bool __sortingEnabled = gameItemWidget->isSortingEnabled();
        gameItemWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = gameItemWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(3, QApplication::translate("GameBag", "\345\260\217\345\217\243\345\276\204\346\277\200\345\205\211\346\236\252\357\274\214\345\250\201\345\212\233\346\203\212\344\272\272\343\200\202", 0));
        ___qtreewidgetitem1->setText(2, QApplication::translate("GameBag", "1", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("GameBag", "\346\255\246\345\231\250", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("GameBag", "\351\230\277\346\263\242\347\275\227\346\277\200\345\205\211\346\236\252\\n", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = gameItemWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(3, QApplication::translate("GameBag", "\345\216\273\351\235\242\350\257\225\351\211\264\351\273\204\345\270\210\347\232\204\346\216\250\350\215\220\344\277\241\343\200\202", 0));
        ___qtreewidgetitem2->setText(2, QApplication::translate("GameBag", "1", 0));
        ___qtreewidgetitem2->setText(1, QApplication::translate("GameBag", "\344\273\273\345\212\241\347\211\251\345\223\201", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("GameBag", "\350\200\201\350\202\211\351\270\241\347\232\204\346\216\250\350\215\220\344\277\241", 0));
        gameItemWidget->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QApplication::translate("GameBag", "\344\275\277\347\224\250", 0));
        pushButton->setText(QApplication::translate("GameBag", "\344\270\242\345\274\203", 0));
    } // retranslateUi

};

namespace Ui {
    class GameBag: public Ui_GameBag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_BAG_DIALOG_H
