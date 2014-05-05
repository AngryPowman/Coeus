#include "game_chat_widget.h"
#include "ui_game_chat_widget.h"

GameChatWidget::GameChatWidget(QWidget* parent)
    : QWidget(parent)
{
    _ui = new Ui::GameChatWidget();
    _ui->setupUi(this);
}

GameChatWidget::~GameChatWidget()
{
    delete _ui;
}
