/********************************************************************************
** Form generated from reading UI file 'character_creator_characteristic_page.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H
#define UI_CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_CharacteristicPage
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *chkCharacteristic_0;
    QCheckBox *chkCharacteristic_10;
    QCheckBox *chkCharacteristic_20;
    QCheckBox *chkCharacteristic_1;
    QCheckBox *chkCharacteristic_11;
    QCheckBox *chkCharacteristic_21;
    QCheckBox *chkCharacteristic_2;
    QCheckBox *chkCharacteristic_12;
    QCheckBox *chkCharacteristic_22;
    QCheckBox *chkCharacteristic_3;
    QCheckBox *chkCharacteristic_13;
    QCheckBox *chkCharacteristic_23;
    QCheckBox *chkCharacteristic_4;
    QCheckBox *chkCharacteristic_14;
    QCheckBox *chkCharacteristic_24;
    QCheckBox *chkCharacteristic_5;
    QCheckBox *chkCharacteristic_15;
    QCheckBox *chkCharacteristic_25;
    QCheckBox *chkCharacteristic_6;
    QCheckBox *chkCharacteristic_16;
    QCheckBox *chkCharacteristic_26;
    QCheckBox *chkCharacteristic_7;
    QCheckBox *chkCharacteristic_17;
    QCheckBox *chkCharacteristic_27;
    QCheckBox *chkCharacteristic_8;
    QCheckBox *chkCharacteristic_18;
    QCheckBox *chkCharacteristic_28;
    QCheckBox *chkCharacteristic_9;
    QCheckBox *chkCharacteristic_19;
    QCheckBox *chkCharacteristic_29;
    QLabel *lblTip;

    void setupUi(QWizardPage *CharacterCreator_CharacteristicPage)
    {
        if (CharacterCreator_CharacteristicPage->objectName().isEmpty())
            CharacterCreator_CharacteristicPage->setObjectName(QStringLiteral("CharacterCreator_CharacteristicPage"));
        CharacterCreator_CharacteristicPage->resize(600, 400);
        CharacterCreator_CharacteristicPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_CharacteristicPage->setMaximumSize(QSize(600, 400));
        label = new QLabel(CharacterCreator_CharacteristicPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(186, 15, 391, 61));
        QFont font;
        font.setPointSize(9);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);
        layoutWidget = new QWidget(CharacterCreator_CharacteristicPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(187, 93, 388, 256));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        chkCharacteristic_0 = new QCheckBox(layoutWidget);
        chkCharacteristic_0->setObjectName(QStringLiteral("chkCharacteristic_0"));
        chkCharacteristic_0->setProperty("characteristicValue", QVariant(0u));

        gridLayout->addWidget(chkCharacteristic_0, 0, 0, 1, 1);

        chkCharacteristic_10 = new QCheckBox(layoutWidget);
        chkCharacteristic_10->setObjectName(QStringLiteral("chkCharacteristic_10"));
        chkCharacteristic_10->setProperty("characteristicValue", QVariant(10u));

        gridLayout->addWidget(chkCharacteristic_10, 0, 1, 1, 1);

        chkCharacteristic_20 = new QCheckBox(layoutWidget);
        chkCharacteristic_20->setObjectName(QStringLiteral("chkCharacteristic_20"));
        chkCharacteristic_20->setProperty("characteristicValue", QVariant(20u));

        gridLayout->addWidget(chkCharacteristic_20, 0, 2, 1, 1);

        chkCharacteristic_1 = new QCheckBox(layoutWidget);
        chkCharacteristic_1->setObjectName(QStringLiteral("chkCharacteristic_1"));
        chkCharacteristic_1->setProperty("characteristicValue", QVariant(1u));

        gridLayout->addWidget(chkCharacteristic_1, 1, 0, 1, 1);

        chkCharacteristic_11 = new QCheckBox(layoutWidget);
        chkCharacteristic_11->setObjectName(QStringLiteral("chkCharacteristic_11"));
        chkCharacteristic_11->setProperty("characteristicValue", QVariant(11u));

        gridLayout->addWidget(chkCharacteristic_11, 1, 1, 1, 1);

        chkCharacteristic_21 = new QCheckBox(layoutWidget);
        chkCharacteristic_21->setObjectName(QStringLiteral("chkCharacteristic_21"));
        chkCharacteristic_21->setProperty("characteristicValue", QVariant(21u));

        gridLayout->addWidget(chkCharacteristic_21, 1, 2, 1, 1);

        chkCharacteristic_2 = new QCheckBox(layoutWidget);
        chkCharacteristic_2->setObjectName(QStringLiteral("chkCharacteristic_2"));
        chkCharacteristic_2->setProperty("characteristicValue", QVariant(2u));

        gridLayout->addWidget(chkCharacteristic_2, 2, 0, 1, 1);

        chkCharacteristic_12 = new QCheckBox(layoutWidget);
        chkCharacteristic_12->setObjectName(QStringLiteral("chkCharacteristic_12"));
        chkCharacteristic_12->setProperty("characteristicValue", QVariant(12u));

        gridLayout->addWidget(chkCharacteristic_12, 2, 1, 1, 1);

        chkCharacteristic_22 = new QCheckBox(layoutWidget);
        chkCharacteristic_22->setObjectName(QStringLiteral("chkCharacteristic_22"));
        chkCharacteristic_22->setProperty("characteristicValue", QVariant(22u));

        gridLayout->addWidget(chkCharacteristic_22, 2, 2, 1, 1);

        chkCharacteristic_3 = new QCheckBox(layoutWidget);
        chkCharacteristic_3->setObjectName(QStringLiteral("chkCharacteristic_3"));
        chkCharacteristic_3->setProperty("characteristicValue", QVariant(3u));

        gridLayout->addWidget(chkCharacteristic_3, 3, 0, 1, 1);

        chkCharacteristic_13 = new QCheckBox(layoutWidget);
        chkCharacteristic_13->setObjectName(QStringLiteral("chkCharacteristic_13"));
        chkCharacteristic_13->setProperty("characteristicValue", QVariant(13u));

        gridLayout->addWidget(chkCharacteristic_13, 3, 1, 1, 1);

        chkCharacteristic_23 = new QCheckBox(layoutWidget);
        chkCharacteristic_23->setObjectName(QStringLiteral("chkCharacteristic_23"));
        chkCharacteristic_23->setProperty("characteristicValue", QVariant(23u));

        gridLayout->addWidget(chkCharacteristic_23, 3, 2, 1, 1);

        chkCharacteristic_4 = new QCheckBox(layoutWidget);
        chkCharacteristic_4->setObjectName(QStringLiteral("chkCharacteristic_4"));
        chkCharacteristic_4->setProperty("characteristicValue", QVariant(4u));

        gridLayout->addWidget(chkCharacteristic_4, 4, 0, 1, 1);

        chkCharacteristic_14 = new QCheckBox(layoutWidget);
        chkCharacteristic_14->setObjectName(QStringLiteral("chkCharacteristic_14"));
        chkCharacteristic_14->setProperty("characteristicValue", QVariant(14u));

        gridLayout->addWidget(chkCharacteristic_14, 4, 1, 1, 1);

        chkCharacteristic_24 = new QCheckBox(layoutWidget);
        chkCharacteristic_24->setObjectName(QStringLiteral("chkCharacteristic_24"));
        chkCharacteristic_24->setProperty("characteristicValue", QVariant(24u));

        gridLayout->addWidget(chkCharacteristic_24, 4, 2, 1, 1);

        chkCharacteristic_5 = new QCheckBox(layoutWidget);
        chkCharacteristic_5->setObjectName(QStringLiteral("chkCharacteristic_5"));
        chkCharacteristic_5->setProperty("characteristicValue", QVariant(5u));

        gridLayout->addWidget(chkCharacteristic_5, 5, 0, 1, 1);

        chkCharacteristic_15 = new QCheckBox(layoutWidget);
        chkCharacteristic_15->setObjectName(QStringLiteral("chkCharacteristic_15"));
        chkCharacteristic_15->setProperty("characteristicValue", QVariant(15u));

        gridLayout->addWidget(chkCharacteristic_15, 5, 1, 1, 1);

        chkCharacteristic_25 = new QCheckBox(layoutWidget);
        chkCharacteristic_25->setObjectName(QStringLiteral("chkCharacteristic_25"));
        chkCharacteristic_25->setProperty("characteristicValue", QVariant(25u));

        gridLayout->addWidget(chkCharacteristic_25, 5, 2, 1, 1);

        chkCharacteristic_6 = new QCheckBox(layoutWidget);
        chkCharacteristic_6->setObjectName(QStringLiteral("chkCharacteristic_6"));
        chkCharacteristic_6->setProperty("characteristicValue", QVariant(6u));

        gridLayout->addWidget(chkCharacteristic_6, 6, 0, 1, 1);

        chkCharacteristic_16 = new QCheckBox(layoutWidget);
        chkCharacteristic_16->setObjectName(QStringLiteral("chkCharacteristic_16"));
        chkCharacteristic_16->setProperty("characteristicValue", QVariant(16u));

        gridLayout->addWidget(chkCharacteristic_16, 6, 1, 1, 1);

        chkCharacteristic_26 = new QCheckBox(layoutWidget);
        chkCharacteristic_26->setObjectName(QStringLiteral("chkCharacteristic_26"));
        chkCharacteristic_26->setProperty("characteristicValue", QVariant(26u));

        gridLayout->addWidget(chkCharacteristic_26, 6, 2, 1, 1);

        chkCharacteristic_7 = new QCheckBox(layoutWidget);
        chkCharacteristic_7->setObjectName(QStringLiteral("chkCharacteristic_7"));
        chkCharacteristic_7->setProperty("characteristicValue", QVariant(7u));

        gridLayout->addWidget(chkCharacteristic_7, 7, 0, 1, 1);

        chkCharacteristic_17 = new QCheckBox(layoutWidget);
        chkCharacteristic_17->setObjectName(QStringLiteral("chkCharacteristic_17"));
        chkCharacteristic_17->setProperty("characteristicValue", QVariant(17u));

        gridLayout->addWidget(chkCharacteristic_17, 7, 1, 1, 1);

        chkCharacteristic_27 = new QCheckBox(layoutWidget);
        chkCharacteristic_27->setObjectName(QStringLiteral("chkCharacteristic_27"));
        chkCharacteristic_27->setProperty("characteristicValue", QVariant(27u));

        gridLayout->addWidget(chkCharacteristic_27, 7, 2, 1, 1);

        chkCharacteristic_8 = new QCheckBox(layoutWidget);
        chkCharacteristic_8->setObjectName(QStringLiteral("chkCharacteristic_8"));
        chkCharacteristic_8->setProperty("characteristicValue", QVariant(8u));

        gridLayout->addWidget(chkCharacteristic_8, 8, 0, 1, 1);

        chkCharacteristic_18 = new QCheckBox(layoutWidget);
        chkCharacteristic_18->setObjectName(QStringLiteral("chkCharacteristic_18"));
        chkCharacteristic_18->setProperty("characteristicValue", QVariant(18u));

        gridLayout->addWidget(chkCharacteristic_18, 8, 1, 1, 1);

        chkCharacteristic_28 = new QCheckBox(layoutWidget);
        chkCharacteristic_28->setObjectName(QStringLiteral("chkCharacteristic_28"));
        chkCharacteristic_28->setProperty("characteristicValue", QVariant(28u));

        gridLayout->addWidget(chkCharacteristic_28, 8, 2, 1, 1);

        chkCharacteristic_9 = new QCheckBox(layoutWidget);
        chkCharacteristic_9->setObjectName(QStringLiteral("chkCharacteristic_9"));
        chkCharacteristic_9->setProperty("characteristicValue", QVariant(9u));

        gridLayout->addWidget(chkCharacteristic_9, 9, 0, 1, 1);

        chkCharacteristic_19 = new QCheckBox(layoutWidget);
        chkCharacteristic_19->setObjectName(QStringLiteral("chkCharacteristic_19"));
        chkCharacteristic_19->setProperty("characteristicValue", QVariant(19u));

        gridLayout->addWidget(chkCharacteristic_19, 9, 1, 1, 1);

        chkCharacteristic_29 = new QCheckBox(layoutWidget);
        chkCharacteristic_29->setObjectName(QStringLiteral("chkCharacteristic_29"));
        chkCharacteristic_29->setProperty("characteristicValue", QVariant(29u));

        gridLayout->addWidget(chkCharacteristic_29, 9, 2, 1, 1);

        lblTip = new QLabel(CharacterCreator_CharacteristicPage);
        lblTip->setObjectName(QStringLiteral("lblTip"));
        lblTip->setGeometry(QRect(189, 360, 367, 16));
        lblTip->setTextFormat(Qt::RichText);
        lblTip->setWordWrap(true);

        retranslateUi(CharacterCreator_CharacteristicPage);

        QMetaObject::connectSlotsByName(CharacterCreator_CharacteristicPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_CharacteristicPage)
    {
        CharacterCreator_CharacteristicPage->setWindowTitle(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\200\247\346\240\274\347\211\271\345\276\201", 0));
        label->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "<html><head/><body><p>\350\247\222\350\211\262\346\200\247\346\240\274\345\260\206\345\206\263\345\256\232\344\275\240\344\270\216\346\270\270\346\210\217NPC\344\271\213\351\227\264\347\232\204\344\272\244\344\272\222\346\200\247\345\222\214\345\245\221\345\220\210\345\272\246\357\274\214\344\271\237\344\274\232\345\275\261\345\223\215\345\211\247\346\203\205\347\232\204\350\265\260\345\220\221\343\200\202</p><p>\350\207\263\345\260\221\351\200\211\346\213\2511\351\241\271\357\274\214\346\234\200\345\244\232\345\217\257\344\273\245\351\200\211\346\213\25112\351\241\271\343\200\202</p></body></html>", 0));
        chkCharacteristic_0->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\226\204\350\211\257", 0));
        chkCharacteristic_10->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\250\230\347\202\256", 0));
        chkCharacteristic_20->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\351\253\230\346\231\272\345\225\206", 0));
        chkCharacteristic_1->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\234\211\350\264\243\344\273\273\345\277\203", 0));
        chkCharacteristic_11->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\247\201\345\244\232\350\257\206\345\271\277", 0));
        chkCharacteristic_21->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\244\232\351\207\215\344\272\272\346\240\274", 0));
        chkCharacteristic_2->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\264\252\347\224\237\346\200\225\346\255\273", 0));
        chkCharacteristic_12->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\270\251\346\237\224", 0));
        chkCharacteristic_22->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\204\237\346\200\247", 0));
        chkCharacteristic_3->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\213\261\345\213\207", 0));
        chkCharacteristic_13->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\347\203\255\347\210\261\350\207\252\347\224\261", 0));
        chkCharacteristic_23->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\347\220\206\346\200\247", 0));
        chkCharacteristic_4->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\212\200\346\234\257\345\256\205", 0));
        chkCharacteristic_14->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\220\214\346\200\247\346\201\213", 0));
        chkCharacteristic_24->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\347\214\245\347\220\220", 0));
        chkCharacteristic_5->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\344\271\220\344\272\216\345\212\251\344\272\272", 0));
        chkCharacteristic_15->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\231\232\344\274\252", 0));
        chkCharacteristic_25->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\265\252\346\274\253", 0));
        chkCharacteristic_6->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\207\252\345\244\247", 0));
        chkCharacteristic_16->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\206\262\345\212\250", 0));
        chkCharacteristic_26->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\267\246\346\222\207\345\255\220", 0));
        chkCharacteristic_7->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\256\214\347\276\216\344\270\273\344\271\211", 0));
        chkCharacteristic_17->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\206\205\345\220\221", 0));
        chkCharacteristic_27->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\207\252\347\247\201", 0));
        chkCharacteristic_8->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\231\232\350\215\243", 0));
        chkCharacteristic_18->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\345\215\225\347\272\257", 0));
        chkCharacteristic_28->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\350\256\244\347\234\237\350\260\250\346\205\216", 0));
        chkCharacteristic_9->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\210\220\347\206\237", 0));
        chkCharacteristic_19->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\265\256\350\272\201", 0));
        chkCharacteristic_29->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "\346\207\222\346\203\260", 0));
        lblTip->setText(QApplication::translate("CharacterCreator_CharacteristicPage", "<html><head/><body><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_CharacteristicPage: public Ui_CharacterCreator_CharacteristicPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H
