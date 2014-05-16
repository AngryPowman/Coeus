/********************************************************************************
** Form generated from reading UI file 'character_creator_summary_page.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_SUMMARY_PAGE_H
#define UI_CHARACTER_CREATOR_SUMMARY_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_SummaryPage
{
public:
    QTextBrowser *txtMyEpic;
    QLabel *label;
    QCheckBox *checkBox;

    void setupUi(QWizardPage *CharacterCreator_SummaryPage)
    {
        if (CharacterCreator_SummaryPage->objectName().isEmpty())
            CharacterCreator_SummaryPage->setObjectName(QStringLiteral("CharacterCreator_SummaryPage"));
        CharacterCreator_SummaryPage->resize(600, 400);
        CharacterCreator_SummaryPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_SummaryPage->setMaximumSize(QSize(600, 400));
        txtMyEpic = new QTextBrowser(CharacterCreator_SummaryPage);
        txtMyEpic->setObjectName(QStringLiteral("txtMyEpic"));
        txtMyEpic->setGeometry(QRect(189, 72, 397, 259));
        label = new QLabel(CharacterCreator_SummaryPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(189, 21, 400, 34));
        label->setWordWrap(true);
        checkBox = new QCheckBox(CharacterCreator_SummaryPage);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(189, 345, 112, 16));

        retranslateUi(CharacterCreator_SummaryPage);

        QMetaObject::connectSlotsByName(CharacterCreator_SummaryPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_SummaryPage)
    {
        CharacterCreator_SummaryPage->setWindowTitle(QApplication::translate("CharacterCreator_SummaryPage", "CharacterCreator_SummaryPage", 0));
        label->setText(QApplication::translate("CharacterCreator_SummaryPage", "\346\201\255\345\226\234\344\275\240\357\274\201\344\275\240\345\267\262\347\273\217\345\256\214\346\210\220\344\272\206\346\211\200\346\234\211\344\277\241\346\201\257\347\232\204\345\241\253\345\206\231\343\200\202\345\213\276\351\200\211[\346\210\221\345\220\214\346\204\217\344\273\245\344\270\212\346\217\217\350\277\260]\345\271\266\347\202\271\345\207\273[\345\256\214\346\210\220\345\210\233\345\273\272]\350\277\233\345\205\245\346\270\270\346\210\217\343\200\202", 0));
        checkBox->setText(QApplication::translate("CharacterCreator_SummaryPage", "\346\210\221\345\220\214\346\204\217\344\273\245\344\270\212\345\206\205\345\256\271", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_SummaryPage: public Ui_CharacterCreator_SummaryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_SUMMARY_PAGE_H
