#include "game_main.h"

GameMain::GameMain(QWidget* parent /*= 0*/)
    : QMainWindow(parent)
{
    _ui.setupUi(this);
    initControl();
}

GameMain::~GameMain()
{

}

void GameMain::initControl()
{
    connect(_ui.actionAbout_QT, SIGNAL(triggered()), this, SLOT(slotOnAboutQT()));
}

void GameMain::slotOnAboutQT()
{
    QMessageBox::aboutQt(this);
}