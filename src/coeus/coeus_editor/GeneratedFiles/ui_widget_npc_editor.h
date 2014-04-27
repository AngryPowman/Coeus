/********************************************************************************
** Form generated from reading UI file 'widget_npc_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_NPC_EDITOR_H
#define UI_WIDGET_NPC_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NPCEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTreeWidget *tvNpcList;
    QPushButton *pushButton;
    QGridLayout *gridLayout;
    QPushButton *btnSave;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLineEdit *txtNPCId;
    QLabel *label_2;
    QLineEdit *txtNPCName;
    QLabel *label_3;
    QLineEdit *txtNPCTitle;
    QLineEdit *txtNPCAvatar;
    QLabel *label_4;
    QToolButton *btnViewAvata;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QFrame *line;
    QGridLayout *gridLayout_4;
    QSpinBox *spbLevel;
    QLabel *label_5;
    QLabel *label_10;
    QGridLayout *gridLayout_3;
    QCheckBox *chkAttackable;
    QCheckBox *chkMarriageable;
    QCheckBox *chkPresentable;
    QCheckBox *chkFavorable;
    QCheckBox *chkSurrender;
    QSpacerItem *horizontalSpacer;
    QLabel *label_11;
    QFrame *line_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkMovealbe;
    QTreeWidget *treeWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox_7;
    QWidget *tab_4;
    QTreeWidget *treeWidget;
    QLabel *label_8;
    QWidget *tab_6;
    QWidget *tab_2;
    QListWidget *lstDialoguesType;
    QStackedWidget *stackedWidgetDialogueTree;
    QWidget *stackedWidgetDialogueTreePage1;
    QTreeWidget *tvDialoguesTree;
    QWidget *page_3;
    QListWidget *listWidget_2;

    void setupUi(QWidget *NPCEditor)
    {
        if (NPCEditor->objectName().isEmpty())
            NPCEditor->setObjectName(QStringLiteral("NPCEditor"));
        NPCEditor->resize(836, 657);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NPCEditor->sizePolicy().hasHeightForWidth());
        NPCEditor->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(NPCEditor);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tvNpcList = new QTreeWidget(NPCEditor);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(tvNpcList);
        new QTreeWidgetItem(__qtreewidgetitem);
        tvNpcList->setObjectName(QStringLiteral("tvNpcList"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tvNpcList->sizePolicy().hasHeightForWidth());
        tvNpcList->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(tvNpcList);

        pushButton = new QPushButton(NPCEditor);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnSave = new QPushButton(NPCEditor);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy2);
        btnSave->setLayoutDirection(Qt::LeftToRight);
        btnSave->setDefault(false);
        btnSave->setFlat(false);

        gridLayout->addWidget(btnSave, 1, 0, 1, 1, Qt::AlignRight);

        tabWidget = new QTabWidget(NPCEditor);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 15, 21, 21));
        txtNPCId = new QLineEdit(tab);
        txtNPCId->setObjectName(QStringLiteral("txtNPCId"));
        txtNPCId->setGeometry(QRect(75, 15, 301, 20));
        txtNPCId->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(15, 45, 51, 21));
        txtNPCName = new QLineEdit(tab);
        txtNPCName->setObjectName(QStringLiteral("txtNPCName"));
        txtNPCName->setGeometry(QRect(75, 45, 301, 20));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(15, 75, 51, 21));
        txtNPCTitle = new QLineEdit(tab);
        txtNPCTitle->setObjectName(QStringLiteral("txtNPCTitle"));
        txtNPCTitle->setGeometry(QRect(75, 75, 301, 20));
        txtNPCAvatar = new QLineEdit(tab);
        txtNPCAvatar->setObjectName(QStringLiteral("txtNPCAvatar"));
        txtNPCAvatar->setGeometry(QRect(75, 105, 261, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(15, 105, 51, 21));
        btnViewAvata = new QToolButton(tab);
        btnViewAvata->setObjectName(QStringLiteral("btnViewAvata"));
        btnViewAvata->setGeometry(QRect(340, 105, 37, 21));
        btnViewAvata->setPopupMode(QToolButton::DelayedPopup);
        tabWidget->addTab(tab, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        spbLevel = new QSpinBox(widget);
        spbLevel->setObjectName(QStringLiteral("spbLevel"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spbLevel->sizePolicy().hasHeightForWidth());
        spbLevel->setSizePolicy(sizePolicy3);
        spbLevel->setMinimum(1);
        spbLevel->setMaximum(120);

        gridLayout_4->addWidget(spbLevel, 0, 1, 1, 1, Qt::AlignLeft);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label_10, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        chkAttackable = new QCheckBox(widget);
        chkAttackable->setObjectName(QStringLiteral("chkAttackable"));
        sizePolicy2.setHeightForWidth(chkAttackable->sizePolicy().hasHeightForWidth());
        chkAttackable->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(chkAttackable, 0, 0, 1, 1);

        chkMarriageable = new QCheckBox(widget);
        chkMarriageable->setObjectName(QStringLiteral("chkMarriageable"));
        sizePolicy2.setHeightForWidth(chkMarriageable->sizePolicy().hasHeightForWidth());
        chkMarriageable->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(chkMarriageable, 0, 1, 1, 1);

        chkPresentable = new QCheckBox(widget);
        chkPresentable->setObjectName(QStringLiteral("chkPresentable"));

        gridLayout_3->addWidget(chkPresentable, 0, 2, 1, 1);

        chkFavorable = new QCheckBox(widget);
        chkFavorable->setObjectName(QStringLiteral("chkFavorable"));
        sizePolicy2.setHeightForWidth(chkFavorable->sizePolicy().hasHeightForWidth());
        chkFavorable->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(chkFavorable, 1, 0, 1, 1);

        chkSurrender = new QCheckBox(widget);
        chkSurrender->setObjectName(QStringLiteral("chkSurrender"));
        sizePolicy2.setHeightForWidth(chkSurrender->sizePolicy().hasHeightForWidth());
        chkSurrender->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(chkSurrender, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_4->addWidget(label_11);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        tabWidget_2 = new QTabWidget(widget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chkMovealbe = new QCheckBox(tab_3);
        chkMovealbe->setObjectName(QStringLiteral("chkMovealbe"));

        verticalLayout_2->addWidget(chkMovealbe);

        treeWidget_2 = new QTreeWidget(tab_3);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_2);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(treeWidget_2->sizePolicy().hasHeightForWidth());
        treeWidget_2->setSizePolicy(sizePolicy4);
        treeWidget_2->header()->setCascadingSectionResizes(true);
        treeWidget_2->header()->setHighlightSections(true);
        treeWidget_2->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_2->addWidget(treeWidget_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_7, 0, 2, 1, 1);

        spinBox_2 = new QSpinBox(tab_3);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        sizePolicy2.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy2);
        spinBox_2->setValue(1);

        gridLayout_2->addWidget(spinBox_2, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        checkBox_7 = new QCheckBox(tab_3);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        verticalLayout_3->addWidget(checkBox_7);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        treeWidget = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem2->setCheckState(0, Qt::Checked);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem3->setCheckState(0, Qt::Checked);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem4->setCheckState(0, Qt::Checked);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(5, 30, 586, 356));
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setHighlightSections(true);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(5, 10, 241, 16));
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_2->addTab(tab_6, QString());

        verticalLayout_4->addWidget(tabWidget_2);

        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lstDialoguesType = new QListWidget(tab_2);
        new QListWidgetItem(lstDialoguesType);
        new QListWidgetItem(lstDialoguesType);
        new QListWidgetItem(lstDialoguesType);
        new QListWidgetItem(lstDialoguesType);
        new QListWidgetItem(lstDialoguesType);
        lstDialoguesType->setObjectName(QStringLiteral("lstDialoguesType"));
        lstDialoguesType->setGeometry(QRect(1, 4, 136, 566));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lstDialoguesType->sizePolicy().hasHeightForWidth());
        lstDialoguesType->setSizePolicy(sizePolicy5);
        lstDialoguesType->setMaximumSize(QSize(136, 581));
        lstDialoguesType->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstDialoguesType->setResizeMode(QListView::Adjust);
        lstDialoguesType->setViewMode(QListView::ListMode);
        lstDialoguesType->setBatchSize(200);
        stackedWidgetDialogueTree = new QStackedWidget(tab_2);
        stackedWidgetDialogueTree->setObjectName(QStringLiteral("stackedWidgetDialogueTree"));
        stackedWidgetDialogueTree->setGeometry(QRect(143, 1, 397, 574));
        sizePolicy5.setHeightForWidth(stackedWidgetDialogueTree->sizePolicy().hasHeightForWidth());
        stackedWidgetDialogueTree->setSizePolicy(sizePolicy5);
        stackedWidgetDialogueTreePage1 = new QWidget();
        stackedWidgetDialogueTreePage1->setObjectName(QStringLiteral("stackedWidgetDialogueTreePage1"));
        tvDialoguesTree = new QTreeWidget(stackedWidgetDialogueTreePage1);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(tvDialoguesTree);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem7);
        tvDialoguesTree->setObjectName(QStringLiteral("tvDialoguesTree"));
        tvDialoguesTree->setGeometry(QRect(0, 5, 396, 566));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tvDialoguesTree->sizePolicy().hasHeightForWidth());
        tvDialoguesTree->setSizePolicy(sizePolicy6);
        tvDialoguesTree->setContextMenuPolicy(Qt::CustomContextMenu);
        tvDialoguesTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvDialoguesTree->setAlternatingRowColors(false);
        tvDialoguesTree->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvDialoguesTree->setTextElideMode(Qt::ElideLeft);
        tvDialoguesTree->setRootIsDecorated(true);
        tvDialoguesTree->setAnimated(true);
        stackedWidgetDialogueTree->addWidget(stackedWidgetDialogueTreePage1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        listWidget_2 = new QListWidget(page_3);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 5, 396, 566));
        stackedWidgetDialogueTree->addWidget(page_3);
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(NPCEditor);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        stackedWidgetDialogueTree->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NPCEditor);
    } // setupUi

    void retranslateUi(QWidget *NPCEditor)
    {
        NPCEditor->setWindowTitle(QApplication::translate("NPCEditor", "NPC\347\274\226\350\276\221\345\231\250", 0));
        QTreeWidgetItem *___qtreewidgetitem = tvNpcList->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("NPCEditor", "NPC", 0));

        const bool __sortingEnabled = tvNpcList->isSortingEnabled();
        tvNpcList->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tvNpcList->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("NPCEditor", "\346\226\260\346\211\213\344\270\226\347\225\214", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("NPCEditor", "1001 - \350\200\201\350\202\211\351\270\241", 0));
        tvNpcList->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("NPCEditor", "\351\207\215\346\226\260\345\212\240\350\275\275", 0));
        btnSave->setText(QApplication::translate("NPCEditor", "\344\277\235\345\255\230", 0));
        label->setText(QApplication::translate("NPCEditor", "ID", 0));
        label_2->setText(QApplication::translate("NPCEditor", "\345\220\215\345\255\227", 0));
        label_3->setText(QApplication::translate("NPCEditor", "\347\247\260\350\260\223", 0));
        label_4->setText(QApplication::translate("NPCEditor", "\345\244\264\345\203\217\346\226\207\344\273\266", 0));
        btnViewAvata->setText(QApplication::translate("NPCEditor", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("NPCEditor", "\345\237\272\346\234\254\346\225\260\346\215\256", 0));
        label_9->setText(QApplication::translate("NPCEditor", "\345\270\270\350\247\204\345\261\236\346\200\247", 0));
        label_5->setText(QApplication::translate("NPCEditor", "\347\255\211\347\272\247", 0));
        label_10->setText(QString());
        chkAttackable->setText(QApplication::translate("NPCEditor", "\345\217\257\345\217\221\350\265\267\346\224\273\345\207\273", 0));
        chkMarriageable->setText(QApplication::translate("NPCEditor", "\346\216\245\345\217\227\346\261\202\345\201\266", 0));
        chkPresentable->setText(QApplication::translate("NPCEditor", "\346\216\245\345\217\227\350\265\240\351\200\201\347\211\251\345\223\201", 0));
        chkFavorable->setText(QApplication::translate("NPCEditor", "\346\234\211\345\245\275\346\204\237\345\272\246\345\261\236\346\200\247", 0));
        chkSurrender->setText(QApplication::translate("NPCEditor", "\346\210\230\346\226\227\346\227\266\345\205\201\350\256\270\346\212\225\351\231\215", 0));
        label_11->setText(QApplication::translate("NPCEditor", "\351\253\230\347\272\247\345\261\236\346\200\247", 0));
        chkMovealbe->setText(QApplication::translate("NPCEditor", "\345\205\201\350\256\270\351\232\217\346\234\272\347\247\273\345\212\250\345\210\260\345\205\266\345\256\203\345\234\272\346\231\257", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_2->headerItem();
        ___qtreewidgetitem3->setText(1, QApplication::translate("NPCEditor", "\347\247\273\345\212\250\346\234\272\347\216\207", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("NPCEditor", "\345\234\272\346\231\257", 0));

        const bool __sortingEnabled1 = treeWidget_2->isSortingEnabled();
        treeWidget_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget_2->topLevelItem(0);
        ___qtreewidgetitem4->setText(1, QApplication::translate("NPCEditor", "100%", 0));
        ___qtreewidgetitem4->setText(0, QApplication::translate("NPCEditor", "\346\265\213\350\257\225\345\234\272\346\231\257", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(1, QApplication::translate("NPCEditor", "30%", 0));
        ___qtreewidgetitem5->setText(0, QApplication::translate("NPCEditor", "\345\234\272\346\231\2571", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem4->child(1);
        ___qtreewidgetitem6->setText(1, QApplication::translate("NPCEditor", "70%", 0));
        ___qtreewidgetitem6->setText(0, QApplication::translate("NPCEditor", "\345\234\272\346\231\2572", 0));
        treeWidget_2->setSortingEnabled(__sortingEnabled1);

        label_6->setText(QApplication::translate("NPCEditor", "\347\247\273\345\212\250\351\242\221\347\216\207", 0));
        label_7->setText(QApplication::translate("NPCEditor", "\346\254\241/\346\257\21712\345\260\217\346\227\266\357\274\210\346\234\215\345\212\241\345\231\250\346\227\266\351\227\264\357\274\211", 0));
        checkBox_7->setText(QApplication::translate("NPCEditor", "\345\221\250\346\234\237\345\206\205\346\255\243\346\200\201\345\210\206\345\270\203\350\247\246\345\217\221", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("NPCEditor", "\347\247\273\345\212\250\345\234\272\346\231\257\346\225\260\346\215\256", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->headerItem();
        ___qtreewidgetitem7->setText(1, QApplication::translate("NPCEditor", "\346\235\203\345\200\274", 0));
        ___qtreewidgetitem7->setText(0, QApplication::translate("NPCEditor", "\345\210\206\347\261\273", 0));

        const bool __sortingEnabled2 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem8->setText(1, QApplication::translate("NPCEditor", "0", 0));
        ___qtreewidgetitem8->setText(0, QApplication::translate("NPCEditor", "\346\255\246\345\231\250", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(1, QApplication::translate("NPCEditor", "0", 0));
        ___qtreewidgetitem9->setText(0, QApplication::translate("NPCEditor", "\347\224\237\345\214\226\346\255\246\345\231\250", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(1, QApplication::translate("NPCEditor", "0", 0));
        ___qtreewidgetitem10->setText(0, QApplication::translate("NPCEditor", "\346\277\200\345\205\211\346\255\246\345\231\250", 0));
        treeWidget->setSortingEnabled(__sortingEnabled2);

        label_8->setText(QApplication::translate("NPCEditor", "\345\275\223NPC\346\213\245\346\234\211\345\245\275\346\204\237\345\272\246\345\261\236\346\200\247\346\227\266\357\274\214\350\257\245\346\225\260\346\215\256\346\211\215\344\274\232\346\234\211\346\225\210\343\200\202", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("NPCEditor", "\347\211\251\345\223\201\345\201\217\345\245\275\346\225\260\346\215\256", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("NPCEditor", "\346\210\230\346\226\227\347\211\214\347\273\204\347\274\226\350\276\221", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("NPCEditor", "\346\231\272\350\203\275\350\241\214\344\270\272", 0));

        const bool __sortingEnabled3 = lstDialoguesType->isSortingEnabled();
        lstDialoguesType->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lstDialoguesType->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("NPCEditor", "[\351\273\230\350\256\244\345\257\271\350\257\235\346\240\221]", 0));
        QListWidgetItem *___qlistwidgetitem1 = lstDialoguesType->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("NPCEditor", "\346\214\221\346\210\230\350\200\205\344\270\215\346\273\241\350\266\263\346\214\221\346\210\230\346\235\241\344\273\266", 0));
        QListWidgetItem *___qlistwidgetitem2 = lstDialoguesType->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("NPCEditor", "\346\214\221\346\210\230\350\200\205\345\217\221\350\265\267\346\214\221\346\210\230\346\227\266", 0));
        QListWidgetItem *___qlistwidgetitem3 = lstDialoguesType->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("NPCEditor", "\346\214\221\346\210\230\350\203\234\345\210\251\347\232\204\345\234\272\345\220\210", 0));
        QListWidgetItem *___qlistwidgetitem4 = lstDialoguesType->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("NPCEditor", "\346\214\221\346\210\230\345\244\261\350\264\245\347\232\204\345\234\272\345\220\210", 0));
        lstDialoguesType->setSortingEnabled(__sortingEnabled3);

        QTreeWidgetItem *___qtreewidgetitem11 = tvDialoguesTree->headerItem();
        ___qtreewidgetitem11->setText(2, QApplication::translate("NPCEditor", "\345\257\271\347\231\275", 0));
        ___qtreewidgetitem11->setText(1, QApplication::translate("NPCEditor", "\350\247\246\345\217\221/\346\230\276\347\244\272\346\235\241\344\273\266", 0));
        ___qtreewidgetitem11->setText(0, QApplication::translate("NPCEditor", "\350\212\202\347\202\271", 0));

        const bool __sortingEnabled4 = tvDialoguesTree->isSortingEnabled();
        tvDialoguesTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem12 = tvDialoguesTree->topLevelItem(0);
        ___qtreewidgetitem12->setText(2, QApplication::translate("NPCEditor", "[\"Toril\345\234\250\351\202\243\345\234\272\346\203\212\345\244\251\345\244\247\346\210\230\344\270\255\347\211\272\347\211\262\344\272\206\350\207\252\345\267\261\343\200\202\350\246\201\346\230\257\344\273\226\345\275\223\345\210\235\346\262\241\345\205\254\345\270\203\346\267\267\346\262\214\344\271\213\351\227\250\347\232\204\347\247\230\345\257\206\357\274\214\344\271\237\344\270\215\344\274\232\350\220\275\345\210\260\350\277\231\346\240\267\347\232\204\344\270\213\345\234\272\343\200\202\347\234\237\346\230\257\344\270\215\344\275\234\346\255\273\345\260\261\344\270\215\344\274\232\346\255\273\345\225\212\342\200\246\342\200\246\"]", 0));
        ___qtreewidgetitem12->setText(1, QApplication::translate("NPCEditor", "[\346\227\240]", 0));
        ___qtreewidgetitem12->setText(0, QApplication::translate("NPCEditor", "[\345\257\271\350\257\235] ", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem12->child(0);
        ___qtreewidgetitem13->setText(2, QApplication::translate("NPCEditor", "\"Toril\347\232\204\345\256\207\345\256\231\346\260\224\344\277\256\347\202\274\345\210\260\344\272\206\344\273\200\344\271\210\346\260\264\345\271\263\357\274\237\"", 0));
        ___qtreewidgetitem13->setText(1, QApplication::translate("NPCEditor", "[\346\227\240]", 0));
        ___qtreewidgetitem13->setText(0, QApplication::translate("NPCEditor", "[@\351\200\211\351\241\271]", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem13->child(0);
        ___qtreewidgetitem14->setText(2, QApplication::translate("NPCEditor", "[\"\346\215\256\350\257\264\345\267\262\347\273\217\345\244\204\344\272\216\345\267\205\345\263\260\346\227\266\346\234\237\344\272\206\357\274\214\346\230\257\346\234\211\345\220\215\347\232\204\345\274\272\350\200\205\344\271\213\344\270\200\343\200\202\", \"\346\234\200\345\217\257\346\200\225\347\232\204\346\230\257\344\273\226\350\203\275\344\270\200\345\277\203\344\272\214\347\224\250\357\274\214\345\234\250\347\247\221\346\212\200\344\270\212\347\232\204\351\200\240\350\257\243\344\271\237\350\276\276\345\210\260\344\272\206\350\256\251\344\272\272\344\273\260\346\234\233\347\232\204\345\242\203\347\225\214\343\200\202\"]", 0));
        ___qtreewidgetitem14->setText(1, QApplication::translate("NPCEditor", "-", 0));
        ___qtreewidgetitem14->setText(0, QApplication::translate("NPCEditor", "[\345\257\271\350\257\235]", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem12->child(1);
        ___qtreewidgetitem15->setText(2, QApplication::translate("NPCEditor", "\"\346\230\257\345\220\246\346\234\211\345\212\236\346\263\225\344\270\216Toril\347\232\204\347\201\265\351\255\202\346\262\237\351\200\232\357\274\237\"", 0));
        ___qtreewidgetitem15->setText(1, QApplication::translate("NPCEditor", "[\"\347\255\211\347\272\247\" > 20]", 0));
        ___qtreewidgetitem15->setText(0, QApplication::translate("NPCEditor", "[@\351\200\211\351\241\271]", 0));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem15->child(0);
        ___qtreewidgetitem16->setText(2, QApplication::translate("NPCEditor", "[\"\345\224\224..\344\274\240\351\227\273\346\230\257\350\277\231\346\240\267\347\232\204\343\200\202\345\275\223\345\256\207\345\256\231\346\260\224\344\277\256\347\202\274\345\210\260\344\270\200\345\256\232\347\250\213\345\272\246\344\271\213\345\220\216\357\274\214\346\255\273\345\220\216\344\276\277\350\203\275\344\277\235\346\214\201\347\201\265\351\255\202\344\270\215\347\201\255\343\200\202\344\273\216\347\247\221\345\255\246\350\247\222\345\272\246\350\247\243\351\207\212\357\274\214\345\205\266\345\256\236\346\230\257\346\204\217\350\257\206\350\203\275\351\207\217\357\274\214\345\215\263\345\217\215\347\211\251\350\264\250\343\200\202\", \"\344\275\206\346\262\237\351\200\232\347\232\204\345\212\236\346\263\225\345\215\264\345\215\201\345\210\206\345\233\260\351\232\276\357\274\214\345\233\240\344\270\272\344\273\226\345\275\223\345\271\264\345\261\236\344\272\216\350\207\252\346\210\221\345\274\225\347\210\206\357\274\214\344\270\215\344\273\205\346\212\212\350\202\211\344\275\223\346\266\210\346\225"
                        "\243\357\274\214\346\204\217\350\257\206\350\203\275\351\207\217\344\271\237\345\217\227\345\210\260\344\272\206\346\236\201\345\244\247\345\275\261\345\223\215\343\200\202\"]", 0));
        ___qtreewidgetitem16->setText(1, QApplication::translate("NPCEditor", "-", 0));
        ___qtreewidgetitem16->setText(0, QApplication::translate("NPCEditor", "[\345\257\271\350\257\235]", 0));
        tvDialoguesTree->setSortingEnabled(__sortingEnabled4);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("NPCEditor", "\345\211\247\346\203\205\345\257\271\347\231\275", 0));
    } // retranslateUi

};

namespace Ui {
    class NPCEditor: public Ui_NPCEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_NPC_EDITOR_H
