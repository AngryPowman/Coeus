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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NPCDialogueBox
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblNPCAvatar;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QFrame *line;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;

    void setupUi(QWidget *NPCDialogueBox)
    {
        if (NPCDialogueBox->objectName().isEmpty())
            NPCDialogueBox->setObjectName(QStringLiteral("NPCDialogueBox"));
        NPCDialogueBox->resize(581, 122);
        horizontalLayout = new QHBoxLayout(NPCDialogueBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lblNPCAvatar = new QLabel(NPCDialogueBox);
        lblNPCAvatar->setObjectName(QStringLiteral("lblNPCAvatar"));
        lblNPCAvatar->setMinimumSize(QSize(96, 96));
        lblNPCAvatar->setMaximumSize(QSize(96, 96));

        verticalLayout_4->addWidget(lblNPCAvatar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(NPCDialogueBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(447, 18));
        label_3->setScaledContents(true);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        line = new QFrame(NPCDialogueBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        verticalLayout_3->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(NPCDialogueBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(445, 36));
        textBrowser->setMaximumSize(QSize(445, 36));
        textBrowser->setFocusPolicy(Qt::StrongFocus);
        textBrowser->setAutoFillBackground(true);
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);

        verticalLayout_3->addWidget(textBrowser);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(NPCDialogueBox);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);

        verticalLayout_2->addWidget(frame);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(NPCDialogueBox);

        QMetaObject::connectSlotsByName(NPCDialogueBox);
    } // setupUi

    void retranslateUi(QWidget *NPCDialogueBox)
    {
        NPCDialogueBox->setWindowTitle(QApplication::translate("NPCDialogueBox", "\345\274\240\344\270\211\357\274\210NPC\357\274\211", 0));
        lblNPCAvatar->setText(QString());
        label_3->setText(QApplication::translate("NPCDialogueBox", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\350\200\201\350\202\211\351\270\241 </span><span style=\" font-size:10pt;\">\351\246\226\345\270\255\346\267\253\347\247\275\351\211\264\345\256\232\345\256\230</span></p></body></html>", 0));
        textBrowser->setHtml(QApplication::translate("NPCDialogueBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\210\221\347\232\204<a href=\"#\"><span style=\" text-decoration: underline; color:#0000ff;\">\346\216\250\350\277\233\345\231\250\345\215\212\346\210\220\345\223\201</span></a>\346\216\211\350\220\275\345\234\250\345\256\236\351\252\214\345\256\244\351\207\214\344\272\206\357\274\214\344\275\240\345\270\256\346\210\221\345\216\273\346\213\277\350\277\207\346\235\245\357\274\214\346\210\221\345\260\261\346\212\212<a href=\"#\"><span style=\" text-decoration: underline; color:#0000ff;\">\347\247\215\345\255\220</span></a>\347\273\231\344\275\240\343\200\202</p><"
                        "/body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class NPCDialogueBox: public Ui_NPCDialogueBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NPC_DIALOGUE_BOX_H
