/********************************************************************************
** Form generated from reading UI file 'world_info_side_bar.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORLD_INFO_SIDE_BAR_H
#define UI_WORLD_INFO_SIDE_BAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorldInfoSideBar
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *buttomInfoTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QProgressBar *progressBar;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *WorldInfoSideBar)
    {
        if (WorldInfoSideBar->objectName().isEmpty())
            WorldInfoSideBar->setObjectName(QStringLiteral("WorldInfoSideBar"));
        WorldInfoSideBar->resize(252, 556);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WorldInfoSideBar->sizePolicy().hasHeightForWidth());
        WorldInfoSideBar->setSizePolicy(sizePolicy);
        WorldInfoSideBar->setMinimumSize(QSize(252, 556));
        horizontalLayout = new QHBoxLayout(WorldInfoSideBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttomInfoTabWidget = new QTabWidget(WorldInfoSideBar);
        buttomInfoTabWidget->setObjectName(QStringLiteral("buttomInfoTabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 20, 365, 44));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMaximumSize(QSize(73, 16));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(20);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar, 0, 1, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);


        verticalLayout_3->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMaximumSize(QSize(73, 19));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1, Qt::AlignHCenter);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 24, 157, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 48, 157, 16));

        verticalLayout_2->addWidget(groupBox_2);

        buttomInfoTabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_2 = new QHBoxLayout(tab_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        treeWidget = new QTreeWidget(tab_3);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        treeWidget->setFont(font);
        treeWidget->setRootIsDecorated(false);
        treeWidget->setUniformRowHeights(true);
        treeWidget->setItemsExpandable(false);
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setHighlightSections(true);

        horizontalLayout_2->addWidget(treeWidget);

        buttomInfoTabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(buttomInfoTabWidget);


        retranslateUi(WorldInfoSideBar);

        buttomInfoTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WorldInfoSideBar);
    } // setupUi

    void retranslateUi(QWidget *WorldInfoSideBar)
    {
        WorldInfoSideBar->setWindowTitle(QString());
        groupBox->setTitle(QApplication::translate("WorldInfoSideBar", "\344\270\252\344\272\272\346\210\220\345\260\261", 0));
        label_3->setText(QApplication::translate("WorldInfoSideBar", "\344\270\226\347\225\214\345\256\214\346\210\220\345\272\246\357\274\232", 0));
        label_4->setText(QApplication::translate("WorldInfoSideBar", "\344\270\226\347\225\214\344\272\262\345\222\214\345\272\246\357\274\232", 0));
        label_5->setText(QApplication::translate("WorldInfoSideBar", "65535", 0));
        groupBox_2->setTitle(QApplication::translate("WorldInfoSideBar", "\344\270\226\347\225\214\346\246\202\345\206\265", 0));
        label->setText(QApplication::translate("WorldInfoSideBar", "\344\275\215\351\235\242\345\220\215\347\247\260\357\274\232\347\273\264\347\272\263\346\226\257\344\270\226\347\225\214", 0));
        label_2->setText(QApplication::translate("WorldInfoSideBar", "\347\247\221\346\212\200\347\261\273\345\236\213\357\274\232\346\230\237\351\231\205\346\226\207\346\230\216", 0));
        buttomInfoTabWidget->setTabText(buttomInfoTabWidget->indexOf(tab), QApplication::translate("WorldInfoSideBar", "\346\246\202\345\206\265\344\270\216\346\210\220\345\260\261", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("WorldInfoSideBar", "\347\212\266\346\200\201", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("WorldInfoSideBar", "\350\272\253\344\273\275", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("WorldInfoSideBar", "\347\216\251\345\256\266\345\220\215\347\247\260", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QApplication::translate("WorldInfoSideBar", "\346\255\243\345\234\250\350\260\203\346\225\264\344\270\226\347\225\214\346\263\225\345\210\231", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("WorldInfoSideBar", "\344\275\215\351\235\242\347\273\237\346\262\273\350\200\205", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("WorldInfoSideBar", "\344\270\215\345\260\204\350\204\270\350\277\230\346\230\257\345\245\275\346\234\213\345\217\213", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(2, QApplication::translate("WorldInfoSideBar", "\346\255\243\345\234\250\350\260\203\346\225\264\344\274\240\351\200\201\344\273\267\346\240\274", 0));
        ___qtreewidgetitem2->setText(1, QApplication::translate("WorldInfoSideBar", "\344\275\215\351\235\242\350\265\204\346\272\220\346\243\200\345\257\237\345\256\230", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("WorldInfoSideBar", "\350\200\201\350\202\211\351\270\241", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(2, QApplication::translate("WorldInfoSideBar", "\346\255\243\345\234\250\346\210\230\346\226\227", 0));
        ___qtreewidgetitem3->setText(1, QApplication::translate("WorldInfoSideBar", "\346\260\270\344\271\205\345\261\205\346\260\221", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("WorldInfoSideBar", "\345\215\242\345\263\260\346\273\241", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(2, QApplication::translate("WorldInfoSideBar", "\346\255\243\345\234\250\351\207\207\347\237\277", 0));
        ___qtreewidgetitem4->setText(1, QApplication::translate("WorldInfoSideBar", "\346\260\270\344\271\205\345\261\205\346\260\221", 0));
        ___qtreewidgetitem4->setText(0, QApplication::translate("WorldInfoSideBar", "\351\255\202\351\255\204\345\246\226\346\242\246", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(2, QApplication::translate("WorldInfoSideBar", "\345\276\205\346\234\272", 0));
        ___qtreewidgetitem5->setText(1, QApplication::translate("WorldInfoSideBar", "\346\260\270\344\271\205\345\261\205\346\260\221", 0));
        ___qtreewidgetitem5->setText(0, QApplication::translate("WorldInfoSideBar", "\345\215\241\346\213\211", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(2, QApplication::translate("WorldInfoSideBar", "\345\276\205\346\234\272", 0));
        ___qtreewidgetitem6->setText(1, QApplication::translate("WorldInfoSideBar", "\346\227\205\350\241\214\350\200\205", 0));
        ___qtreewidgetitem6->setText(0, QApplication::translate("WorldInfoSideBar", "\346\257\224\344\275\240\302\267\346\234\211\351\222\261", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        buttomInfoTabWidget->setTabText(buttomInfoTabWidget->indexOf(tab_3), QApplication::translate("WorldInfoSideBar", "\345\234\250\347\272\277\347\216\251\345\256\266", 0));
    } // retranslateUi

};

namespace Ui {
    class WorldInfoSideBar: public Ui_WorldInfoSideBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORLD_INFO_SIDE_BAR_H
