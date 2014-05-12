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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_SummaryPage
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QWizardPage *CharacterCreator_SummaryPage)
    {
        if (CharacterCreator_SummaryPage->objectName().isEmpty())
            CharacterCreator_SummaryPage->setObjectName(QStringLiteral("CharacterCreator_SummaryPage"));
        CharacterCreator_SummaryPage->resize(600, 400);
        CharacterCreator_SummaryPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_SummaryPage->setMaximumSize(QSize(600, 400));
        textBrowser = new QTextBrowser(CharacterCreator_SummaryPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(189, 42, 397, 256));
        label = new QLabel(CharacterCreator_SummaryPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(189, 303, 397, 34));

        retranslateUi(CharacterCreator_SummaryPage);

        QMetaObject::connectSlotsByName(CharacterCreator_SummaryPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_SummaryPage)
    {
        CharacterCreator_SummaryPage->setWindowTitle(QApplication::translate("CharacterCreator_SummaryPage", "CharacterCreator_SummaryPage", 0));
        label->setText(QApplication::translate("CharacterCreator_SummaryPage", "\347\202\271\345\207\273[Finish]\346\214\211\351\222\256\345\256\214\346\210\220\345\210\233\345\273\272\345\271\266\350\277\233\345\205\245\346\270\270\346\210\217\357\274\201\347\202\271\345\207\273[\344\270\212\344\270\200\346\255\245]\345\217\257\344\273\245\344\277\256\346\224\271\350\247\222\350\211\262\344\277\241\346\201\257\343\200\202", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_SummaryPage: public Ui_CharacterCreator_SummaryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_SUMMARY_PAGE_H
