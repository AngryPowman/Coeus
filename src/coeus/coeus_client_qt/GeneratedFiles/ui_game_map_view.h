/********************************************************************************
** Form generated from reading UI file 'game_map_view.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_MAP_VIEW_H
#define UI_GAME_MAP_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMapView
{
public:
    QAction *action200;
    QAction *action100;
    QAction *action80;
    QAction *action50;
    QAction *action_F;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menuNPC;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QTabWidget *buttomInfoTabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *GameMapView)
    {
        if (GameMapView->objectName().isEmpty())
            GameMapView->setObjectName(QStringLiteral("GameMapView"));
        GameMapView->resize(736, 539);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameMapView->sizePolicy().hasHeightForWidth());
        GameMapView->setSizePolicy(sizePolicy);
        action200 = new QAction(GameMapView);
        action200->setObjectName(QStringLiteral("action200"));
        action100 = new QAction(GameMapView);
        action100->setObjectName(QStringLiteral("action100"));
        action80 = new QAction(GameMapView);
        action80->setObjectName(QStringLiteral("action80"));
        action50 = new QAction(GameMapView);
        action50->setObjectName(QStringLiteral("action50"));
        action_F = new QAction(GameMapView);
        action_F->setObjectName(QStringLiteral("action_F"));
        centralwidget = new QWidget(GameMapView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        GameMapView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameMapView);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 736, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menuNPC = new QMenu(menubar);
        menuNPC->setObjectName(QStringLiteral("menuNPC"));
        GameMapView->setMenuBar(menubar);
        dockWidget = new QDockWidget(GameMapView);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable);
        dockWidget->setAllowedAreas(Qt::BottomDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttomInfoTabWidget = new QTabWidget(dockWidgetContents);
        buttomInfoTabWidget->setObjectName(QStringLiteral("buttomInfoTabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 24, 157, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 48, 157, 16));

        horizontalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 48, 329, 21));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMaximumSize(QSize(73, 19));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1, Qt::AlignHCenter);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(12, 20, 317, 22));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMaximumSize(QSize(73, 16));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(185, 15));
        progressBar->setValue(20);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        horizontalLayout_3->addWidget(groupBox);

        buttomInfoTabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_2 = new QHBoxLayout(tab_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        treeWidget = new QTreeWidget(tab_3);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        treeWidget->setFont(font);
        treeWidget->setRootIsDecorated(false);
        treeWidget->setUniformRowHeights(true);
        treeWidget->setItemsExpandable(false);
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setHighlightSections(true);

        horizontalLayout_2->addWidget(treeWidget);

        buttomInfoTabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(buttomInfoTabWidget);

        dockWidget->setWidget(dockWidgetContents);
        GameMapView->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuNPC->menuAction());
        menu->addAction(menu_2->menuAction());
        menu_2->addAction(action200);
        menu_2->addAction(action100);
        menu_2->addAction(action80);
        menu_2->addAction(action50);
        menuNPC->addAction(action_F);
        menuNPC->addSeparator();

        retranslateUi(GameMapView);

        buttomInfoTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameMapView);
    } // setupUi

    void retranslateUi(QMainWindow *GameMapView)
    {
        GameMapView->setWindowTitle(QApplication::translate("GameMapView", "\346\237\217\346\236\227\345\223\210\347\211\271\345\244\247\351\231\206", 0));
        action200->setText(QApplication::translate("GameMapView", "200%", 0));
        action100->setText(QApplication::translate("GameMapView", "100%", 0));
        action80->setText(QApplication::translate("GameMapView", "80%", 0));
        action50->setText(QApplication::translate("GameMapView", "50%", 0));
        action_F->setText(QApplication::translate("GameMapView", "\350\207\252\345\212\250\345\257\273\350\267\257(&F)...", 0));
        menu->setTitle(QApplication::translate("GameMapView", "\345\234\260\345\233\276", 0));
        menu_2->setTitle(QApplication::translate("GameMapView", "\346\257\224\344\276\213", 0));
        menuNPC->setTitle(QApplication::translate("GameMapView", "NPC", 0));
        dockWidget->setWindowTitle(QApplication::translate("GameMapView", "\346\237\217\346\236\227\345\223\210\347\211\271\344\270\226\347\225\214", 0));
        groupBox_2->setTitle(QApplication::translate("GameMapView", "\344\270\226\347\225\214\346\246\202\345\206\265", 0));
        label->setText(QApplication::translate("GameMapView", "\344\275\215\351\235\242\345\220\215\347\247\260\357\274\232\347\273\264\347\272\263\346\226\257\344\270\226\347\225\214", 0));
        label_2->setText(QApplication::translate("GameMapView", "\347\247\221\346\212\200\347\261\273\345\236\213\357\274\232\346\230\237\351\231\205\346\226\207\346\230\216", 0));
        groupBox->setTitle(QApplication::translate("GameMapView", "\344\270\252\344\272\272\346\210\220\345\260\261", 0));
        label_4->setText(QApplication::translate("GameMapView", "\344\270\226\347\225\214\344\272\262\345\222\214\345\272\246\357\274\232", 0));
        label_5->setText(QApplication::translate("GameMapView", "65535", 0));
        label_3->setText(QApplication::translate("GameMapView", "\344\270\226\347\225\214\345\256\214\346\210\220\345\272\246\357\274\232", 0));
        buttomInfoTabWidget->setTabText(buttomInfoTabWidget->indexOf(tab), QApplication::translate("GameMapView", "\346\246\202\345\206\265\344\270\216\346\210\220\345\260\261", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("GameMapView", "\347\212\266\346\200\201", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("GameMapView", "\350\272\253\344\273\275", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("GameMapView", "\347\216\251\345\256\266\345\220\215\347\247\260", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QApplication::translate("GameMapView", "\346\255\243\345\234\250\350\260\203\346\225\264\344\270\226\347\225\214\346\263\225\345\210\231", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("GameMapView", "\344\275\215\351\235\242\347\273\237\346\262\273\350\200\205", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("GameMapView", "\344\270\215\345\260\204\350\204\270\350\277\230\346\230\257\345\245\275\346\234\213\345\217\213", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(2, QApplication::translate("GameMapView", "\346\255\243\345\234\250\350\260\203\346\225\264\344\274\240\351\200\201\344\273\267\346\240\274", 0));
        ___qtreewidgetitem2->setText(1, QApplication::translate("GameMapView", "\344\275\215\351\235\242\350\265\204\346\272\220\346\243\200\345\257\237\345\256\230", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("GameMapView", "\350\200\201\350\202\211\351\270\241", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(2, QApplication::translate("GameMapView", "\346\255\243\345\234\250\346\210\230\346\226\227", 0));
        ___qtreewidgetitem3->setText(1, QApplication::translate("GameMapView", "\346\260\270\344\271\205\345\261\205\346\260\221", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("GameMapView", "\345\215\242\345\263\260\346\273\241", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(2, QApplication::translate("GameMapView", "\346\255\243\345\234\250\351\207\207\347\237\277", 0));
        ___qtreewidgetitem4->setText(1, QApplication::translate("GameMapView", "\346\260\270\344\271\205\345\261\205\346\260\221", 0));
        ___qtreewidgetitem4->setText(0, QApplication::translate("GameMapView", "\351\255\202\351\255\204\345\246\226\346\242\246", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(2, QApplication::translate("GameMapView", "\345\276\205\346\234\272", 0));
        ___qtreewidgetitem5->setText(1, QApplication::translate("GameMapView", "\346\260\270\344\271\205\345\261\205\346\260\221", 0));
        ___qtreewidgetitem5->setText(0, QApplication::translate("GameMapView", "\345\215\241\346\213\211", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(2, QApplication::translate("GameMapView", "\345\276\205\346\234\272", 0));
        ___qtreewidgetitem6->setText(1, QApplication::translate("GameMapView", "\346\227\205\350\241\214\350\200\205", 0));
        ___qtreewidgetitem6->setText(0, QApplication::translate("GameMapView", "\346\257\224\344\275\240\302\267\346\234\211\351\222\261", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        buttomInfoTabWidget->setTabText(buttomInfoTabWidget->indexOf(tab_3), QApplication::translate("GameMapView", "\345\234\250\347\272\277\347\216\251\345\256\266", 0));
    } // retranslateUi

};

namespace Ui {
    class GameMapView: public Ui_GameMapView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAP_VIEW_H
