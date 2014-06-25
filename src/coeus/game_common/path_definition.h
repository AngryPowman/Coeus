#ifndef __PATH_DEFINITION_H__
#define __PATH_DEFINITION_H__

#include <string>

const static std::string ServerConfigRoot = "./config/";
const static std::string GlobalConfigRoot = "./config/";
const static std::string ClientConfigRoot = "./config/";


#define PATH(NAME, PATH) \
    const static std::string NAME = PATH

namespace GameDirecotry
{
    PATH(Shared, "../");
    PATH(ItemDirectory, "./images/items/");
    PATH(ScriptDirectory, "../scripts/");
};

namespace ConfigFile
{
    // global
    PATH(ItemConfig, "../config/items.json");
    PATH(MissionMajorConfig, "../config/mission_major.json");

    // for server
    PATH(ServerConfig, "./config/server_config.json");

    // for client
    PATH(LoginConfigPath, "./user.dat");
    PATH(BelifConfigPath, "./config/belief.json");
    PATH(CharacterConfigPath, "./config/character.json");
    PATH(NPCConfigPath, "./config/npc.json");
};

#endif