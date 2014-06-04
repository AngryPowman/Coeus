#include "game_bag.h"
#include "ui_game_bag_dialog.h"
#include <QStandardItem>
#include "game_item_delegate.h"
#include "item_index_widget.h"

GameBag::GameBag(QWidget *parent)
    : QMainWindow(parent)
{
    _ui = new Ui::GameBag();
    _ui->setupUi(this);

    _itemModel = new GameItemModel(0, 1, this);
    _ui->tableView->setModel(_itemModel);
    _ui->tableView->horizontalHeader()->setVisible(false);
    _ui->tableView->verticalHeader()->setVisible(false);
    _ui->tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    _ui->tableView->horizontalHeader()->setStretchLastSection(true);
    //_ui->tableView->setItemDelegateForColumn(GameItemDelegate::ItemGeneral, new GameItemDelegate(parent));
    _ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    _ui->tableView->verticalHeader()->setDefaultSectionSize(GameItemDelegate::DEFAULT_ITEM_SEL_SIZE);
    _ui->tableView->resizeColumnsToContents();
    _ui->tableView->setStyleSheet("selection-background-color: rgba(9, 160, 229, 50)");

    for (int i = 0; i < 10; i++)
    {
        GameItem item;
        this->addItem(item);
    }
}

GameBag::~GameBag()
{
    delete _ui;
}

void GameBag::addItem(const GameItem& gameItem)
{
    QStandardItem* standardItem = new QStandardItem();
    standardItem->setData(QVariant::fromValue<const GameItem&>(gameItem), Qt::DisplayRole);
    _itemModel->insertRow(_itemModel->rowCount(), standardItem);

    //test
    ItemIndexWidget* itemIndexWidget = new ItemIndexWidget(gameItem);
    itemIndexWidget->initGraph();

    _ui->tableView->setColumnWidth(standardItem->index().column(), 15000);
    _ui->tableView->setIndexWidget(standardItem->index(), itemIndexWidget);
}
