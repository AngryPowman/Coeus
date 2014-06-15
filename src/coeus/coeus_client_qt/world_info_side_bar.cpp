#include "world_info_side_bar.h"
#include "ui_world_info_side_bar.h"

WorldInfoSideBar::WorldInfoSideBar(QWidget *parent)
    : QWidget(parent)
{
    ui = new Ui::WorldInfoSideBar();
    ui->setupUi(this);
}

WorldInfoSideBar::~WorldInfoSideBar()
{
    delete ui;
}

