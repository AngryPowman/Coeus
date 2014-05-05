/********************************************************************************
** Form generated from reading UI file 'game_statusbar_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_STATUSBAR_WIDGET_H
#define UI_GAME_STATUSBAR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameStatusBarWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsGravatar;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QProgressBar *progressBar_3;
    QLabel *label_12;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QProgressBar *progressBar;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QProgressBar *progressBar_2;
    QSpacerItem *horizontalSpacer_3;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeWidget;
    QTextBrowser *textBrowser;
    QWidget *tab;

    void setupUi(QWidget *GameStatusBarWidget)
    {
        if (GameStatusBarWidget->objectName().isEmpty())
            GameStatusBarWidget->setObjectName(QStringLiteral("GameStatusBarWidget"));
        GameStatusBarWidget->resize(220, 683);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameStatusBarWidget->sizePolicy().hasHeightForWidth());
        GameStatusBarWidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(GameStatusBarWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphicsGravatar = new QGraphicsView(GameStatusBarWidget);
        graphicsGravatar->setObjectName(QStringLiteral("graphicsGravatar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsGravatar->sizePolicy().hasHeightForWidth());
        graphicsGravatar->setSizePolicy(sizePolicy1);
        graphicsGravatar->setMinimumSize(QSize(96, 96));
        graphicsGravatar->setMaximumSize(QSize(96, 96));
        graphicsGravatar->setStyleSheet(QStringLiteral("background-image :url(:/coeus_client_qt/AngryPowman.jpg);"));
        graphicsGravatar->setFrameShape(QFrame::Box);
        graphicsGravatar->setFrameShadow(QFrame::Plain);
        graphicsGravatar->setLineWidth(1);
        graphicsGravatar->setMidLineWidth(1);
        graphicsGravatar->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setInteractive(false);
        graphicsGravatar->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        horizontalLayout_2->addWidget(graphicsGravatar);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(GameStatusBarWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_9 = new QLabel(GameStatusBarWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_11 = new QLabel(GameStatusBarWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(GameStatusBarWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy2);
        lcdNumber->setMaximumSize(QSize(106, 25));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(5);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(65535));
        lcdNumber->setProperty("intValue", QVariant(65535));

        gridLayout_4->addWidget(lcdNumber, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(GameStatusBarWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        progressBar_3 = new QProgressBar(GameStatusBarWidget);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        sizePolicy.setHeightForWidth(progressBar_3->sizePolicy().hasHeightForWidth());
        progressBar_3->setSizePolicy(sizePolicy);
        progressBar_3->setMaximumSize(QSize(156, 14));
        progressBar_3->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(203, 0, 3);\n"
"}"));
        progressBar_3->setValue(100);
        progressBar_3->setAlignment(Qt::AlignCenter);
        progressBar_3->setTextVisible(true);
        progressBar_3->setOrientation(Qt::Horizontal);
        progressBar_3->setInvertedAppearance(false);
        progressBar_3->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar_3, 0, 1, 1, 1);

        label_12 = new QLabel(GameStatusBarWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setScaledContents(false);

        gridLayout->addWidget(label_12, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_14 = new QLabel(GameStatusBarWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setScaledContents(false);

        gridLayout_2->addWidget(label_14, 0, 0, 1, 1);

        progressBar = new QProgressBar(GameStatusBarWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(156, 14));
        progressBar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(65, 125, 255);\n"
"}"));
        progressBar->setValue(50);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_2->addWidget(progressBar, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_10 = new QLabel(GameStatusBarWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setScaledContents(false);

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        progressBar_2 = new QProgressBar(GameStatusBarWidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setMaximumSize(QSize(156, 13));
        progressBar_2->setAutoFillBackground(false);
        progressBar_2->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(53, 162, 29);\n"
"}"));
        progressBar_2->setValue(92);
        progressBar_2->setAlignment(Qt::AlignCenter);
        progressBar_2->setTextVisible(true);
        progressBar_2->setOrientation(Qt::Horizontal);
        progressBar_2->setInvertedAppearance(false);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_3->addWidget(progressBar_2, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tabWidget = new QTabWidget(GameStatusBarWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        treeWidget = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout_4->addWidget(treeWidget);

        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        sizePolicy3.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy3);
        textBrowser->setTabChangesFocus(true);

        verticalLayout_4->addWidget(textBrowser);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(GameStatusBarWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameStatusBarWidget);
    } // setupUi

    void retranslateUi(QWidget *GameStatusBarWidget)
    {
        GameStatusBarWidget->setWindowTitle(QApplication::translate("GameStatusBarWidget", "Form", 0));
#ifndef QT_NO_TOOLTIP
        graphicsGravatar->setToolTip(QApplication::translate("GameStatusBarWidget", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar->setWhatsThis(QApplication::translate("GameStatusBarWidget", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("GameStatusBarWidget", "<html><head/><body><p><span style=\" font-weight:600;\">\346\204\244\346\200\222\347\232\204\346\263\241\351\235\242</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("GameStatusBarWidget", "\347\255\211\347\272\247\357\274\23232", 0));
        label_11->setText(QApplication::translate("GameStatusBarWidget", "\346\210\230\346\226\227\345\212\233", 0));
        pushButton->setText(QApplication::translate("GameStatusBarWidget", "\346\210\221\347\232\204\345\261\236\346\200\247", 0));
        progressBar_3->setFormat(QApplication::translate("GameStatusBarWidget", "4600/4600", 0));
        label_12->setText(QApplication::translate("GameStatusBarWidget", "\347\224\237\345\221\275\345\200\274", 0));
        label_14->setText(QApplication::translate("GameStatusBarWidget", "\344\275\223\345\212\233\345\200\274", 0));
        progressBar->setFormat(QApplication::translate("GameStatusBarWidget", "1000/2000", 0));
        label_10->setText(QApplication::translate("GameStatusBarWidget", "\345\256\207\345\256\231\346\260\224", 0));
        progressBar_2->setFormat(QApplication::translate("GameStatusBarWidget", "%p%", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("GameStatusBarWidget", "\344\273\273\345\212\241", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("GameStatusBarWidget", "[\344\270\273\347\272\277]\347\254\254\344\270\200\347\253\240 \345\216\206\345\217\262\347\234\237\347\233\270", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("GameStatusBarWidget", "\344\270\215\345\272\224\350\257\245\345\255\230\345\234\250\347\232\204\344\270\226\347\225\214", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("GameStatusBarWidget", "\345\217\262\350\257\227\347\272\247\347\232\204\350\260\210\345\210\244", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("GameStatusBarWidget", "\344\270\200\350\247\246\345\215\263\345\217\221", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        textBrowser->setHtml(QApplication::translate("GameStatusBarWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\211\215\345\276\200\347\240\224\347\251\266\346\211\200\344\270\216<a href=\"[\350\200\201\350\202\211\351\270\241]\"><span style=\" text-decoration: underline; color:#0000ff;\">[\350\200\201\350\202\211\351\270\241]</span></a>\346\267\261\345\205\245\344\272\244\350\260\210\357\274\214\344\272\206\350\247\243\347\273\264\347\272\263\346\226\257\344\270\226\347\225\214\347\232\204\350\265\267\346\272\220\344\270\216\345\216\206\345\217\262\343\200\202</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GameStatusBarWidget", "\344\273\273\345\212\241\350\277\275\350\270\252", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GameStatusBarWidget", "\345\216\273\345\271\264\344\271\260\347\232\204\347\231\273\345\261\261\345\214\205", 0));
    } // retranslateUi

};

namespace Ui {
    class GameStatusBarWidget: public Ui_GameStatusBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_STATUSBAR_WIDGET_H
