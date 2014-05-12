/********************************************************************************
** Form generated from reading UI file 'character_creator_epic_page.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_EPIC_PAGE_H
#define UI_CHARACTER_CREATOR_EPIC_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_EpicPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_3;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QWizardPage *CharacterCreator_EpicPage)
    {
        if (CharacterCreator_EpicPage->objectName().isEmpty())
            CharacterCreator_EpicPage->setObjectName(QStringLiteral("CharacterCreator_EpicPage"));
        CharacterCreator_EpicPage->resize(600, 400);
        CharacterCreator_EpicPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_EpicPage->setMaximumSize(QSize(600, 400));
        label = new QLabel(CharacterCreator_EpicPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(168, 116, 54, 16));
        label_2 = new QLabel(CharacterCreator_EpicPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(168, 248, 54, 16));
        layoutWidget = new QWidget(CharacterCreator_EpicPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(168, 273, 529, 84));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_6 = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(CharacterCreator_EpicPage);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioButton_6->sizePolicy().hasHeightForWidth());
        radioButton_6->setSizePolicy(sizePolicy);
        radioButton_6->setChecked(true);

        gridLayout_2->addWidget(radioButton_6, 0, 0, 1, 1);

        radioButton_7 = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        gridLayout_2->addWidget(radioButton_7, 1, 0, 1, 1);

        radioButton_8 = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButton_8);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        gridLayout_2->addWidget(radioButton_8, 2, 0, 1, 1);

        layoutWidget1 = new QWidget(CharacterCreator_EpicPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(168, 141, 385, 84));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        buttonGroup_2 = new QButtonGroup(CharacterCreator_EpicPage);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(layoutWidget1);
        buttonGroup_2->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 0, 1, 1);

        radioButton_3 = new QRadioButton(layoutWidget1);
        buttonGroup_2->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 2, 0, 1, 1);

        radioButton_4 = new QRadioButton(layoutWidget1);
        buttonGroup_2->addButton(radioButton_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 3, 0, 1, 1);

        label_3 = new QLabel(CharacterCreator_EpicPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(165, 30, 418, 49));
        QFont font;
        font.setPointSize(9);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_3->setFont(font);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setWordWrap(true);

        retranslateUi(CharacterCreator_EpicPage);

        QMetaObject::connectSlotsByName(CharacterCreator_EpicPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_EpicPage)
    {
        CharacterCreator_EpicPage->setWindowTitle(QApplication::translate("CharacterCreator_EpicPage", "WizardPage", 0));
        label->setText(QApplication::translate("CharacterCreator_EpicPage", "<html><head/><body><p><span style=\" font-weight:600;\">\345\256\266\345\272\255\350\203\214\346\231\257</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("CharacterCreator_EpicPage", "<html><head/><body><p><span style=\" font-weight:600;\">\346\210\221\347\232\204\347\233\256\346\240\207</span></p></body></html>", 0));
        radioButton_6->setText(QApplication::translate("CharacterCreator_EpicPage", "\346\237\220\345\244\251\351\206\222\346\235\245\345\217\221\347\216\260\346\211\213\350\207\202\344\270\212\345\207\272\347\216\260\344\272\206\347\245\236\347\247\230\347\272\271\350\272\253\357\274\214\346\200\200\347\226\221\350\242\253\344\270\213\344\272\206\345\260\201\345\215\260\357\274\214\346\210\221\350\246\201\346\211\276\345\207\272\346\240\271\346\272\220", 0));
        radioButton_7->setText(QApplication::translate("CharacterCreator_EpicPage", "\346\210\221\345\264\207\345\260\232\350\207\252\347\224\261\357\274\214\345\271\264\345\260\221\350\275\273\347\213\202\346\227\266\350\203\214\344\272\225\347\246\273\344\271\241\350\270\217\344\270\212\344\272\206\345\206\222\351\231\251\344\271\213\350\267\257\357\274\214\345\206\263\345\277\203\346\216\242\347\264\242\345\256\207\345\256\231\344\270\255\344\273\273\344\275\225\350\247\222\350\220\275", 0));
        radioButton_8->setText(QApplication::translate("CharacterCreator_EpicPage", "\350\207\252\345\271\274\350\267\237\351\232\217\344\270\200\345\220\215\345\274\272\345\244\247\347\232\204\345\256\207\345\256\231\346\260\224\345\257\274\345\270\210\345\255\246\344\271\240\357\274\214\347\253\213\345\277\227\346\211\223\350\264\245\345\256\207\345\256\231\344\270\255\346\234\211\345\220\215\347\232\204\345\274\272\350\200\205", 0));
        radioButton->setText(QApplication::translate("CharacterCreator_EpicPage", "\346\210\221\347\224\237\345\234\250\344\270\200\344\270\252\345\256\230\345\256\246\344\270\226\345\256\266\357\274\214\345\256\266\346\227\217\346\216\214\346\217\241\346\224\277\346\262\273\345\244\247\346\235\203\357\274\214\346\230\257\344\270\252\345\256\230\344\272\214\344\273\243", 0));
        radioButton_2->setText(QApplication::translate("CharacterCreator_EpicPage", "\346\210\221\347\224\237\345\234\250\344\270\200\344\270\252\345\257\214\345\217\257\346\225\214\345\233\275\347\232\204\345\256\266\345\272\255\357\274\214\345\256\266\346\227\217\346\234\211\347\235\200\345\244\247\351\207\217\351\253\230\347\247\221\346\212\200\344\272\247\344\270\232\357\274\214\346\230\257\344\270\252\345\257\214\344\272\214\344\273\243", 0));
        radioButton_3->setText(QApplication::translate("CharacterCreator_EpicPage", "\346\210\221\347\224\237\345\234\250\344\270\200\344\270\252\346\231\256\351\200\232\345\256\266\345\272\255\357\274\214\350\231\275\344\270\215\350\203\275\346\214\245\351\207\221\345\246\202\345\234\237\357\274\214\345\200\222\344\271\237\344\270\260\350\241\243\350\266\263\351\243\237", 0));
        radioButton_4->setText(QApplication::translate("CharacterCreator_EpicPage", "\346\210\221\345\207\272\347\224\237\345\234\250\344\270\200\344\270\252\350\264\253\350\213\246\345\256\266\345\272\255\357\274\214\344\270\211\351\244\220\344\270\215\351\245\261\357\274\214\344\275\206\351\252\250\345\255\220\351\207\214\346\270\264\346\234\233\347\253\231\345\234\250\345\256\207\345\256\231\344\271\213\345\267\205", 0));
        label_3->setText(QApplication::translate("CharacterCreator_EpicPage", "<html><head/><body><p>\344\270\252\344\272\272\345\217\262\350\257\227\347\232\204\351\200\211\346\213\251\345\260\206\345\206\263\345\256\232\346\270\270\346\210\217\346\225\205\344\272\213\347\232\204\345\217\221\345\261\225\350\267\257\347\272\277\357\274\214\344\270\215\345\220\214\351\200\211\346\213\251\344\274\232\347\273\204\345\220\210\345\207\272\344\270\215\344\270\200\346\240\267\347\232\204\345\211\247\346\203\205\345\210\206\346\224\257\343\200\202</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_EpicPage: public Ui_CharacterCreator_EpicPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_EPIC_PAGE_H
