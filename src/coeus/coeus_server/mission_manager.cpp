#include "mission_manager.h"
#include "game_common/mission.h"
#include "game_common/config/mission_config.h"
#include "game_common/mission_data.h"
#include "game_common/dialogue_mission.h"
MissionManager::MissionManager(Player* player)
{

}

MissionManager::~MissionManager()
{

}

bool MissionManager::acceptMission(uint32 missionId)
{
    auto iter = _missions.find(missionId);
    if (iter != _missions.end())
    {
        return false;
    }

    return true;
}

const MissionList& MissionManager::missionList() const
{
    return _missions;
}

std::size_t MissionManager::missionCount()
{
    return _missions.size();
}

Mission* MissionManager::createMission(uint32 missionId)
{
    const MissionData* missionData = MissionConfig::getInstance().getMissionDataById(missionId);
    if (missionData != nullptr)
    {
        switch (missionData->missionType)
        {
        case MissionType::MissionType_NPCDialogue:
            return new DialogueMission(*missionData);
        default:
            break;
        }
        
        return new Mission(*missionData);
    }

    return nullptr;
}