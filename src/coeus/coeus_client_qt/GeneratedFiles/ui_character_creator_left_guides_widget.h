/********************************************************************************
** Form generated from reading UI file 'character_creator_left_guides_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H
#define UI_CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_LeftGuidesWidget
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lblPage_0;
    QLabel *lblPage_3;
    QLabel *lblPage_4;
    QLabel *lblPage_2;
    QLabel *lblPage_1;
    QLabel *lblArrow;
    QLabel *lblPage_5;

    void setupUi(QWidget *CharacterCreator_LeftGuidesWidget)
    {
        if (CharacterCreator_LeftGuidesWidget->objectName().isEmpty())
            CharacterCreator_LeftGuidesWidget->setObjectName(QStringLiteral("CharacterCreator_LeftGuidesWidget"));
        CharacterCreator_LeftGuidesWidget->resize(164, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CharacterCreator_LeftGuidesWidget->sizePolicy().hasHeightForWidth());
        CharacterCreator_LeftGuidesWidget->setSizePolicy(sizePolicy);
        CharacterCreator_LeftGuidesWidget->setMinimumSize(QSize(164, 400));
        CharacterCreator_LeftGuidesWidget->setMaximumSize(QSize(164, 16777215));
        frame = new QFrame(CharacterCreator_LeftGuidesWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 163, 400));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(163, 400));
        frame->setMaximumSize(QSize(164, 400));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(48, 63, 78, 114));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblPage_0 = new QLabel(layoutWidget);
        lblPage_0->setObjectName(QStringLiteral("lblPage_0"));

        gridLayout->addWidget(lblPage_0, 0, 1, 1, 1);

        lblPage_3 = new QLabel(layoutWidget);
        lblPage_3->setObjectName(QStringLiteral("lblPage_3"));

        gridLayout->addWidget(lblPage_3, 3, 1, 1, 1);

        lblPage_4 = new QLabel(layoutWidget);
        lblPage_4->setObjectName(QStringLiteral("lblPage_4"));

        gridLayout->addWidget(lblPage_4, 4, 1, 1, 1);

        lblPage_2 = new QLabel(layoutWidget);
        lblPage_2->setObjectName(QStringLiteral("lblPage_2"));

        gridLayout->addWidget(lblPage_2, 2, 1, 1, 1);

        lblPage_1 = new QLabel(layoutWidget);
        lblPage_1->setObjectName(QStringLiteral("lblPage_1"));
        lblPage_1->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(lblPage_1, 1, 1, 1, 1);

        lblArrow = new QLabel(layoutWidget);
        lblArrow->setObjectName(QStringLiteral("lblArrow"));
        lblArrow->setPixmap(QPixmap(QString::fromUtf8(":/coeus_client_qt/right_arrow.png")));

        gridLayout->addWidget(lblArrow, 0, 0, 1, 1);

        lblPage_5 = new QLabel(layoutWidget);
        lblPage_5->setObjectName(QStringLiteral("lblPage_5"));

        gridLayout->addWidget(lblPage_5, 5, 1, 1, 1);


        retranslateUi(CharacterCreator_LeftGuidesWidget);

        QMetaObject::connectSlotsByName(CharacterCreator_LeftGuidesWidget);
    } // setupUi

    void retranslateUi(QWidget *CharacterCreator_LeftGuidesWidget)
    {
        CharacterCreator_LeftGuidesWidget->setWindowTitle(QApplication::translate("CharacterCreator_LeftGuidesWidget", "Form", 0));
        lblPage_0->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "\350\277\233\345\205\245\344\270\226\347\225\214", 0));
        lblPage_3->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\346\200\247\346\240\274\344\270\216\345\201\217\345\245\275</p></body></html>", 0));
        lblPage_4->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\344\270\252\344\272\272\345\217\262\350\257\227</p></body></html>", 0));
        lblPage_2->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\350\201\214\344\270\232\344\270\216\344\277\241\344\273\260</p></body></html>", 0));
        lblPage_1->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\345\237\272\346\234\254\350\265\204\346\226\231</p></body></html>", 0));
        lblArrow->setText(QString());
        lblPage_5->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\345\210\233\345\273\272\345\256\214\346\210\220</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_LeftGuidesWidget: public Ui_CharacterCreator_LeftGuidesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H
