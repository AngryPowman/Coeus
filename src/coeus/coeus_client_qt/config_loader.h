#ifndef __CONFIG_LOADER_H__
#define __CONFIG_LOADER_H__

#include "game_common/config/config_manager.h"
#include "venus_net/singleton.h"
#include "login_config.h"
#include "character_config.h"
#include "game_common/config/npc_config.h"
#include "game_common/config/belif_config.h"

class ConfigLoader
    : public Venus::Singleton<ConfigLoader>
{
public:
    static void initialize(ConfigManager* manager)
    {
        LoginConfig::getInstance().initialize(manager);
        BeliefConfig::getInstance().initialize(manager);
        CharacterConfig::getInstance().initialize(manager);
        NPCConfig::getInstance().initialize(manager);
    }
};

#endif // __CONFIG_LOADER_H__
