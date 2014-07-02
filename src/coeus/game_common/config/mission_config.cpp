#include "mission_config.h"
#include "game_common/path_definition.h"
#include <venus_net/logger.h>
#include "mission_data.h"

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
        MissionData mission;
        mission.missionId = value["id"].asUInt();
        mission.missionType = static_cast<MissionType>(value["type"].asUInt());

#if defined (COEUS_CLIENT)
        mission.category = value["category"].asString();
        mission.title = value["title"].asString();
        mission.description = value["description"].asString();
#endif

        _missions[mission.missionId] = mission;
    }
    else
    {
        error_log("null mission config value");
        return false;
    }

    return true;
}

const MissionData* MissionConfig::getMissionDataById(uint32 missionId) const
{
    auto iter = _missions.find(missionId);
    if (iter != _missions.end())
    {
        return &iter->second;
    }

    return nullptr;
}
