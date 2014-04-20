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
    QGraphicsView *graphicsGravatar;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QComboBox *cmbBelif;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *lblCareerDescription;
    QFrame *line;
    QGraphicsView *graphicsGravatar_2;
    QGraphicsView *graphicsGravatar_3;
    QGraphicsView *graphicsGravatar_4;
    QGraphicsView *graphicsGravatar_5;
    QFrame *line_2;
    QFrame *frameBadge;

    void setupUi(QWidget *CharacterCreateDialog)
    {
        if (CharacterCreateDialog->objectName().isEmpty())
            CharacterCreateDialog->setObjectName(QStringLiteral("CharacterCreateDialog"));
        CharacterCreateDialog->resize(592, 396);
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
        icon.addFile(QStringLiteral("../../../../../.designer/backup/coeus_boy.png"), QSize(), QIcon::Normal, QIcon::Off);
        CharacterCreateDialog->setWindowIcon(icon);
        graphicsGravatar = new QGraphicsView(CharacterCreateDialog);
        graphicsGravatar->setObjectName(QStringLiteral("graphicsGravatar"));
        graphicsGravatar->setGeometry(QRect(10, 10, 196, 294));
        graphicsGravatar->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsGravatar->setFrameShape(QFrame::Box);
        graphicsGravatar->setFrameShadow(QFrame::Plain);
        graphicsGravatar->setLineWidth(1);
        graphicsGravatar->setMidLineWidth(1);
        graphicsGravatar->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar->setInteractive(false);
        graphicsGravatar->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        radioButton = new QRadioButton(CharacterCreateDialog);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(60, 310, 66, 21));
        radioButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../bin/client/images/female.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton->setIcon(icon1);
        radioButton->setIconSize(QSize(16, 15));
        radioButton->setChecked(false);
        radioButton_2 = new QRadioButton(CharacterCreateDialog);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(135, 310, 66, 21));
        radioButton_2->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../bin/client/images/male.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_2->setIcon(icon2);
        radioButton_2->setIconSize(QSize(16, 18));
        radioButton_2->setChecked(true);
        label = new QLabel(CharacterCreateDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 310, 51, 21));
        label->setFont(font);
        label_2 = new QLabel(CharacterCreateDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(335, 5, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(19);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(CharacterCreateDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(225, 235, 54, 12));
        label_3->setFont(font);
        lineEdit = new QLineEdit(CharacterCreateDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(225, 255, 221, 20));
        label_4 = new QLabel(CharacterCreateDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(225, 290, 54, 12));
        label_4->setFont(font);
        cmbBelif = new QComboBox(CharacterCreateDialog);
        cmbBelif->setObjectName(QStringLiteral("cmbBelif"));
        cmbBelif->setGeometry(QRect(225, 310, 221, 22));
        pushButton = new QPushButton(CharacterCreateDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(455, 255, 56, 23));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(CharacterCreateDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(515, 255, 56, 23));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(CharacterCreateDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 350, 111, 36));
        pushButton_3->setFont(font);
        lblCareerDescription = new QLabel(CharacterCreateDialog);
        lblCareerDescription->setObjectName(QStringLiteral("lblCareerDescription"));
        lblCareerDescription->setGeometry(QRect(226, 45, 351, 151));
        lblCareerDescription->setTextFormat(Qt::RichText);
        lblCareerDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line = new QFrame(CharacterCreateDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(225, 210, 356, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        graphicsGravatar_2 = new QGraphicsView(CharacterCreateDialog);
        graphicsGravatar_2->setObjectName(QStringLiteral("graphicsGravatar_2"));
        graphicsGravatar_2->setGeometry(QRect(10, 345, 32, 32));
        graphicsGravatar_2->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsGravatar_2->setFrameShape(QFrame::Box);
        graphicsGravatar_2->setFrameShadow(QFrame::Plain);
        graphicsGravatar_2->setLineWidth(1);
        graphicsGravatar_2->setMidLineWidth(1);
        graphicsGravatar_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_2->setInteractive(false);
        graphicsGravatar_2->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        graphicsGravatar_3 = new QGraphicsView(CharacterCreateDialog);
        graphicsGravatar_3->setObjectName(QStringLiteral("graphicsGravatar_3"));
        graphicsGravatar_3->setGeometry(QRect(65, 345, 32, 32));
        graphicsGravatar_3->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsGravatar_3->setFrameShape(QFrame::Box);
        graphicsGravatar_3->setFrameShadow(QFrame::Plain);
        graphicsGravatar_3->setLineWidth(1);
        graphicsGravatar_3->setMidLineWidth(1);
        graphicsGravatar_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_3->setInteractive(false);
        graphicsGravatar_3->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        graphicsGravatar_4 = new QGraphicsView(CharacterCreateDialog);
        graphicsGravatar_4->setObjectName(QStringLiteral("graphicsGravatar_4"));
        graphicsGravatar_4->setGeometry(QRect(175, 345, 32, 32));
        graphicsGravatar_4->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsGravatar_4->setFrameShape(QFrame::Box);
        graphicsGravatar_4->setFrameShadow(QFrame::Plain);
        graphicsGravatar_4->setLineWidth(1);
        graphicsGravatar_4->setMidLineWidth(1);
        graphicsGravatar_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_4->setInteractive(false);
        graphicsGravatar_4->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        graphicsGravatar_5 = new QGraphicsView(CharacterCreateDialog);
        graphicsGravatar_5->setObjectName(QStringLiteral("graphicsGravatar_5"));
        graphicsGravatar_5->setGeometry(QRect(120, 345, 32, 32));
        graphicsGravatar_5->setStyleSheet(QStringLiteral("border-color: rgb(85, 170, 255);"));
        graphicsGravatar_5->setFrameShape(QFrame::Box);
        graphicsGravatar_5->setFrameShadow(QFrame::Plain);
        graphicsGravatar_5->setLineWidth(1);
        graphicsGravatar_5->setMidLineWidth(1);
        graphicsGravatar_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsGravatar_5->setInteractive(false);
        graphicsGravatar_5->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        line_2 = new QFrame(CharacterCreateDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(208, 10, 16, 376));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        frameBadge = new QFrame(CharacterCreateDialog);
        frameBadge->setObjectName(QStringLiteral("frameBadge"));
        frameBadge->setGeometry(QRect(165, 10, 64, 64));
        frameBadge->setFrameShape(QFrame::StyledPanel);
        frameBadge->setFrameShadow(QFrame::Raised);

        retranslateUi(CharacterCreateDialog);

        QMetaObject::connectSlotsByName(CharacterCreateDialog);
    } // setupUi

    void retranslateUi(QWidget *CharacterCreateDialog)
    {
        CharacterCreateDialog->setWindowTitle(QApplication::translate("CharacterCreateDialog", "\350\247\222\350\211\262\345\210\233\345\273\272", 0));
#ifndef QT_NO_TOOLTIP
        graphicsGravatar->setToolTip(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar->setWhatsThis(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        radioButton->setText(QApplication::translate("CharacterCreateDialog", "\345\245\263\347\224\237", 0));
        radioButton_2->setText(QApplication::translate("CharacterCreateDialog", "\347\224\267\347\224\237", 0));
        label->setText(QApplication::translate("CharacterCreateDialog", "\346\200\247  \345\210\253\357\274\232", 0));
        label_2->setText(QApplication::translate("CharacterCreateDialog", "\351\225\234\345\255\220\347\214\216\344\272\272", 0));
        label_3->setText(QApplication::translate("CharacterCreateDialog", "\346\230\265\347\247\260", 0));
        lineEdit->setPlaceholderText(QApplication::translate("CharacterCreateDialog", "\350\257\267\350\276\223\345\205\245\346\270\270\346\210\217\346\230\265\347\247\260", 0));
        label_4->setText(QApplication::translate("CharacterCreateDialog", "\344\277\241\344\273\260", 0));
        pushButton->setText(QApplication::translate("CharacterCreateDialog", "\351\232\217\346\234\272", 0));
        pushButton_2->setText(QApplication::translate("CharacterCreateDialog", "\346\243\200\346\237\245", 0));
        pushButton_3->setText(QApplication::translate("CharacterCreateDialog", "\345\256\214\346\210\220\345\210\233\345\273\272", 0));
        lblCareerDescription->setText(QString());
#ifndef QT_NO_TOOLTIP
        graphicsGravatar_2->setToolTip(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar_2->setWhatsThis(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        graphicsGravatar_3->setToolTip(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar_3->setWhatsThis(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        graphicsGravatar_4->setToolTip(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar_4->setWhatsThis(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        graphicsGravatar_5->setToolTip(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        graphicsGravatar_5->setWhatsThis(QApplication::translate("CharacterCreateDialog", "<html><head/><body><p>Gravatar\346\230\257Globally Recognized Avatar\347\232\204\347\274\251\345\206\231\357\274\214\346\230\257gravatar\346\216\250\345\207\272\347\232\204\344\270\200\351\241\271\346\234\215\345\212\241\357\274\214\346\204\217\344\270\272\342\200\234\345\205\250\347\220\203\351\200\232\347\224\250\345\244\264\345\203\217\342\200\235\343\200\202\345\246\202\346\236\234\345\234\250Gravatar\347\232\204\346\234\215\345\212\241\345\231\250\344\270\212\346\224\276\347\275\256\344\272\206\344\275\240\350\207\252\345\267\261\347\232\204\345\244\264\345\203\217\357\274\214\345\217\252\350\246\201\346\217\220\344\276\233\344\270\216\344\271\213\345\205\263\350\201\224\347\232\204email\345\234\260\345\235\200\357\274\214coeus\344\276\277\345\217\257\344\273\245\351\200\232\350\277\207\350\257\245email\350\216\267\345\217\226\345\210\260\344\275\240\347\232\204\344\270\252\346\200\247\345\244\264\345\203\217\357\274\214\345\271\266\344\270\224\345\221\210\347\216\260\347\273\231\345\205\266\345\256\203\345"
                        "\234\250\347\272\277\347\216\251\345\256\266\343\200\202</p><p>\350\256\277\351\227\256\357\274\232<a href=\"http://cn.gravatar.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://cn.gravatar.com/</span></a></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class CharacterCreateDialog: public Ui_CharacterCreateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_CREATE_DIALOG_H
