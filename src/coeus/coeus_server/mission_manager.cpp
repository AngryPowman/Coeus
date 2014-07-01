#include "mission_manager.h"

MissionManager::MissionManager(Player* player)
{

}

MissionManager::~MissionManager()
{

}

bool MissionManager::acceptMission(uint32 missionId)
{
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

