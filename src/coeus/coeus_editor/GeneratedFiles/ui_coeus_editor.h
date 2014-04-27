/********************************************************************************
** Form generated from reading UI file 'coeus_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COEUS_EDITOR_H
#define UI_COEUS_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoeusEditorMain
{
public:
    QWidget *centralWidget;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *page_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CoeusEditorMain)
    {
        if (CoeusEditorMain->objectName().isEmpty())
            CoeusEditorMain->setObjectName(QStringLiteral("CoeusEditorMain"));
        CoeusEditorMain->resize(746, 515);
        centralWidget = new QWidget(CoeusEditorMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(5, 10, 81, 436));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 81, 384));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 81, 66));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 70, 81, 66));
        toolBox->addItem(page, QString::fromUtf8("\346\270\270\346\210\217\346\225\260\346\215\256"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 98, 28));
        toolBox->addItem(page_2, QString::fromUtf8("\345\205\266\345\256\203"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(90, 10, 646, 436));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);
        CoeusEditorMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CoeusEditorMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 746, 23));
        CoeusEditorMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CoeusEditorMain);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CoeusEditorMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CoeusEditorMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CoeusEditorMain->setStatusBar(statusBar);

        retranslateUi(CoeusEditorMain);

        toolBox->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CoeusEditorMain);
    } // setupUi

    void retranslateUi(QMainWindow *CoeusEditorMain)
    {
        CoeusEditorMain->setWindowTitle(QApplication::translate("CoeusEditorMain", "coeus_editor", 0));
        pushButton->setText(QApplication::translate("CoeusEditorMain", "NPC", 0));
        pushButton_2->setText(QApplication::translate("CoeusEditorMain", "\344\273\273\345\212\241", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("CoeusEditorMain", "\346\270\270\346\210\217\346\225\260\346\215\256", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("CoeusEditorMain", "\345\205\266\345\256\203", 0));
    } // retranslateUi

};

namespace Ui {
    class CoeusEditorMain: public Ui_CoeusEditorMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COEUS_EDITOR_H
