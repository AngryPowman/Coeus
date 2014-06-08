#include "game_bag.h"
#include "ui_game_bag_dialog.h"
#include "game_item_table_view.h"
#include "game_common/config/item_config.h"
#include "game_common/game_item.h"

GameBag::GameBag(QWidget *parent)
    : QMainWindow(parent)
{
    _ui = new Ui::GameBag();
    _ui->setupUi(this);

    _gameItemTableView = new GameItemTableView(this);
    _ui->horizontalLayout_4->addWidget(_gameItemTableView->rawView());

 	for (int i = 0; i < 100; i++)
 	{
        int id = (i >= 6 ? 0 : i);
 		const ItemData* itemData = ItemConfig::getInstance().itemDataById(10000 + id);
 		GameItem* item = new GameItem(itemData);
        _gameItemTableView->addItem(*item);
 	}
}

GameBag::~GameBag()
{
    delete _ui;
}