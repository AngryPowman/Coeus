#include "game_bag.h"
#include "ui_game_bag_dialog.h"

GameBag::GameBag(QWidget *parent)
    : QMainWindow(parent)
{
    _ui = new Ui::GameBag();
    _ui->setupUi(this);
}

GameBag::~GameBag()
{
    delete _ui;
}
