#include "config_loader.h"
#include "game_common/config/config_manager.h"
#include "server_config.h"

void ConfigLoader::initialize(ConfigManager* manager)
{
	//��ʼ�����������ļ�
	ServerConfig::getInstance().initialize(manager);
}
