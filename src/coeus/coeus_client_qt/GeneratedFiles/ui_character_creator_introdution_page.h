/********************************************************************************
** Form generated from reading UI file 'character_creator_introdution_page.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_INTRODUTION_PAGE_H
#define UI_CHARACTER_CREATOR_INTRODUTION_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_IntrodutionPage
{
public:
    QLabel *label;

    void setupUi(QWizardPage *CharacterCreator_IntrodutionPage)
    {
        if (CharacterCreator_IntrodutionPage->objectName().isEmpty())
            CharacterCreator_IntrodutionPage->setObjectName(QStringLiteral("CharacterCreator_IntrodutionPage"));
        CharacterCreator_IntrodutionPage->resize(600, 400);
        CharacterCreator_IntrodutionPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_IntrodutionPage->setMaximumSize(QSize(600, 400));
        label = new QLabel(CharacterCreator_IntrodutionPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(174, 54, 412, 76));
        QFont font;
        font.setPointSize(9);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);

        retranslateUi(CharacterCreator_IntrodutionPage);

        QMetaObject::connectSlotsByName(CharacterCreator_IntrodutionPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_IntrodutionPage)
    {
        CharacterCreator_IntrodutionPage->setWindowTitle(QApplication::translate("CharacterCreator_IntrodutionPage", "\345\210\233\345\273\272\350\247\222\350\211\262", 0));
        label->setText(QApplication::translate("CharacterCreator_IntrodutionPage", "<html><head/><body><p>\345\234\250\350\277\233\345\205\245\346\270\270\346\210\217\344\270\226\347\225\214\344\271\213\345\211\215\357\274\214\345\277\205\351\241\273\345\210\233\345\273\272\344\270\200\344\270\252\345\261\236\344\272\216\344\275\240\347\232\204\346\270\270\346\210\217\350\247\222\350\211\262\357\274\214\345\256\203\345\260\206\344\273\243\350\241\250\347\235\200\344\275\240\347\232\204\350\231\232\346\213\237\350\272\253\344\273\275\345\217\202\344\270\216\345\210\260\346\270\270\346\210\217\344\270\226\347\225\214\344\270\255\343\200\202<br/><br/>\345\205\266\344\270\255\345\214\205\346\213\254\344\275\240\347\232\204\345\237\272\346\234\254\350\272\253\344\273\275\345\261\236\346\200\247\343\200\201\345\210\235\345\247\213\345\275\242\350\261\241\343\200\201\346\200\247\346\240\274\344\273\245\345\217\212\344\270\252\344\272\272\345\217\262\350\257\227\343\200\202</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_IntrodutionPage: public Ui_CharacterCreator_IntrodutionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_INTRODUTION_PAGE_H
