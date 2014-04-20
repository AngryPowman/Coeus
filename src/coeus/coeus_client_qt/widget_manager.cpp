#include "widget_manager.h"
#include "game_login.h"
#include "game_setting.h"
#include "game_character_creator.h"
#include "game_main.h"

GameLogin* WidgetManager::gameLogin(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameLogin>(_gameLogin, parent);
}

GameSetting* WidgetManager::gameSetting(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameSetting>(_gameSetting, parent);
}

GameCharacterCreator* WidgetManager::gameCharacterCreator(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameCharacterCreator>(_gameCharacterCreator, parent);
}

GameMain* WidgetManager::gameMain(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameMain>(_gameMain, parent);
}