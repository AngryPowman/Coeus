/********************************************************************************
** Form generated from reading UI file 'game_main_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_MAIN_DIALOG_H
#define UI_GAME_MAIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMainDialog
{
public:
    QAction *action_B;
    QAction *action_F;
    QAction *action_S;
    QAction *action_C;
    QAction *action_Q;
    QAction *action_A;
    QAction *action_E;
    QAction *actionAbout_QT;
    QAction *action;
    QAction *action111;
    QAction *action_CharacterDetails;
    QAction *action_Bag;
    QAction *action_Equipment;
    QAction *action_Friends;
    QAction *action_World;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_G;
    QMenu *menu;
    QMenu *menuSidebar;
    QToolBar *tbLeftSide;
    QToolBar *tbTop;

    void setupUi(QMainWindow *GameMainDialog)
    {
        if (GameMainDialog->objectName().isEmpty())
            GameMainDialog->setObjectName(QStringLiteral("GameMainDialog"));
        GameMainDialog->resize(1289, 763);
        GameMainDialog->setStyleSheet(QStringLiteral(""));
        GameMainDialog->setDocumentMode(false);
        GameMainDialog->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        GameMainDialog->setUnifiedTitleAndToolBarOnMac(true);
        action_B = new QAction(GameMainDialog);
        action_B->setObjectName(QStringLiteral("action_B"));
        action_F = new QAction(GameMainDialog);
        action_F->setObjectName(QStringLiteral("action_F"));
        action_S = new QAction(GameMainDialog);
        action_S->setObjectName(QStringLiteral("action_S"));
        action_C = new QAction(GameMainDialog);
        action_C->setObjectName(QStringLiteral("action_C"));
        action_Q = new QAction(GameMainDialog);
        action_Q->setObjectName(QStringLiteral("action_Q"));
        action_A = new QAction(GameMainDialog);
        action_A->setObjectName(QStringLiteral("action_A"));
        action_E = new QAction(GameMainDialog);
        action_E->setObjectName(QStringLiteral("action_E"));
        actionAbout_QT = new QAction(GameMainDialog);
        actionAbout_QT->setObjectName(QStringLiteral("actionAbout_QT"));
        action = new QAction(GameMainDialog);
        action->setObjectName(QStringLiteral("action"));
        action->setIconVisibleInMenu(true);
        action111 = new QAction(GameMainDialog);
        action111->setObjectName(QStringLiteral("action111"));
        action111->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/coeus_client_qt/AngryPowman.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action111->setIcon(icon);
        action_CharacterDetails = new QAction(GameMainDialog);
        action_CharacterDetails->setObjectName(QStringLiteral("action_CharacterDetails"));
        action_CharacterDetails->setCheckable(true);
        action_CharacterDetails->setShortcutContext(Qt::ApplicationShortcut);
        action_Bag = new QAction(GameMainDialog);
        action_Bag->setObjectName(QStringLiteral("action_Bag"));
        action_Bag->setCheckable(true);
        action_Equipment = new QAction(GameMainDialog);
        action_Equipment->setObjectName(QStringLiteral("action_Equipment"));
        action_Equipment->setCheckable(true);
        action_Friends = new QAction(GameMainDialog);
        action_Friends->setObjectName(QStringLiteral("action_Friends"));
        action_Friends->setCheckable(true);
        action_World = new QAction(GameMainDialog);
        action_World->setObjectName(QStringLiteral("action_World"));
        action_World->setCheckable(true);
        centralwidget = new QWidget(GameMainDialog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        GameMainDialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameMainDialog);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1289, 21));
        menu_G = new QMenu(menubar);
        menu_G->setObjectName(QStringLiteral("menu_G"));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menuSidebar = new QMenu(menubar);
        menuSidebar->setObjectName(QStringLiteral("menuSidebar"));
        menuSidebar->setTearOffEnabled(true);
        GameMainDialog->setMenuBar(menubar);
        tbLeftSide = new QToolBar(GameMainDialog);
        tbLeftSide->setObjectName(QStringLiteral("tbLeftSide"));
        tbLeftSide->setMovable(false);
        tbLeftSide->setAllowedAreas(Qt::LeftToolBarArea);
        tbLeftSide->setIconSize(QSize(48, 48));
        tbLeftSide->setToolButtonStyle(Qt::ToolButtonIconOnly);
        tbLeftSide->setFloatable(false);
        GameMainDialog->addToolBar(Qt::LeftToolBarArea, tbLeftSide);
        tbTop = new QToolBar(GameMainDialog);
        tbTop->setObjectName(QStringLiteral("tbTop"));
        GameMainDialog->addToolBar(Qt::TopToolBarArea, tbTop);

        menubar->addAction(menu_G->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menuSidebar->menuAction());
        menu_G->addAction(action_B);
        menu_G->addSeparator();
        menu_G->addAction(action_E);
        menu_G->addAction(action_F);
        menu_G->addAction(action_S);
        menu_G->addAction(action_Q);
        menu_G->addAction(action_A);
        menu_G->addSeparator();
        menu_G->addAction(action_C);
        menu->addAction(actionAbout_QT);
        menuSidebar->addAction(action_CharacterDetails);
        menuSidebar->addAction(action_Bag);
        menuSidebar->addAction(action_Equipment);
        menuSidebar->addAction(action_World);
        menuSidebar->addAction(action_Friends);
        tbLeftSide->addAction(action_CharacterDetails);
        tbLeftSide->addAction(action_Bag);
        tbLeftSide->addAction(action_Equipment);
        tbLeftSide->addAction(action_World);
        tbLeftSide->addAction(action_Friends);

        retranslateUi(GameMainDialog);

        QMetaObject::connectSlotsByName(GameMainDialog);
    } // setupUi

    void retranslateUi(QMainWindow *GameMainDialog)
    {
        GameMainDialog->setWindowTitle(QApplication::translate("GameMainDialog", "Coeus", 0));
        action_B->setText(QApplication::translate("GameMainDialog", "\347\251\272\351\227\264\345\202\250\347\211\251\345\231\250(&B)", 0));
        action_F->setText(QApplication::translate("GameMainDialog", "\345\245\275\345\217\213(&F)", 0));
        action_S->setText(QApplication::translate("GameMainDialog", "\345\225\206\345\237\216(&S)", 0));
        action_C->setText(QApplication::translate("GameMainDialog", "\350\247\222\350\211\262\345\261\236\346\200\247(&C)...", 0));
        action_Q->setText(QApplication::translate("GameMainDialog", "\344\273\273\345\212\241(&M)", 0));
        action_A->setText(QApplication::translate("GameMainDialog", "\346\210\220\345\260\261(&A)", 0));
        action_E->setText(QApplication::translate("GameMainDialog", "\350\243\205\345\244\207(&E)", 0));
        actionAbout_QT->setText(QApplication::translate("GameMainDialog", "About QT", 0));
        action->setText(QApplication::translate("GameMainDialog", "\347\251\272\351\227\264\345\202\250\347\211\251\345\231\250", 0));
        action111->setText(QApplication::translate("GameMainDialog", "111", 0));
        action_CharacterDetails->setText(QApplication::translate("GameMainDialog", "\345\261\236\346\200\247", 0));
#ifndef QT_NO_TOOLTIP
        action_CharacterDetails->setToolTip(QApplication::translate("GameMainDialog", "\345\261\236\346\200\247(C)", 0));
#endif // QT_NO_TOOLTIP
        action_CharacterDetails->setShortcut(QApplication::translate("GameMainDialog", "I", 0));
        action_Bag->setText(QApplication::translate("GameMainDialog", "\345\202\250\347\211\251\345\231\250", 0));
        action_Equipment->setText(QApplication::translate("GameMainDialog", "\350\243\205\345\244\207", 0));
        action_Friends->setText(QApplication::translate("GameMainDialog", "\344\274\231\344\274\264", 0));
        action_World->setText(QApplication::translate("GameMainDialog", "\344\270\226\347\225\214", 0));
        menu_G->setTitle(QApplication::translate("GameMainDialog", "\346\270\270\346\210\217(&G)", 0));
        menu->setTitle(QApplication::translate("GameMainDialog", "\345\205\263\344\272\216", 0));
        menuSidebar->setTitle(QApplication::translate("GameMainDialog", "menuSidebar", 0));
        tbLeftSide->setWindowTitle(QApplication::translate("GameMainDialog", "toolBar", 0));
        tbTop->setWindowTitle(QApplication::translate("GameMainDialog", "toolBar_2", 0));
    } // retranslateUi

};

namespace Ui {
    class GameMainDialog: public Ui_GameMainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAIN_DIALOG_H
