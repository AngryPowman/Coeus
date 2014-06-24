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

const MissionList& MissionManager::missionList()
{
    return _missions;
}

