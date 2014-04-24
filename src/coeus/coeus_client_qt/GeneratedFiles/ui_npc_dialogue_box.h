/********************************************************************************
** Form generated from reading UI file 'npc_dialogue_box.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NPC_DIALOGUE_BOX_H
#define UI_NPC_DIALOGUE_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_missionDialogueBox
{
public:
    QGraphicsView *graphicsView;
    QTextBrowser *textBrowser;
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *missionDialogueBox)
    {
        if (missionDialogueBox->objectName().isEmpty())
            missionDialogueBox->setObjectName(QStringLiteral("missionDialogueBox"));
        missionDialogueBox->resize(435, 148);
        graphicsView = new QGraphicsView(missionDialogueBox);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 15, 86, 86));
        textBrowser = new QTextBrowser(missionDialogueBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(105, 15, 321, 86));
        textBrowser->setFocusPolicy(Qt::StrongFocus);
        textBrowser->setAutoFillBackground(true);
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        line = new QFrame(missionDialogueBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 105, 416, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(missionDialogueBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(275, 120, 75, 23));
        pushButton_2 = new QPushButton(missionDialogueBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(355, 120, 75, 23));

        retranslateUi(missionDialogueBox);

        QMetaObject::connectSlotsByName(missionDialogueBox);
    } // setupUi

    void retranslateUi(QWidget *missionDialogueBox)
    {
        missionDialogueBox->setWindowTitle(QApplication::translate("missionDialogueBox", "\345\274\240\344\270\211\357\274\210NPC\357\274\211", 0));
        textBrowser->setHtml(QApplication::translate("missionDialogueBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\224\224\342\200\246\342\200\246\351\202\243\344\275\240\345\216\273<a href=\"url_event://type=npc_info&amp;id=10001\"><span style=\" text-decoration: underline; color:#0000ff;\">\350\200\201\350\202\211\351\270\241\351\246\226\345\270\255\351\211\264\345\256\232\345\256\230</span></a>\351\202\243\351\207\214\345\270\256\346\210\221\351\227\256\344\270\200\344\270\213\346\234\200\350\277\221\351\203\275\346\234\211\345\223\252\344\272\233\346\226\260\347\246\217\345\210\251\345\220\247\343\200\202\350\243\205\345\244\207\346\210\221\350\277\231\345\204\277\345\244"
                        "\232\347\232\204\346\230\257\343\200\202</p></body></html>", 0));
        pushButton->setText(QApplication::translate("missionDialogueBox", "\346\216\245\345\217\227\344\273\273\345\212\241", 0));
        pushButton_2->setText(QApplication::translate("missionDialogueBox", "\346\213\222\347\273\235", 0));
    } // retranslateUi

};

namespace Ui {
    class missionDialogueBox: public Ui_missionDialogueBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NPC_DIALOGUE_BOX_H
