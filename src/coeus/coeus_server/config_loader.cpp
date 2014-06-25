#include "config_loader.h"
#include "server_config.h"
#include "game_common/config/config_manager.h"
#include "game_common/config/mission_config.h"

void ConfigLoader::initialize(ConfigManager* manager)
{
	ServerConfig::getInstance().initialize(manager);
    MissionConfig::getInstance().initialize(manager);
}
