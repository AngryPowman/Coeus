#include <QtWidgets>
#include "game_setting.h"

GameSetting::GameSetting(QWidget* parent)
    : QMainWindow(parent)
{
    settingDialog.setupUi(this);
    initControl();
}

GameSetting::~GameSetting()
{

}

void GameSetting::initControl()
{

}