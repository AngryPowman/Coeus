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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemIndexWidget
{
public:
    QLabel *lblIcon;
    QLabel *lblItemName;
    QLabel *lblItemDescription;
    QLabel *lblTypename;
    QLabel *lblCount;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ItemIndexWidget)
    {
        if (ItemIndexWidget->objectName().isEmpty())
            ItemIndexWidget->setObjectName(QStringLiteral("ItemIndexWidget"));
        ItemIndexWidget->resize(589, 157);
        lblIcon = new QLabel(ItemIndexWidget);
        lblIcon->setObjectName(QStringLiteral("lblIcon"));
        lblIcon->setGeometry(QRect(8, 0, 64, 64));
        lblItemName = new QLabel(ItemIndexWidget);
        lblItemName->setObjectName(QStringLiteral("lblItemName"));
        lblItemName->setGeometry(QRect(88, 8, 77, 16));
        lblItemName->setFrameShape(QFrame::NoFrame);
        lblItemName->setWordWrap(true);
        lblItemDescription = new QLabel(ItemIndexWidget);
        lblItemDescription->setObjectName(QStringLiteral("lblItemDescription"));
        lblItemDescription->setGeometry(QRect(88, 28, 233, 29));
        lblItemDescription->setWordWrap(true);
        lblTypename = new QLabel(ItemIndexWidget);
        lblTypename->setObjectName(QStringLiteral("lblTypename"));
        lblTypename->setGeometry(QRect(324, 20, 73, 16));
        lblTypename->setWordWrap(true);
        lblCount = new QLabel(ItemIndexWidget);
        lblCount->setObjectName(QStringLiteral("lblCount"));
        lblCount->setGeometry(QRect(408, 20, 25, 16));
        lblCount->setWordWrap(true);
        pushButton = new QPushButton(ItemIndexWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(456, 16, 61, 23));
        pushButton_2 = new QPushButton(ItemIndexWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 16, 61, 23));

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
        lblCount->setText(QApplication::translate("ItemIndexWidget", "<html><head/><body><p>1</p></body></html>", 0));
        pushButton->setText(QApplication::translate("ItemIndexWidget", "\344\275\277\347\224\250", 0));
        pushButton_2->setText(QApplication::translate("ItemIndexWidget", "\344\270\242\345\274\203", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemIndexWidget: public Ui_ItemIndexWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEM_INDEX_WIDGET_H
