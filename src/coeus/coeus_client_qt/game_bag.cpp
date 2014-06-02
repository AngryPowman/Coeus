#include "game_bag.h"
#include "ui_game_bag_dialog.h"
#include <QStandardItem>
#include "game_item_delegate.h"

GameBag::GameBag(QWidget *parent)
    : QMainWindow(parent)
{
    _ui = new Ui::GameBag();
    _ui->setupUi(this);

    GameItemModel* itemModel = new GameItemModel(10, 1);
    _ui->tableView->setModel(itemModel);
    _ui->tableView->horizontalHeader()->setVisible(false);
    _ui->tableView->verticalHeader()->setVisible(false);
    _ui->tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    _ui->tableView->horizontalHeader()->setStretchLastSection(true);
    _ui->tableView->setItemDelegateForColumn(GameItemDelegate::ItemGeneral, new GameItemDelegate(parent));
    _ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    _ui->tableView->verticalHeader()->setDefaultSectionSize(GameItemDelegate::DEFAULT_ITEM_SEL_SIZE);
    _ui->tableView->resizeColumnsToContents();

    for (int i = 0; i < 100; i++)
    {
        QStandardItem* item = new QStandardItem();
        itemModel->setItem(i, 0, item);
        QModelIndex index = item->index();

        GameItem itemData;
        itemModel->setData(index, QVariant::fromValue<const GameItem&>(itemData), Qt::DisplayRole);
    }
}

GameBag::~GameBag()
{
    delete _ui;
}
