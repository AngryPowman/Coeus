#ifndef __WIDGET_MANAGER_H__
#define __WIDGET_MANAGER_H__

#include "venus_net/singleton.h"
#include <QWidget>
#include "widget_manager.h"
#include "game_login.h"
#include "game_setting.h"
#include "character_creator.h"
#include "game_main.h"
#include "game_status_bar_widget.h"
#include "game_map_widget.h"
#include "game_chat_widget.h"
#include "game_bag.h"
#include "character_creator_baseinfo_page.h"
#include "character_creator_introdution_page.h"
#include "character_creator_characteristic_page.h"
#include "character_creator_career_belief_page.h"
#include "character_creator_epic_page.h"
#include "character_creator_summary_page.h"

#define DEFINE_WIDGET(type, name)             \
    private: type* _##name;                   \
    public:                                   \
    type* name(QWidget* parent = nullptr) \
    {                                     \
        static bool is_init = false;  \
        if (!is_init)                 \
        {\
            _##name = new type(parent);   \
            is_init = true;               \
        }\
        return (_##name);                 \
     }

class WidgetManager : public Venus::Singleton<WidgetManager>
{
public:
    WidgetManager()
    {
    }

    virtual ~WidgetManager()
    {
    }

public:
    DEFINE_WIDGET(GameLogin, gameLogin);
    DEFINE_WIDGET(GameSetting, gameSetting);
    DEFINE_WIDGET(CharacterCreator, characterCreator);
    DEFINE_WIDGET(GameMain, gameMain);
    DEFINE_WIDGET(GameStatusBarWidget, gameStatusBarWidget);
    DEFINE_WIDGET(GameMapWidget, gameMapWidget);
    DEFINE_WIDGET(GameChatWidget, gameChatWidget);
    DEFINE_WIDGET(GameBag, gameBag);
    DEFINE_WIDGET(CharacterCreator_IntrodutionPage, characterCreator_IntrodutionPage);
    DEFINE_WIDGET(CharacterCreator_BaseInfoPage, characterCreator_BaseInfoPage);
    DEFINE_WIDGET(CharacterCreator_CharacteristicPage, characterCreator_CharacteristicPage);
    DEFINE_WIDGET(CharacterCreator_EpicPage, characterCreator_EpicPage);
    DEFINE_WIDGET(CharacterCreator_CareerBeliefPage, characterCreator_CareerBeliefPage);
    DEFINE_WIDGET(CharacterCreator_SummaryPage, characterCreator_SummaryPage);

};


#endif // !__WIDGET_MANAGER_H__
