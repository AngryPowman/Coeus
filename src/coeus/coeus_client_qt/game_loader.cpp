#include "game_loader.h"
#include "ui_game_loader.h"

GameLoader::GameLoader(QWidget *parent)
    : QWidget(parent)
{
    ui = new Ui::GameLoader();
    ui->setupUi(this);
}

GameLoader::~GameLoader()
{
    delete ui;
}

