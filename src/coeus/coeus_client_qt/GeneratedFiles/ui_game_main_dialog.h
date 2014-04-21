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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTabWidget>
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
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *tab;
    QMenuBar *menubar;
    QMenu *menu_G;
    QMenu *menu;
    QToolBar *toolBar;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QGraphicsView *graphicsGravatar;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QProgressBar *progressBar;
    QLabel *label_11;
    QLCDNumber *lcdNumber;
    QDockWidget *dockWidget_5;
    QWidget *dockWidgetContents_5;

    void setupUi(QMainWindow *GameMainDialog)
    {
        if (GameMainDialog->objectName().isEmpty())
            GameMainDialog->setObjectName(QStringLiteral("GameMainDialog"));
        GameMainDialog->resize(826, 610);
        GameMainDialog->setStyleSheet(QStringLiteral(""));
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
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(5, 0, 631, 431));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        GameMainDialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameMainDialog);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 826, 23));
        menu_G = new QMenu(menubar);
        menu_G->setObjectName(QStringLiteral("menu_G"));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        GameMainDialog->setMenuBar(menubar);
        toolBar = new QToolBar(GameMainDialog);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GameMainDialog->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget_3 = new QDockWidget(GameMainDialog);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidget_3->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_3->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        graphicsGravatar = new QGraphicsView(dockWidgetContents_3);
        graphicsGravatar->setObjectName(QStringLiteral("graphicsGravatar"));
        graphicsGravatar->setGeometry(QRect(5, 5, 96, 96));
        graphicsGravatar->setStyleSheet(QStringLiteral("background-image :url(:/coeus_client_qt/AngryPowman.jpg);"));
        graphicsGravatar->setFrameShape(QFrame::Box);
        graphicsGravatar->setFrameShadow(QFrame::Plain);
        graphicsGravatar->setLineWidth(1);
        graphicsGravatar->setMidLineWidth(1);
        graphicsGravatar->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setInteractive(false);
        graphicsGravatar->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        label = new QLabel(dockWidgetContents_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(115, 5, 76, 16));
        label_2 = new QLabel(dockWidgetContents_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(115, 20, 76, 16));
        line = new QFrame(dockWidgetContents_3);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(5, 125, 211, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(dockWidgetContents_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(5, 110, 31, 16));
        label_4 = new QLabel(dockWidgetContents_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 110, 31, 16));
        label_5 = new QLabel(dockWidgetContents_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(75, 110, 31, 16));
        label_6 = new QLabel(dockWidgetContents_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 110, 31, 16));
        label_7 = new QLabel(dockWidgetContents_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(145, 110, 31, 16));
        label_8 = new QLabel(dockWidgetContents_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 110, 31, 16));
        label_9 = new QLabel(dockWidgetContents_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 145, 106, 16));
        label_10 = new QLabel(dockWidgetContents_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 170, 46, 16));
        progressBar = new QProgressBar(dockWidgetContents_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(60, 170, 151, 16));
        progressBar->setValue(40);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        label_11 = new QLabel(dockWidgetContents_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(115, 50, 71, 16));
        lcdNumber = new QLCDNumber(dockWidgetContents_3);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(105, 70, 91, 31));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(5);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(25602));
        lcdNumber->setProperty("intValue", QVariant(25602));
        dockWidget_3->setWidget(dockWidgetContents_3);
        GameMainDialog->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_3);
        dockWidget_5 = new QDockWidget(GameMainDialog);
        dockWidget_5->setObjectName(QStringLiteral("dockWidget_5"));
        dockWidget_5->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidget_5->setAllowedAreas(Qt::BottomDockWidgetArea);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        dockWidget_5->setWidget(dockWidgetContents_5);
        GameMainDialog->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_5);

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

        tabWidget->setCurrentIndex(0);


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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GameMainDialog", "\347\273\264\347\272\263\346\226\257\344\275\215\351\235\242", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GameMainDialog", "Tab 1", 0));
        menu_G->setTitle(QApplication::translate("GameMainDialog", "\346\270\270\346\210\217(&G)", 0));
        menu->setTitle(QApplication::translate("GameMainDialog", "\345\205\263\344\272\216", 0));
        toolBar->setWindowTitle(QApplication::translate("GameMainDialog", "toolBar", 0));
        dockWidget_3->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        graphicsGravatar->setToolTip(QApplication::translate("GameMainDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar->setWhatsThis(QApplication::translate("GameMainDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p><span style=\" font-weight:600;\">\346\204\244\346\200\222\347\232\204\346\263\241\351\235\242</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p>\346\234\252\350\257\273\344\277\241\346\201\257(<span style=\" font-weight:600; color:#ff0000;\">4</span>)</p></body></html>", 0));
        label_3->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\347\211\251\345\223\201</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\350\243\205\345\244\207</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\345\225\206\345\272\227</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\345\245\275\345\217\213</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\344\273\273\345\212\241</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\346\210\220\345\260\261</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("GameMainDialog", "<html><head/><body><p>\347\255\211\347\272\247\357\274\23232 \357\274\210\351\273\204\351\207\221\357\274\211</p></body></html>", 0));
        label_10->setText(QApplication::translate("GameMainDialog", "\345\256\207\345\256\231\346\260\224\357\274\232", 0));
        label_11->setText(QApplication::translate("GameMainDialog", "\345\275\223\345\211\215\346\210\230\346\226\227\345\212\233", 0));
    } // retranslateUi

};

namespace Ui {
    class GameMainDialog: public Ui_GameMainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAIN_DIALOG_H
