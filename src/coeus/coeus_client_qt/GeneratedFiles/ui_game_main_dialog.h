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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMainDialog
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GameMainDialog)
    {
        if (GameMainDialog->objectName().isEmpty())
            GameMainDialog->setObjectName(QStringLiteral("GameMainDialog"));
        GameMainDialog->resize(1024, 960);
        GameMainDialog->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(GameMainDialog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        GameMainDialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameMainDialog);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 23));
        GameMainDialog->setMenuBar(menubar);
        statusbar = new QStatusBar(GameMainDialog);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GameMainDialog->setStatusBar(statusbar);
        toolBar = new QToolBar(GameMainDialog);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GameMainDialog->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(GameMainDialog);

        QMetaObject::connectSlotsByName(GameMainDialog);
    } // setupUi

    void retranslateUi(QMainWindow *GameMainDialog)
    {
        GameMainDialog->setWindowTitle(QApplication::translate("GameMainDialog", "\346\267\267\346\262\214\344\271\213\351\227\250", 0));
        toolBar->setWindowTitle(QApplication::translate("GameMainDialog", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class GameMainDialog: public Ui_GameMainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAIN_DIALOG_H
