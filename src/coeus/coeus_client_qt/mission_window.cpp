#include "mission_window.h"
#include "ui_mission_window.h"

MissionWindow::MissionWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui = new Ui::MissionWindow();
    ui->setupUi(this);
}

MissionWindow::~MissionWindow()
{
    delete ui;
}

