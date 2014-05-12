/********************************************************************************
** Form generated from reading UI file 'character_creator_baseinfo_page.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_BASEINFO_PAGE_H
#define UI_CHARACTER_CREATOR_BASEINFO_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_BaseInfoPage
{
public:
    QLineEdit *txtNickname;
    QPushButton *btnCheckNickname;
    QLabel *label_3;

    void setupUi(QWizardPage *CharacterCreator_BaseInfoPage)
    {
        if (CharacterCreator_BaseInfoPage->objectName().isEmpty())
            CharacterCreator_BaseInfoPage->setObjectName(QStringLiteral("CharacterCreator_BaseInfoPage"));
        CharacterCreator_BaseInfoPage->resize(601, 400);
        CharacterCreator_BaseInfoPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_BaseInfoPage->setMaximumSize(QSize(601, 398));
        txtNickname = new QLineEdit(CharacterCreator_BaseInfoPage);
        txtNickname->setObjectName(QStringLiteral("txtNickname"));
        txtNickname->setGeometry(QRect(183, 211, 409, 22));
        btnCheckNickname = new QPushButton(CharacterCreator_BaseInfoPage);
        btnCheckNickname->setObjectName(QStringLiteral("btnCheckNickname"));
        btnCheckNickname->setGeometry(QRect(519, 237, 73, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        btnCheckNickname->setFont(font);
        label_3 = new QLabel(CharacterCreator_BaseInfoPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(183, 192, 54, 12));
        label_3->setFont(font);

        retranslateUi(CharacterCreator_BaseInfoPage);

        QMetaObject::connectSlotsByName(CharacterCreator_BaseInfoPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_BaseInfoPage)
    {
        CharacterCreator_BaseInfoPage->setWindowTitle(QApplication::translate("CharacterCreator_BaseInfoPage", "\345\237\272\346\234\254\350\265\204\346\226\231", 0));
        CharacterCreator_BaseInfoPage->setTitle(QApplication::translate("CharacterCreator_BaseInfoPage", "\345\237\272\346\234\254\350\265\204\346\226\231", 0));
        txtNickname->setPlaceholderText(QApplication::translate("CharacterCreator_BaseInfoPage", "\350\257\267\350\276\223\345\205\245\346\270\270\346\210\217\346\230\265\347\247\260", 0));
        btnCheckNickname->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "\346\243\200\346\237\245", 0));
        label_3->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "\346\270\270\346\210\217\346\230\265\347\247\260", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_BaseInfoPage: public Ui_CharacterCreator_BaseInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_BASEINFO_PAGE_H
