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
    QLabel *lblNickname;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLCDNumber *lcdPower;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QProgressBar *progressHp;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QProgressBar *progressExp;
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
        GameStatusBarWidget->resize(216, 676);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameStatusBarWidget->sizePolicy().hasHeightForWidth());
        GameStatusBarWidget->setSizePolicy(sizePolicy);
        GameStatusBarWidget->setMaximumSize(QSize(216, 676));
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
        lblNickname = new QLabel(GameStatusBarWidget);
        lblNickname->setObjectName(QStringLiteral("lblNickname"));

        verticalLayout->addWidget(lblNickname);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_9 = new QLabel(GameStatusBarWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setScaledContents(false);

        horizontalLayout->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_11 = new QLabel(GameStatusBarWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        lcdPower = new QLCDNumber(GameStatusBarWidget);
        lcdPower->setObjectName(QStringLiteral("lcdPower"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lcdPower->sizePolicy().hasHeightForWidth());
        lcdPower->setSizePolicy(sizePolicy3);
        lcdPower->setMaximumSize(QSize(106, 25));
        lcdPower->setFrameShape(QFrame::NoFrame);
        lcdPower->setFrameShadow(QFrame::Raised);
        lcdPower->setSmallDecimalPoint(false);
        lcdPower->setDigitCount(5);
        lcdPower->setMode(QLCDNumber::Dec);
        lcdPower->setSegmentStyle(QLCDNumber::Flat);
        lcdPower->setProperty("value", QVariant(0));
        lcdPower->setProperty("intValue", QVariant(0));

        gridLayout_4->addWidget(lcdPower, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(GameStatusBarWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMinimumSize(QSize(36, 12));
        label_12->setScaledContents(false);

        horizontalLayout_3->addWidget(label_12);

        progressHp = new QProgressBar(GameStatusBarWidget);
        progressHp->setObjectName(QStringLiteral("progressHp"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(progressHp->sizePolicy().hasHeightForWidth());
        progressHp->setSizePolicy(sizePolicy4);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        progressHp->setFont(font);
        progressHp->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(203, 0, 3);\n"
"}"));
        progressHp->setValue(100);
        progressHp->setAlignment(Qt::AlignCenter);
        progressHp->setTextVisible(true);
        progressHp->setOrientation(Qt::Horizontal);
        progressHp->setInvertedAppearance(false);
        progressHp->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_3->addWidget(progressHp);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(GameStatusBarWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(36, 12));
        label_10->setScaledContents(false);

        horizontalLayout_5->addWidget(label_10);

        progressExp = new QProgressBar(GameStatusBarWidget);
        progressExp->setObjectName(QStringLiteral("progressExp"));
        progressExp->setFont(font);
        progressExp->setAutoFillBackground(false);
        progressExp->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(53, 162, 29);\n"
"}"));
        progressExp->setValue(92);
        progressExp->setAlignment(Qt::AlignCenter);
        progressExp->setTextVisible(true);
        progressExp->setOrientation(Qt::Horizontal);
        progressExp->setInvertedAppearance(false);
        progressExp->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_5->addWidget(progressExp);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget = new QTabWidget(GameStatusBarWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy5);
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
        sizePolicy5.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy5);
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
        lblNickname->setText(QApplication::translate("GameStatusBarWidget", "<html><head/><body><p><span style=\" font-weight:600;\">\346\204\244\346\200\222\347\232\204\346\263\241\351\235\242</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("GameStatusBarWidget", "\350\201\214\344\270\232\357\274\232\351\225\234\345\255\220\347\214\216\344\272\272", 0));
        label_11->setText(QApplication::translate("GameStatusBarWidget", "\346\210\230\346\226\227\345\212\233", 0));
        label_12->setText(QApplication::translate("GameStatusBarWidget", "\347\224\237\345\221\275\345\200\274", 0));
        progressHp->setFormat(QApplication::translate("GameStatusBarWidget", "4600/4600", 0));
        label_10->setText(QApplication::translate("GameStatusBarWidget", "\345\256\207\345\256\231\346\260\224", 0));
        progressExp->setFormat(QApplication::translate("GameStatusBarWidget", "%p%", 0));
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
