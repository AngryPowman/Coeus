#include "game_item_table_view.h"
#include "game_item_model.h"
#include "game_item_delegate.h"
#include "game_item_index_widget.h"
#include "game_common/game_item.h"
#include <QStandardItem>
#include <QHeaderView>

GameItemTableView::GameItemTableView(QWidget* parent /*= nullptr*/)
    : QTableView(parent), _modelIndex(nullptr)
{
    _itemModel = new GameItemModel(0, 1, this);

    this->setModel(_itemModel);
    this->horizontalHeader()->setVisible(false);
    this->verticalHeader()->setVisible(false);
    this->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    this->horizontalHeader()->setStretchLastSection(true);
    this->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->verticalHeader()->setDefaultSectionSize(DEFAULT_ITEM_ROW_HEIGHT);
    this->resizeRowsToContents();
    this->setStyleSheet("selection-background-color: rgba(9, 160, 229, 50)");

    this->connect(this, SIGNAL(pressed(const QModelIndex&)), this, SLOT(onItemPressed(const QModelIndex&)));
}

GameItemTableView::~GameItemTableView()
{

}

void GameItemTableView::addItem(const GameItem& gameItem)
{
    QStandardItem* standardItem = new QStandardItem;
    //standardItem->setData(QVariant::fromValue<const GameItem&>(gameItem), Qt::DisplayRole);
    _itemModel->insertRow(_itemModel->rowCount(), standardItem);
    this->setRowHeight(standardItem->index().row(), DEFAULT_ITEM_ROW_HEIGHT);

    ItemIndexWidget* itemIndexWidget = new ItemIndexWidget(gameItem);
    itemIndexWidget->initGraph();

    this->setIndexWidget(standardItem->index(), itemIndexWidget);
}

QTableView* GameItemTableView::rawView()
{
    return dynamic_cast<QTableView*>(this);
}

void GameItemTableView::selectionChanged(const QItemSelection& selected, const QItemSelection& deselected)
{
}

void GameItemTableView::onItemPressed(const QModelIndex& index)
{
    this->setUpdatesEnabled(false);
    if (_modelIndex != nullptr)
    {
        this->setRowHeight(_modelIndex->row(), DEFAULT_ITEM_ROW_HEIGHT);
    }
    this->setRowHeight(index.row(), 150);
    this->setUpdatesEnabled(true);

    // Save current model index
    _modelIndex = const_cast<const QModelIndex*>(&index);
}
