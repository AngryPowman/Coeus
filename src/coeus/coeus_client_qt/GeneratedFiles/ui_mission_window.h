/********************************************************************************
** Form generated from reading UI file 'mission_window.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSION_WINDOW_H
#define UI_MISSION_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MissionWindow
{
public:
    QWidget *centralWidget;
    QTreeView *treeView;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *MissionWindow)
    {
        if (MissionWindow->objectName().isEmpty())
            MissionWindow->setObjectName(QStringLiteral("MissionWindow"));
        MissionWindow->resize(713, 534);
        centralWidget = new QWidget(MissionWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(4, 8, 209, 521));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(216, 8, 493, 521));
        MissionWindow->setCentralWidget(centralWidget);

        retranslateUi(MissionWindow);

        QMetaObject::connectSlotsByName(MissionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MissionWindow)
    {
        MissionWindow->setWindowTitle(QApplication::translate("MissionWindow", "MissionWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MissionWindow: public Ui_MissionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSION_WINDOW_H
