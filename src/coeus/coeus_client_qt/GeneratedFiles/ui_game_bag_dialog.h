/********************************************************************************
** Form generated from reading UI file 'game_bag_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_BAG_DIALOG_H
#define UI_GAME_BAG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameBag
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QMainWindow *GameBag)
    {
        if (GameBag->objectName().isEmpty())
            GameBag->setObjectName(QStringLiteral("GameBag"));
        GameBag->setWindowModality(Qt::WindowModal);
        GameBag->resize(695, 423);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameBag->sizePolicy().hasHeightForWidth());
        GameBag->setSizePolicy(sizePolicy);
        GameBag->setMinimumSize(QSize(695, 423));
        GameBag->setAnimated(false);
        GameBag->setDocumentMode(false);
        GameBag->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(GameBag);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(260, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBox, 0, Qt::AlignLeft);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_3->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        GameBag->setCentralWidget(centralWidget);

        retranslateUi(GameBag);

        QMetaObject::connectSlotsByName(GameBag);
    } // setupUi

    void retranslateUi(QMainWindow *GameBag)
    {
        GameBag->setWindowTitle(QApplication::translate("GameBag", "\345\202\250\347\211\251\345\231\250", 0));
        lineEdit->setPlaceholderText(QApplication::translate("GameBag", "\345\277\253\351\200\237\346\237\245\346\211\276\347\211\251\345\223\201", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GameBag", "\351\273\230\350\256\244\346\216\222\345\272\217", 0)
         << QApplication::translate("GameBag", "\347\261\273\345\236\213\346\216\222\345\272\217", 0)
         << QApplication::translate("GameBag", "\350\264\250\351\207\217\346\216\222\345\272\217", 0)
         << QApplication::translate("GameBag", "\345\217\257\347\224\250\346\200\247\346\216\222\345\272\217", 0)
        );
        checkBox->setText(QApplication::translate("GameBag", "\346\230\276\347\244\272\350\257\246\347\273\206\345\210\206\347\261\273", 0));
        pushButton_2->setText(QApplication::translate("GameBag", "\344\275\277\347\224\250", 0));
        pushButton_3->setText(QApplication::translate("GameBag", "\345\207\272\345\224\256", 0));
        pushButton->setText(QApplication::translate("GameBag", "\344\270\242\345\274\203", 0));
    } // retranslateUi

};

namespace Ui {
    class GameBag: public Ui_GameBag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_BAG_DIALOG_H
