/********************************************************************************
** Form generated from reading UI file 'character_creator_baseinfo_page.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
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
    QLabel *label;
    QLabel *lblTip;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblArrow;
    QLabel *lblArrow_2;
    QLabel *lblArrow_3;

    void setupUi(QWizardPage *CharacterCreator_BaseInfoPage)
    {
        if (CharacterCreator_BaseInfoPage->objectName().isEmpty())
            CharacterCreator_BaseInfoPage->setObjectName(QStringLiteral("CharacterCreator_BaseInfoPage"));
        CharacterCreator_BaseInfoPage->resize(600, 400);
        CharacterCreator_BaseInfoPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_BaseInfoPage->setMaximumSize(QSize(600, 400));
        txtNickname = new QLineEdit(CharacterCreator_BaseInfoPage);
        txtNickname->setObjectName(QStringLiteral("txtNickname"));
        txtNickname->setGeometry(QRect(219, 150, 367, 20));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtNickname->sizePolicy().hasHeightForWidth());
        txtNickname->setSizePolicy(sizePolicy);
        btnCheckNickname = new QPushButton(CharacterCreator_BaseInfoPage);
        btnCheckNickname->setObjectName(QStringLiteral("btnCheckNickname"));
        btnCheckNickname->setGeometry(QRect(513, 174, 75, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCheckNickname->sizePolicy().hasHeightForWidth());
        btnCheckNickname->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        btnCheckNickname->setFont(font);
        label_3 = new QLabel(CharacterCreator_BaseInfoPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(219, 126, 48, 17));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);
        label = new QLabel(CharacterCreator_BaseInfoPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(219, 30, 373, 70));
        QFont font1;
        font1.setPointSize(9);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);
        lblTip = new QLabel(CharacterCreator_BaseInfoPage);
        lblTip->setObjectName(QStringLiteral("lblTip"));
        lblTip->setGeometry(QRect(219, 342, 367, 16));
        lblTip->setTextFormat(Qt::RichText);
        lblTip->setWordWrap(true);
        label_2 = new QLabel(CharacterCreator_BaseInfoPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 216, 145, 16));
        label_4 = new QLabel(CharacterCreator_BaseInfoPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 237, 145, 16));
        label_5 = new QLabel(CharacterCreator_BaseInfoPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 258, 157, 16));
        lblArrow = new QLabel(CharacterCreator_BaseInfoPage);
        lblArrow->setObjectName(QStringLiteral("lblArrow"));
        lblArrow->setGeometry(QRect(219, 216, 16, 16));
        lblArrow->setPixmap(QPixmap(QString::fromUtf8(":/coeus_client_qt/yes.png")));
        lblArrow_2 = new QLabel(CharacterCreator_BaseInfoPage);
        lblArrow_2->setObjectName(QStringLiteral("lblArrow_2"));
        lblArrow_2->setGeometry(QRect(219, 237, 16, 16));
        lblArrow_2->setPixmap(QPixmap(QString::fromUtf8(":/coeus_client_qt/yes.png")));
        lblArrow_3 = new QLabel(CharacterCreator_BaseInfoPage);
        lblArrow_3->setObjectName(QStringLiteral("lblArrow_3"));
        lblArrow_3->setGeometry(QRect(219, 258, 16, 16));
        lblArrow_3->setPixmap(QPixmap(QString::fromUtf8(":/coeus_client_qt/yes.png")));

        retranslateUi(CharacterCreator_BaseInfoPage);

        QMetaObject::connectSlotsByName(CharacterCreator_BaseInfoPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_BaseInfoPage)
    {
        CharacterCreator_BaseInfoPage->setWindowTitle(QApplication::translate("CharacterCreator_BaseInfoPage", "\345\237\272\346\234\254\350\265\204\346\226\231", 0));
        txtNickname->setPlaceholderText(QApplication::translate("CharacterCreator_BaseInfoPage", "\350\257\267\350\276\223\345\205\245\346\270\270\346\210\217\346\230\265\347\247\260", 0));
        btnCheckNickname->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "\346\243\200\346\237\245", 0));
        label_3->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "\346\270\270\346\210\217\346\230\265\347\247\260", 0));
        label->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "<html><head/><body><p>\346\270\270\346\210\217\346\230\265\347\247\260\345\217\257\347\224\261\345\244\247\345\260\217\345\206\231\350\213\261\346\226\207\345\255\227\346\257\215\343\200\201\344\270\255\346\226\207\347\273\204\346\210\220\357\274\214\351\225\277\345\272\246\344\270\2724-20\344\270\252\345\255\227\350\212\202\357\274\210\346\261\211\345\255\227\345\215\2402\344\270\252\345\255\227\350\212\202\357\274\214\350\213\261\346\226\207\345\255\227\346\257\215\345\215\2401\345\255\227\350\212\202\357\274\211\343\200\202</p><p>\347\202\271\345\207\273[\346\243\200\346\237\245]\346\214\211\351\222\256\351\252\214\350\257\201\350\276\223\345\205\245\346\230\265\347\247\260\346\230\257\345\220\246\345\217\257\347\224\250\343\200\202</p></body></html>", 0));
        lblTip->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "<html><head/><body><p><br/></p></body></html>", 0));
        label_2->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "\351\225\277\345\272\246\347\254\246\345\220\2104-20\345\255\227\350\212\202\347\232\204\351\231\220\345\210\266", 0));
        label_4->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "\344\270\215\345\214\205\345\220\253\347\251\272\346\240\274", 0));
        label_5->setText(QApplication::translate("CharacterCreator_BaseInfoPage", "\345\220\215\345\255\227\344\273\205\345\205\201\350\256\270\344\275\277\347\224\250\344\270\255\346\226\207\345\222\214\350\213\261\346\226\207", 0));
        lblArrow->setText(QString());
        lblArrow_2->setText(QString());
        lblArrow_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_BaseInfoPage: public Ui_CharacterCreator_BaseInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_BASEINFO_PAGE_H
