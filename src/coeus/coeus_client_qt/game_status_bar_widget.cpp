#include "game_status_bar_widget.h"
#include "ui_game_statusbar_widget.h"

GameStatusBarWidget::GameStatusBarWidget(QWidget *parent)
    : QWidget(parent)
{
    _ui = new Ui::GameStatusBarWidget();
    _ui->setupUi(this);
}

GameStatusBarWidget::~GameStatusBarWidget()
{
    delete _ui;
}
