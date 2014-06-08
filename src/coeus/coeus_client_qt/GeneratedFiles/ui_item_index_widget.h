/********************************************************************************
** Form generated from reading UI file 'item_index_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEM_INDEX_WIDGET_H
#define UI_ITEM_INDEX_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemIndexWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblIcon;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *lblItemName;
    QLabel *lblItemDescription;
    QHBoxLayout *horizontalLayout;
    QLabel *lblTypename;
    QLabel *lblCount;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ItemIndexWidget)
    {
        if (ItemIndexWidget->objectName().isEmpty())
            ItemIndexWidget->setObjectName(QStringLiteral("ItemIndexWidget"));
        ItemIndexWidget->resize(677, 155);
        verticalLayout_2 = new QVBoxLayout(ItemIndexWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblIcon = new QLabel(ItemIndexWidget);
        lblIcon->setObjectName(QStringLiteral("lblIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblIcon->sizePolicy().hasHeightForWidth());
        lblIcon->setSizePolicy(sizePolicy);
        lblIcon->setMinimumSize(QSize(64, 64));
        lblIcon->setMaximumSize(QSize(64, 64));

        horizontalLayout_4->addWidget(lblIcon);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblItemName = new QLabel(ItemIndexWidget);
        lblItemName->setObjectName(QStringLiteral("lblItemName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblItemName->sizePolicy().hasHeightForWidth());
        lblItemName->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        lblItemName->setFont(font);
        lblItemName->setFrameShape(QFrame::NoFrame);
        lblItemName->setWordWrap(true);

        verticalLayout->addWidget(lblItemName);

        lblItemDescription = new QLabel(ItemIndexWidget);
        lblItemDescription->setObjectName(QStringLiteral("lblItemDescription"));
        sizePolicy1.setHeightForWidth(lblItemDescription->sizePolicy().hasHeightForWidth());
        lblItemDescription->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lblItemDescription->setFont(font1);
        lblItemDescription->setScaledContents(true);
        lblItemDescription->setWordWrap(true);

        verticalLayout->addWidget(lblItemDescription, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblTypename = new QLabel(ItemIndexWidget);
        lblTypename->setObjectName(QStringLiteral("lblTypename"));
        lblTypename->setMinimumSize(QSize(91, 14));
        lblTypename->setMaximumSize(QSize(91, 14));
        lblTypename->setWordWrap(true);

        horizontalLayout->addWidget(lblTypename, 0, Qt::AlignLeft);

        lblCount = new QLabel(ItemIndexWidget);
        lblCount->setObjectName(QStringLiteral("lblCount"));
        sizePolicy.setHeightForWidth(lblCount->sizePolicy().hasHeightForWidth());
        lblCount->setSizePolicy(sizePolicy);
        lblCount->setMinimumSize(QSize(6, 14));
        lblCount->setWordWrap(true);

        horizontalLayout->addWidget(lblCount, 0, Qt::AlignLeft);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(ItemIndexWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(62, 23));
        pushButton->setMaximumSize(QSize(62, 23));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(ItemIndexWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(61, 23));
        pushButton_2->setMaximumSize(QSize(63, 23));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(17, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(ItemIndexWidget);

        QMetaObject::connectSlotsByName(ItemIndexWidget);
    } // setupUi

    void retranslateUi(QWidget *ItemIndexWidget)
    {
        ItemIndexWidget->setWindowTitle(QApplication::translate("ItemIndexWidget", "Form", 0));
        lblIcon->setText(QString());
        lblItemName->setText(QApplication::translate("ItemIndexWidget", "<html><head/><body><p><span style=\" font-weight:600;\">Item name</span></p></body></html>", 0));
        lblItemDescription->setText(QApplication::translate("ItemIndexWidget", "Write item description here.", 0));
        lblTypename->setText(QApplication::translate("ItemIndexWidget", "<html><head/><body><p>Typename</p></body></html>", 0));
        lblCount->setText(QApplication::translate("ItemIndexWidget", "999", 0));
        pushButton->setText(QApplication::translate("ItemIndexWidget", "\344\275\277\347\224\250", 0));
        pushButton_2->setText(QApplication::translate("ItemIndexWidget", "\344\270\242\345\274\203", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemIndexWidget: public Ui_ItemIndexWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEM_INDEX_WIDGET_H
