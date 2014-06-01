#include "game_bag.h"
#include "ui_game_bag_dialog.h"
#include <QStandardItem>
#include "game_item_delegate.h"

GameBag::GameBag(QWidget *parent)
    : QMainWindow(parent)
{
    _ui = new Ui::GameBag();
    _ui->setupUi(this);

    Qt::WindowFlags flags = 0/*this->windowFlags()*/;
    //flags |= Qt::MSWindowsFixedSizeDialogHint;
    //flags |= Qt::WindowStaysOnTopHint;
    //flags &= ~Qt::WindowMinimizeButtonHint;
    //this->setWindowFlags(flags);

    //QStandardItem* standardItem = new QStandardItem();
    GameItemModel* itemModel = new GameItemModel(1, 1);
    _ui->tableView->setModel(itemModel);

    QStringList headerList;
    headerList << "No." << "ID" << "Name" << "Age" << "Sex" << "Show";
    //_ui->tableView->setHorizontalHeaderLabels(headerList);
    _ui->tableView->verticalHeader()->setVisible(false);
    _ui->tableView->horizontalHeader()->setStretchLastSection(true);

    _ui->tableView->setItemDelegateForColumn(GameItemDelegate::ItemGeneral, new GameItemDelegate(parent));
    QTreeWidgetItem* item = new QTreeWidgetItem();
    item->setText(0, "aaaaaa");

    for (int i = 0; i < 10; i++)
    {
        QModelIndex index = itemModel->index(i, 0, QModelIndex());
        itemModel->setData(index, i);
    }

    _ui->tableView->resizeColumnsToContents();
    _ui->tableView->verticalHeader()->setDefaultSectionSize(GameItemDelegate::DEFAULT_ITEM_SEL_SIZE);
}

GameBag::~GameBag()
{
    delete _ui;
}
