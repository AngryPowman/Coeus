#include "widget_manager.h"
#include "game_login.h"
#include "game_setting.h"
#include "game_character_creator.h"
#include "game_main.h"
#include "game_status_bar_widget.h"
#include "game_map_widget.h"
#include "game_chat_widget.h"
#include "game_bag.h"

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

GameStatusBarWidget* WidgetManager::gameStatusBarWidget(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameStatusBarWidget>(_gameStatusBarWidget, parent);
}

GameMapWidget* WidgetManager::gameMapWidget(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameMapWidget>(_gameMapWidget, parent);
}

GameChatWidget* WidgetManager::gameChatWidget(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameChatWidget>(_gameChatWidget, parent);
}

GameBag* WidgetManager::gameBag(QWidget* parent /*= nullptr*/)
{
    return tryInit<GameBag>(_gameBag, parent);
}
