/********************************************************************************
** Form generated from reading UI file 'character_creator_career_belief_page.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATOR_CAREER_BELIEF_PAGE_H
#define UI_CHARACTER_CREATOR_CAREER_BELIEF_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator_CareerBeliefPage
{
public:
    QLabel *lblCharacterDetail;
    QLabel *lblCharacterName;
    QComboBox *cmbAvatarList;
    QGraphicsView *graphicsCG;
    QRadioButton *optMale;
    QLabel *label;
    QRadioButton *optFemale;

    void setupUi(QWizardPage *CharacterCreator_CareerBeliefPage)
    {
        if (CharacterCreator_CareerBeliefPage->objectName().isEmpty())
            CharacterCreator_CareerBeliefPage->setObjectName(QStringLiteral("CharacterCreator_CareerBeliefPage"));
        CharacterCreator_CareerBeliefPage->resize(600, 400);
        CharacterCreator_CareerBeliefPage->setMinimumSize(QSize(600, 400));
        CharacterCreator_CareerBeliefPage->setMaximumSize(QSize(600, 400));
        lblCharacterDetail = new QLabel(CharacterCreator_CareerBeliefPage);
        lblCharacterDetail->setObjectName(QStringLiteral("lblCharacterDetail"));
        lblCharacterDetail->setGeometry(QRect(348, 57, 244, 337));
        lblCharacterDetail->setTextFormat(Qt::RichText);
        lblCharacterDetail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblCharacterDetail->setWordWrap(true);
        lblCharacterName = new QLabel(CharacterCreator_CareerBeliefPage);
        lblCharacterName->setObjectName(QStringLiteral("lblCharacterName"));
        lblCharacterName->setGeometry(QRect(408, 6, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        lblCharacterName->setFont(font);
        lblCharacterName->setTextFormat(Qt::RichText);
        lblCharacterName->setAlignment(Qt::AlignCenter);
        cmbAvatarList = new QComboBox(CharacterCreator_CareerBeliefPage);
        cmbAvatarList->setObjectName(QStringLiteral("cmbAvatarList"));
        cmbAvatarList->setGeometry(QRect(136, 342, 196, 55));
        cmbAvatarList->setIconSize(QSize(48, 48));
        graphicsCG = new QGraphicsView(CharacterCreator_CareerBeliefPage);
        graphicsCG->setObjectName(QStringLiteral("graphicsCG"));
        graphicsCG->setGeometry(QRect(136, 9, 196, 300));
        graphicsCG->setMaximumSize(QSize(196, 300));
        graphicsCG->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsCG->setFrameShape(QFrame::Box);
        graphicsCG->setFrameShadow(QFrame::Plain);
        graphicsCG->setLineWidth(1);
        graphicsCG->setMidLineWidth(1);
        graphicsCG->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCG->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCG->setInteractive(false);
        graphicsCG->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        optMale = new QRadioButton(CharacterCreator_CareerBeliefPage);
        optMale->setObjectName(QStringLiteral("optMale"));
        optMale->setGeometry(QRect(273, 318, 55, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        optMale->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../bin/client/images/male.png"), QSize(), QIcon::Normal, QIcon::Off);
        optMale->setIcon(icon);
        optMale->setIconSize(QSize(16, 18));
        optMale->setChecked(true);
        label = new QLabel(CharacterCreator_CareerBeliefPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(136, 318, 44, 17));
        label->setFont(font1);
        optFemale = new QRadioButton(CharacterCreator_CareerBeliefPage);
        optFemale->setObjectName(QStringLiteral("optFemale"));
        optFemale->setGeometry(QRect(186, 318, 55, 21));
        optFemale->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../bin/client/images/female.png"), QSize(), QIcon::Normal, QIcon::Off);
        optFemale->setIcon(icon1);
        optFemale->setIconSize(QSize(16, 15));
        optFemale->setChecked(false);

        retranslateUi(CharacterCreator_CareerBeliefPage);

        QMetaObject::connectSlotsByName(CharacterCreator_CareerBeliefPage);
    } // setupUi

    void retranslateUi(QWizardPage *CharacterCreator_CareerBeliefPage)
    {
        CharacterCreator_CareerBeliefPage->setWindowTitle(QApplication::translate("CharacterCreator_CareerBeliefPage", "WizardPage", 0));
        lblCharacterDetail->setText(QString());
        lblCharacterName->setText(QApplication::translate("CharacterCreator_CareerBeliefPage", "\351\225\234\345\255\220\347\214\216\344\272\272", 0));
#ifndef QT_NO_TOOLTIP
        graphicsCG->setToolTip(QApplication::translate("CharacterCreator_CareerBeliefPage", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsCG->setWhatsThis(QApplication::translate("CharacterCreator_CareerBeliefPage", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        optMale->setText(QApplication::translate("CharacterCreator_CareerBeliefPage", "\347\224\267", 0));
        label->setText(QApplication::translate("CharacterCreator_CareerBeliefPage", "\346\200\247  \345\210\253\357\274\232", 0));
        optFemale->setText(QApplication::translate("CharacterCreator_CareerBeliefPage", "\345\245\263", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator_CareerBeliefPage: public Ui_CharacterCreator_CareerBeliefPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATOR_CAREER_BELIEF_PAGE_H
