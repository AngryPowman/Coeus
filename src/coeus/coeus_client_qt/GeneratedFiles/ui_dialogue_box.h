/********************************************************************************
** Form generated from reading UI file 'dialogue_box.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUE_BOX_H
#define UI_DIALOGUE_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogueBox
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblAvatar;
    QToolButton *toolButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *lblName;
    QSpacerItem *verticalSpacer_4;
    QTextBrowser *txtContent;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnPrev;
    QPushButton *btnNext;
    QPushButton *btnEnd;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *linkLayout;
    QWidget *linksWidget;

    void setupUi(QWidget *DialogueBox)
    {
        if (DialogueBox->objectName().isEmpty())
            DialogueBox->setObjectName(QStringLiteral("DialogueBox"));
        DialogueBox->setWindowModality(Qt::NonModal);
        DialogueBox->resize(585, 149);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogueBox->sizePolicy().hasHeightForWidth());
        DialogueBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        DialogueBox->setFont(font);
        DialogueBox->setMouseTracking(true);
        DialogueBox->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(DialogueBox);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(8, 8, 8, 8);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lblAvatar = new QLabel(DialogueBox);
        lblAvatar->setObjectName(QStringLiteral("lblAvatar"));
        lblAvatar->setMinimumSize(QSize(96, 96));
        lblAvatar->setMaximumSize(QSize(96, 96));

        verticalLayout_4->addWidget(lblAvatar);

        toolButton = new QToolButton(DialogueBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setCheckable(false);
        toolButton->setPopupMode(QToolButton::MenuButtonPopup);
        toolButton->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolButton->setAutoRaise(true);

        verticalLayout_4->addWidget(toolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblName = new QLabel(DialogueBox);
        lblName->setObjectName(QStringLiteral("lblName"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblName->sizePolicy().hasHeightForWidth());
        lblName->setSizePolicy(sizePolicy2);
        lblName->setMinimumSize(QSize(447, 18));
        lblName->setMaximumSize(QSize(447, 22));
        lblName->setTextFormat(Qt::RichText);
        lblName->setScaledContents(true);
        lblName->setWordWrap(true);

        verticalLayout->addWidget(lblName);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_3->addLayout(verticalLayout);

        txtContent = new QTextBrowser(DialogueBox);
        txtContent->setObjectName(QStringLiteral("txtContent"));
        sizePolicy.setHeightForWidth(txtContent->sizePolicy().hasHeightForWidth());
        txtContent->setSizePolicy(sizePolicy);
        txtContent->setMaximumSize(QSize(445, 36));
        txtContent->setFocusPolicy(Qt::StrongFocus);
        txtContent->setAutoFillBackground(true);
        txtContent->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        txtContent->setFrameShape(QFrame::NoFrame);
        txtContent->setFrameShadow(QFrame::Plain);
        txtContent->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtContent->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtContent->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        txtContent->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(txtContent);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnPrev = new QPushButton(DialogueBox);
        btnPrev->setObjectName(QStringLiteral("btnPrev"));
        sizePolicy2.setHeightForWidth(btnPrev->sizePolicy().hasHeightForWidth());
        btnPrev->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(btnPrev);

        btnNext = new QPushButton(DialogueBox);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        sizePolicy2.setHeightForWidth(btnNext->sizePolicy().hasHeightForWidth());
        btnNext->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(btnNext);

        btnEnd = new QPushButton(DialogueBox);
        btnEnd->setObjectName(QStringLiteral("btnEnd"));

        horizontalLayout_2->addWidget(btnEnd);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line = new QFrame(DialogueBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        linkLayout = new QVBoxLayout();
        linkLayout->setObjectName(QStringLiteral("linkLayout"));
        linksWidget = new QWidget(DialogueBox);
        linksWidget->setObjectName(QStringLiteral("linksWidget"));
        sizePolicy.setHeightForWidth(linksWidget->sizePolicy().hasHeightForWidth());
        linksWidget->setSizePolicy(sizePolicy);

        linkLayout->addWidget(linksWidget);


        verticalLayout_3->addLayout(linkLayout);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(DialogueBox);

        QMetaObject::connectSlotsByName(DialogueBox);
    } // setupUi

    void retranslateUi(QWidget *DialogueBox)
    {
        DialogueBox->setWindowTitle(QApplication::translate("DialogueBox", "\345\274\240\344\270\211\357\274\210NPC\357\274\211", 0));
        lblAvatar->setText(QString());
        toolButton->setText(QApplication::translate("DialogueBox", "\344\272\244\344\272\222", 0));
        lblName->setText(QString());
        txtContent->setHtml(QApplication::translate("DialogueBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        btnPrev->setText(QApplication::translate("DialogueBox", "\344\270\212\344\270\200\351\241\265", 0));
        btnNext->setText(QApplication::translate("DialogueBox", "\344\270\213\344\270\200\351\241\265", 0));
        btnEnd->setText(QApplication::translate("DialogueBox", "\347\273\223\346\235\237\345\257\271\350\257\235", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogueBox: public Ui_DialogueBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUE_BOX_H
