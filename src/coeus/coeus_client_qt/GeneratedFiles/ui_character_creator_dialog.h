/********************************************************************************
** Form generated from reading UI file 'character_creator_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_DIALOG_H
#define UI_CHARACTER_CREATOR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWizard>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator
{
public:

    void setupUi(QWizard *CharacterCreator)
    {
        if (CharacterCreator->objectName().isEmpty())
            CharacterCreator->setObjectName(QStringLiteral("CharacterCreator"));
        CharacterCreator->resize(640, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CharacterCreator->sizePolicy().hasHeightForWidth());
        CharacterCreator->setSizePolicy(sizePolicy);
        CharacterCreator->setMinimumSize(QSize(640, 500));
        CharacterCreator->setMaximumSize(QSize(640, 500));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        CharacterCreator->setFont(font);
        CharacterCreator->setWizardStyle(QWizard::AeroStyle);

        retranslateUi(CharacterCreator);

        QMetaObject::connectSlotsByName(CharacterCreator);
    } // setupUi

    void retranslateUi(QWizard *CharacterCreator)
    {
        Q_UNUSED(CharacterCreator);
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator: public Ui_CharacterCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_DIALOG_H
