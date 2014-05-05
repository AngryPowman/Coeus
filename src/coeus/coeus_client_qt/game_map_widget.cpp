#include "game_map_widget.h"
#include "ui_game_map_widget.h"

GameMapWidget::GameMapWidget(QWidget *parent)
    : QWidget(parent)
{
    _ui = new Ui::GameMapWidget();
    _ui->setupUi(this);
}

GameMapWidget::~GameMapWidget()
{
    delete _ui;
}

