#ifndef __PATH_DEFINITION_H__
#define __PATH_DEFINITION_H__

#include <string>

const static std::string ServerConfigRoot = "./config/";
const static std::string GlobalConfigRoot = "./config/";
const static std::string ClientConfigRoot = "./config/";


#define CFG_PATH(NAME, PATH) \
    const static std::string NAME = PATH

namespace ConfigFile
{
    // global

    // for server
    CFG_PATH(ServerConfig, "./config/server_config.json");

    // for client
    CFG_PATH(LoginConfigPath, "./user.dat");
    CFG_PATH(BelifConfigPath, "./config/belief_config.json");
};

#endif