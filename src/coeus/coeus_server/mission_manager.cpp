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

MissionResult MissionManager::acceptMission(uint32 missionId)
{
    auto iter = _missions.find(missionId);
    if (iter != _missions.end())
    {
        return MissionResult::MissionResult_Exists;
    }

    Mission* mission = createMission(missionId);
    if (mission != nullptr)
    {
        

        std::pair<MissionList::iterator, bool> result = _missions.insert(std::make_pair(mission->missionId(), mission));
        if (!result.second)
        {
            return MissionResult::MissionResult_Failed;
        }
    }

    return MissionResult::MissionResult_Failed;
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
        Mission* mission = nullptr;
        switch (missionData->missionType)
        {
        case MissionType::MissionType_NPCDialogue:
            mission = new DialogueMission(*missionData);
        default:
            break;
        }

        return mission;
    }

    return nullptr;
}

void MissionManager::destroyMission(Mission* mission)
{

}
