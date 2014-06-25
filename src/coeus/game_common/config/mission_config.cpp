#include "mission_config.h"
#include "game_common/path_definition.h"

MissionConfig::MissionConfig()
{

}

MissionConfig::~MissionConfig()
{

}

bool MissionConfig::parse()
{
    Json::Value value;
    READ_CONFIG(ConfigFile::MissionMajorConfig, value);

    if (value != Json::nullValue)
    {
        Mission mission;
        mission.missionId(value["id"].asUInt());
        mission.missionType(static_cast<MissionType>(value["type"].asUInt()));

#if defined (COEUS_CLIENT)
        mission.category(value["category"].asString());
        mission.title(value["title"].asString());
        mission.description(value["description"].asString());
#endif

        _missions[mission.missionId()] = mission;
    }

    return true;
}
