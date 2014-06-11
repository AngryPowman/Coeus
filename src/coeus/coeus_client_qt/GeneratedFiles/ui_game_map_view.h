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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menuNPC;

    void setupUi(QMainWindow *GameMapView)
    {
        if (GameMapView->objectName().isEmpty())
            GameMapView->setObjectName(QStringLiteral("GameMapView"));
        GameMapView->resize(800, 600);
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
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        GameMapView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameMapView);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menuNPC = new QMenu(menubar);
        menuNPC->setObjectName(QStringLiteral("menuNPC"));
        GameMapView->setMenuBar(menubar);

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
    } // retranslateUi

};

namespace Ui {
    class GameMapView: public Ui_GameMapView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAP_VIEW_H
