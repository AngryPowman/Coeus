#include "mission_manager.h"
#include "game_common/mission.h"
#include "game_common/mission_factory.h"

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
    return MissionFactory::createMission(missionId);
}