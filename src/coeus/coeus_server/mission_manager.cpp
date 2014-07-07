#include "mission_manager.h"
#include "game_common/mission.h"
#include "game_common/config/mission_config.h"
#include "game_common/dialogue_mission.h"
#include "game_common/mission_scripting_addon.h"
#include "game_common/mission_data.h"

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

    Mission::Ptr mission(this->createMission(missionId));
    if (mission != nullptr)
    {
        const MissionData* missionData = MissionConfig::getInstance().getMissionDataById(missionId);
        if (missionData != nullptr)
        {
            // Scripting Addon : Check accept conditions
            MissionScriptingAddon missionScriptingAddon(missionData);
            if (missionScriptingAddon.on_check_conditions() == false)
            {
                return MissionResult::MissionResult_BadCondition;
            }

            std::pair<MissionTable::iterator, bool> result = _missions.insert(std::make_pair(mission->missionId(), mission));
            if (result.second)
            {
                // Scripting Addon : Accepted mission
                missionScriptingAddon.on_accepted_mission();

                return MissionResult::MissionResult_Ok;
            }
        }
    }

    return MissionResult::MissionResult_Failed;
}

const MissionTable& MissionManager::missionTable() const
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
