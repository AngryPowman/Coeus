/********************************************************************************
** Form generated from reading UI file 'gamesys_setting_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESYS_SETTING_DIALOG_H
#define UI_GAMESYS_SETTING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameSysSettingDialog
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QWidget *widget;
    QCheckBox *checkBox_9;
    QWidget *tab_4;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *line;
    QWidget *tab_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QCheckBox *checkBox;
    QSlider *horizontalSlider_2;
    QCheckBox *checkBox_2;
    QSlider *horizontalSlider_3;
    QCheckBox *checkBox_3;
    QSlider *horizontalSlider_4;
    QCheckBox *checkBox_4;
    QWidget *tab_5;
    QWidget *tab_3;
    QCheckBox *checkBox_5;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QFrame *line_2;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QMainWindow *GameSysSettingDialog)
    {
        if (GameSysSettingDialog->objectName().isEmpty())
            GameSysSettingDialog->setObjectName(QStringLiteral("GameSysSettingDialog"));
        GameSysSettingDialog->setWindowModality(Qt::WindowModal);
        GameSysSettingDialog->resize(430, 292);
        centralwidget = new QWidget(GameSysSettingDialog);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 411, 241));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        checkBox_6 = new QCheckBox(tab);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(20, 15, 131, 16));
        checkBox_7 = new QCheckBox(tab);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(20, 40, 131, 16));
        checkBox_8 = new QCheckBox(tab);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(20, 65, 216, 16));
        tabWidget->addTab(tab, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        checkBox_9 = new QCheckBox(widget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(15, 10, 186, 16));
        tabWidget->addTab(widget, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 20, 54, 12));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(75, 15, 166, 22));
        line = new QFrame(tab_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 386, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 25, 296, 19));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(15, 40, 26, 16));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 5, 71, 16));
        checkBox->setChecked(true);
        horizontalSlider_2 = new QSlider(tab_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(30, 75, 296, 19));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setValue(50);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::NoTicks);
        checkBox_2 = new QCheckBox(tab_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 55, 71, 16));
        checkBox_2->setChecked(true);
        horizontalSlider_3 = new QSlider(tab_2);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(30, 125, 296, 19));
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setValue(50);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setTickPosition(QSlider::NoTicks);
        checkBox_3 = new QCheckBox(tab_2);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 105, 71, 16));
        checkBox_3->setChecked(true);
        horizontalSlider_4 = new QSlider(tab_2);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(30, 175, 296, 19));
        horizontalSlider_4->setMinimum(0);
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setValue(50);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_4->setTickPosition(QSlider::NoTicks);
        checkBox_4 = new QCheckBox(tab_2);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 155, 71, 16));
        checkBox_4->setChecked(true);
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        checkBox_5 = new QCheckBox(tab_3);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 10, 111, 16));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 35, 36, 21));
        comboBox_2 = new QComboBox(tab_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setEnabled(false);
        comboBox_2->setGeometry(QRect(80, 35, 146, 21));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 65, 36, 21));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(80, 65, 146, 20));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 95, 36, 21));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(80, 95, 76, 20));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 135, 46, 21));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(80, 135, 146, 20));
        line_2 = new QFrame(tab_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 120, 386, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 160, 46, 21));
        lineEdit_4 = new QLineEdit(tab_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(80, 160, 146, 20));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 185, 46, 21));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(80, 185, 146, 20));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 185, 86, 23));
        tabWidget->addTab(tab_3, QString());
        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(190, 260, 231, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);
        GameSysSettingDialog->setCentralWidget(centralwidget);

        retranslateUi(GameSysSettingDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameSysSettingDialog);
    } // setupUi

    void retranslateUi(QMainWindow *GameSysSettingDialog)
    {
        GameSysSettingDialog->setWindowTitle(QApplication::translate("GameSysSettingDialog", "\346\270\270\346\210\217\350\256\276\347\275\256", 0));
        checkBox_6->setText(QApplication::translate("GameSysSettingDialog", "\345\220\257\345\212\250\346\227\266\350\207\252\345\212\250\347\231\273\345\275\225\346\270\270\346\210\217", 0));
        checkBox_7->setText(QApplication::translate("GameSysSettingDialog", "\350\207\252\345\212\250\346\243\200\346\237\245\345\256\242\346\210\267\347\253\257\346\233\264\346\226\260", 0));
        checkBox_8->setText(QApplication::translate("GameSysSettingDialog", "\346\234\200\345\260\217\345\214\226\346\227\266\345\210\260\347\263\273\347\273\237\346\211\230\347\233\230\357\274\210\344\273\205\351\231\220Windows\357\274\211", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GameSysSettingDialog", "\345\237\272\346\234\254", 0));
        checkBox_9->setText(QApplication::translate("GameSysSettingDialog", "\346\270\270\346\210\217\344\270\255\345\205\201\350\256\270\345\205\261\344\272\253\346\210\221\347\232\204\346\211\200\345\234\250\345\234\260\345\214\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("GameSysSettingDialog", "\346\270\270\346\210\217\346\200\247", 0));
        label->setText(QApplication::translate("GameSysSettingDialog", "\347\225\214\351\235\242\351\243\216\346\240\274\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GameSysSettingDialog", "Fusion", 0)
         << QApplication::translate("GameSysSettingDialog", "Windows Visita", 0)
         << QApplication::translate("GameSysSettingDialog", "Windows XP", 0)
         << QApplication::translate("GameSysSettingDialog", "Windows \347\273\217\345\205\270", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GameSysSettingDialog", "\347\224\273\351\235\242", 0));
        label_3->setText(QString());
        checkBox->setText(QApplication::translate("GameSysSettingDialog", "\350\203\214\346\231\257\351\237\263\344\271\220", 0));
        checkBox_2->setText(QApplication::translate("GameSysSettingDialog", "\350\203\214\346\231\257\351\237\263\346\225\210", 0));
        checkBox_3->setText(QApplication::translate("GameSysSettingDialog", "\346\270\270\346\210\217\351\237\263\346\225\210", 0));
        checkBox_4->setText(QApplication::translate("GameSysSettingDialog", "\346\223\215\344\275\234\351\237\263\346\225\210", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GameSysSettingDialog", "\345\243\260\351\237\263", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("GameSysSettingDialog", "\347\203\255\351\224\256", 0));
        checkBox_5->setText(QApplication::translate("GameSysSettingDialog", "\344\275\277\347\224\250\344\273\243\347\220\206\346\234\215\345\212\241\345\231\250", 0));
        label_2->setText(QApplication::translate("GameSysSettingDialog", "\347\261\273\345\236\213\357\274\232", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("GameSysSettingDialog", "HTTP\344\273\243\347\220\206", 0)
         << QApplication::translate("GameSysSettingDialog", "SOCK5\344\273\243\347\220\206", 0)
         << QApplication::translate("GameSysSettingDialog", "\344\275\277\347\224\250\346\265\217\350\247\210\345\231\250\350\256\276\347\275\256", 0)
        );
        label_4->setText(QApplication::translate("GameSysSettingDialog", "\345\234\260\345\235\200\357\274\232", 0));
        label_5->setText(QApplication::translate("GameSysSettingDialog", "\347\253\257\345\217\243\357\274\232", 0));
        label_6->setText(QApplication::translate("GameSysSettingDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_7->setText(QApplication::translate("GameSysSettingDialog", "\345\257\206  \347\240\201\357\274\232", 0));
        label_8->setText(QApplication::translate("GameSysSettingDialog", "    \345\237\237\357\274\232", 0));
        pushButton->setText(QApplication::translate("GameSysSettingDialog", "\346\265\213\350\257\225\344\273\243\347\220\206", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GameSysSettingDialog", "\347\275\221\347\273\234", 0));
    } // retranslateUi

};

namespace Ui {
    class GameSysSettingDialog: public Ui_GameSysSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESYS_SETTING_DIALOG_H
