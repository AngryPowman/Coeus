/********************************************************************************
** Form generated from reading UI file 'character_creator_left_guides_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H
#define UI_CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_LeftGuidesWidget
{
public:
    QLabel *lblPage_2;
    QLabel *lblPage_1;
    QLabel *lblArrow;
    QLabel *lblPage_5;
    QLabel *lblPage_0;
    QLabel *lblPage_3;
    QLabel *lblPage_4;

    void setupUi(QWidget *CharacterCreator_LeftGuidesWidget)
    {
        if (CharacterCreator_LeftGuidesWidget->objectName().isEmpty())
            CharacterCreator_LeftGuidesWidget->setObjectName(QStringLiteral("CharacterCreator_LeftGuidesWidget"));
        CharacterCreator_LeftGuidesWidget->resize(129, 199);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CharacterCreator_LeftGuidesWidget->sizePolicy().hasHeightForWidth());
        CharacterCreator_LeftGuidesWidget->setSizePolicy(sizePolicy);
        CharacterCreator_LeftGuidesWidget->setMaximumSize(QSize(129, 199));
        lblPage_2 = new QLabel(CharacterCreator_LeftGuidesWidget);
        lblPage_2->setObjectName(QStringLiteral("lblPage_2"));
        lblPage_2->setGeometry(QRect(39, 41, 48, 16));
        lblPage_1 = new QLabel(CharacterCreator_LeftGuidesWidget);
        lblPage_1->setObjectName(QStringLiteral("lblPage_1"));
        lblPage_1->setGeometry(QRect(39, 21, 48, 16));
        lblPage_1->setStyleSheet(QStringLiteral(""));
        lblArrow = new QLabel(CharacterCreator_LeftGuidesWidget);
        lblArrow->setObjectName(QStringLiteral("lblArrow"));
        lblArrow->setGeometry(QRect(22, 3, 16, 16));
        lblArrow->setPixmap(QPixmap(QString::fromUtf8(":/coeus_client_qt/right_arrow.png")));
        lblPage_5 = new QLabel(CharacterCreator_LeftGuidesWidget);
        lblPage_5->setObjectName(QStringLiteral("lblPage_5"));
        lblPage_5->setGeometry(QRect(39, 101, 48, 16));
        lblPage_0 = new QLabel(CharacterCreator_LeftGuidesWidget);
        lblPage_0->setObjectName(QStringLiteral("lblPage_0"));
        lblPage_0->setGeometry(QRect(39, 3, 48, 16));
        lblPage_3 = new QLabel(CharacterCreator_LeftGuidesWidget);
        lblPage_3->setObjectName(QStringLiteral("lblPage_3"));
        lblPage_3->setGeometry(QRect(39, 61, 48, 16));
        lblPage_4 = new QLabel(CharacterCreator_LeftGuidesWidget);
        lblPage_4->setObjectName(QStringLiteral("lblPage_4"));
        lblPage_4->setGeometry(QRect(39, 81, 48, 16));

        retranslateUi(CharacterCreator_LeftGuidesWidget);

        QMetaObject::connectSlotsByName(CharacterCreator_LeftGuidesWidget);
    } // setupUi

    void retranslateUi(QWidget *CharacterCreator_LeftGuidesWidget)
    {
        CharacterCreator_LeftGuidesWidget->setWindowTitle(QApplication::translate("CharacterCreator_LeftGuidesWidget", "Form", 0));
        lblPage_2->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\350\201\214\344\270\232\344\277\241\344\273\260</p></body></html>", 0));
        lblPage_1->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\345\237\272\346\234\254\350\265\204\346\226\231</p></body></html>", 0));
        lblArrow->setText(QString());
        lblPage_5->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\345\210\233\345\273\272\345\256\214\346\210\220</p></body></html>", 0));
        lblPage_0->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "\350\277\233\345\205\245\344\270\226\347\225\214", 0));
        lblPage_3->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\346\200\247\346\240\274\345\201\217\345\245\275</p></body></html>", 0));
        lblPage_4->setText(QApplication::translate("CharacterCreator_LeftGuidesWidget", "<html><head/><body><p>\344\270\252\344\272\272\345\217\262\350\257\227</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_LeftGuidesWidget: public Ui_CharacterCreator_LeftGuidesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H
