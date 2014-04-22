/********************************************************************************
** Form generated from reading UI file 'character_create_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_CREATE_DIALOG_H
#define UI_CHARACTER_CREATE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreateDialog
{
public:
    QGraphicsView *graphicsCG;
    QRadioButton *optFemale;
    QRadioButton *optMale;
    QLabel *label;
    QLabel *lblCharacterName;
    QLabel *label_3;
    QLineEdit *txtNickname;
    QLabel *label_4;
    QComboBox *cmbBelif;
    QPushButton *btnRandom;
    QPushButton *btnCheckNickname;
    QPushButton *btnCreate;
    QLabel *lblCharacterDetail;
    QFrame *line;
    QFrame *line_2;
    QFrame *frameBadge;
    QComboBox *cmbAvatarList;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *CharacterCreateDialog)
    {
        if (CharacterCreateDialog->objectName().isEmpty())
            CharacterCreateDialog->setObjectName(QStringLiteral("CharacterCreateDialog"));
        CharacterCreateDialog->resize(601, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CharacterCreateDialog->sizePolicy().hasHeightForWidth());
        CharacterCreateDialog->setSizePolicy(sizePolicy);
        CharacterCreateDialog->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        CharacterCreateDialog->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../.designer/backup/coeus_boy.png"), QSize(), QIcon::Normal, QIcon::Off);
        CharacterCreateDialog->setWindowIcon(icon);
        graphicsCG = new QGraphicsView(CharacterCreateDialog);
        graphicsCG->setObjectName(QStringLiteral("graphicsCG"));
        graphicsCG->setGeometry(QRect(10, 10, 196, 296));
        graphicsCG->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsCG->setFrameShape(QFrame::Box);
        graphicsCG->setFrameShadow(QFrame::Plain);
        graphicsCG->setLineWidth(1);
        graphicsCG->setMidLineWidth(1);
        graphicsCG->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCG->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCG->setInteractive(false);
        graphicsCG->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        optFemale = new QRadioButton(CharacterCreateDialog);
        buttonGroup = new QButtonGroup(CharacterCreateDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(optFemale);
        optFemale->setObjectName(QStringLiteral("optFemale"));
        optFemale->setGeometry(QRect(70, 310, 56, 21));
        optFemale->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../bin/client/images/female.png"), QSize(), QIcon::Normal, QIcon::Off);
        optFemale->setIcon(icon1);
        optFemale->setIconSize(QSize(16, 15));
        optFemale->setChecked(false);
        optMale = new QRadioButton(CharacterCreateDialog);
        buttonGroup->addButton(optMale);
        optMale->setObjectName(QStringLiteral("optMale"));
        optMale->setGeometry(QRect(150, 310, 56, 21));
        optMale->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../bin/client/images/male.png"), QSize(), QIcon::Normal, QIcon::Off);
        optMale->setIcon(icon2);
        optMale->setIconSize(QSize(16, 18));
        optMale->setChecked(true);
        label = new QLabel(CharacterCreateDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 310, 51, 21));
        label->setFont(font);
        lblCharacterName = new QLabel(CharacterCreateDialog);
        lblCharacterName->setObjectName(QStringLiteral("lblCharacterName"));
        lblCharacterName->setGeometry(QRect(340, 15, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setWeight(75);
        lblCharacterName->setFont(font1);
        lblCharacterName->setTextFormat(Qt::RichText);
        lblCharacterName->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(CharacterCreateDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(225, 235, 54, 12));
        label_3->setFont(font);
        txtNickname = new QLineEdit(CharacterCreateDialog);
        txtNickname->setObjectName(QStringLiteral("txtNickname"));
        txtNickname->setGeometry(QRect(225, 255, 246, 20));
        label_4 = new QLabel(CharacterCreateDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(225, 290, 54, 12));
        label_4->setFont(font);
        cmbBelif = new QComboBox(CharacterCreateDialog);
        cmbBelif->setObjectName(QStringLiteral("cmbBelif"));
        cmbBelif->setGeometry(QRect(225, 310, 246, 22));
        btnRandom = new QPushButton(CharacterCreateDialog);
        btnRandom->setObjectName(QStringLiteral("btnRandom"));
        btnRandom->setGeometry(QRect(480, 255, 56, 23));
        btnRandom->setFont(font);
        btnCheckNickname = new QPushButton(CharacterCreateDialog);
        btnCheckNickname->setObjectName(QStringLiteral("btnCheckNickname"));
        btnCheckNickname->setGeometry(QRect(540, 255, 56, 23));
        btnCheckNickname->setFont(font);
        btnCreate = new QPushButton(CharacterCreateDialog);
        btnCreate->setObjectName(QStringLiteral("btnCreate"));
        btnCreate->setGeometry(QRect(485, 355, 111, 36));
        btnCreate->setFont(font);
        lblCharacterDetail = new QLabel(CharacterCreateDialog);
        lblCharacterDetail->setObjectName(QStringLiteral("lblCharacterDetail"));
        lblCharacterDetail->setGeometry(QRect(226, 80, 351, 126));
        lblCharacterDetail->setTextFormat(Qt::RichText);
        lblCharacterDetail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblCharacterDetail->setWordWrap(true);
        line = new QFrame(CharacterCreateDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(225, 210, 366, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(CharacterCreateDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(208, 10, 16, 381));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        frameBadge = new QFrame(CharacterCreateDialog);
        frameBadge->setObjectName(QStringLiteral("frameBadge"));
        frameBadge->setGeometry(QRect(275, 5, 64, 64));
        frameBadge->setFrameShape(QFrame::StyledPanel);
        frameBadge->setFrameShadow(QFrame::Raised);
        cmbAvatarList = new QComboBox(CharacterCreateDialog);
        cmbAvatarList->setObjectName(QStringLiteral("cmbAvatarList"));
        cmbAvatarList->setGeometry(QRect(10, 335, 196, 56));
        cmbAvatarList->setIconSize(QSize(48, 48));

        retranslateUi(CharacterCreateDialog);

        QMetaObject::connectSlotsByName(CharacterCreateDialog);
    } // setupUi

    void retranslateUi(QWidget *CharacterCreateDialog)
    {
        CharacterCreateDialog->setWindowTitle(QApplication::translate("CharacterCreateDialog", "\350\247\222\350\211\262\345\210\233\345\273\272", 0));
#ifndef QT_NO_TOOLTIP
        graphicsCG->setToolTip(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsCG->setWhatsThis(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        optFemale->setText(QApplication::translate("CharacterCreateDialog", "\345\245\263", 0));
        optMale->setText(QApplication::translate("CharacterCreateDialog", "\347\224\267", 0));
        label->setText(QApplication::translate("CharacterCreateDialog", "\346\200\247  \345\210\253\357\274\232", 0));
        lblCharacterName->setText(QApplication::translate("CharacterCreateDialog", "\351\225\234\345\255\220\347\214\216\344\272\272", 0));
        label_3->setText(QApplication::translate("CharacterCreateDialog", "\346\230\265\347\247\260", 0));
        txtNickname->setPlaceholderText(QApplication::translate("CharacterCreateDialog", "\350\257\267\350\276\223\345\205\245\346\270\270\346\210\217\346\230\265\347\247\260", 0));
        label_4->setText(QApplication::translate("CharacterCreateDialog", "\344\277\241\344\273\260", 0));
        btnRandom->setText(QApplication::translate("CharacterCreateDialog", "\351\232\217\346\234\272", 0));
        btnCheckNickname->setText(QApplication::translate("CharacterCreateDialog", "\346\243\200\346\237\245", 0));
        btnCreate->setText(QApplication::translate("CharacterCreateDialog", "\345\256\214\346\210\220\345\210\233\345\273\272", 0));
        lblCharacterDetail->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CharacterCreateDialog: public Ui_CharacterCreateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATE_DIALOG_H
