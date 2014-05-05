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
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_G;
    QMenu *menu;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *GameMainDialog)
    {
        if (GameMainDialog->objectName().isEmpty())
            GameMainDialog->setObjectName(QStringLiteral("GameMainDialog"));
        GameMainDialog->resize(457, 327);
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
        centralwidget = new QWidget(GameMainDialog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        GameMainDialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameMainDialog);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 457, 23));
        menu_G = new QMenu(menubar);
        menu_G->setObjectName(QStringLiteral("menu_G"));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        GameMainDialog->setMenuBar(menubar);
        toolBar = new QToolBar(GameMainDialog);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GameMainDialog->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(GameMainDialog);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        GameMainDialog->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menu_G->menuAction());
        menubar->addAction(menu->menuAction());
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

        retranslateUi(GameMainDialog);

        QMetaObject::connectSlotsByName(GameMainDialog);
    } // setupUi

    void retranslateUi(QMainWindow *GameMainDialog)
    {
        GameMainDialog->setWindowTitle(QApplication::translate("GameMainDialog", "\346\267\267\346\262\214\344\271\213\351\227\250", 0));
        action_B->setText(QApplication::translate("GameMainDialog", "\347\251\272\351\227\264\345\202\250\347\211\251\345\231\250(&B)", 0));
        action_F->setText(QApplication::translate("GameMainDialog", "\345\245\275\345\217\213(&F)", 0));
        action_S->setText(QApplication::translate("GameMainDialog", "\345\225\206\345\237\216(&S)", 0));
        action_C->setText(QApplication::translate("GameMainDialog", "\350\247\222\350\211\262\345\261\236\346\200\247(&C)...", 0));
        action_Q->setText(QApplication::translate("GameMainDialog", "\344\273\273\345\212\241(&M)", 0));
        action_A->setText(QApplication::translate("GameMainDialog", "\346\210\220\345\260\261(&A)", 0));
        action_E->setText(QApplication::translate("GameMainDialog", "\350\243\205\345\244\207(&E)", 0));
        actionAbout_QT->setText(QApplication::translate("GameMainDialog", "About QT", 0));
        menu_G->setTitle(QApplication::translate("GameMainDialog", "\346\270\270\346\210\217(&G)", 0));
        menu->setTitle(QApplication::translate("GameMainDialog", "\345\205\263\344\272\216", 0));
        toolBar->setWindowTitle(QApplication::translate("GameMainDialog", "toolBar", 0));
        toolBar_2->setWindowTitle(QApplication::translate("GameMainDialog", "toolBar_2", 0));
    } // retranslateUi

};

namespace Ui {
    class GameMainDialog: public Ui_GameMainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAIN_DIALOG_H
