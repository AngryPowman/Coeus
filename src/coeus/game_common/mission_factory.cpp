#include "mission_factory.h"
#include <venus_net/object_pool.h>
#include "game_common/config/mission_config.h"
#include "game_common/mission_data.h"
#include "game_common/dialogue_mission.h"

Venus::ObjectPool<Mission>* MissionFactory::_missionPool = nullptr;
MissionFactory::MissionFactory(uint32_t chunk_size, uint32_t increase_size)
{
    _missionPool = new Venus::ObjectPool<Mission>(chunk_size, increase_size);
}

MissionFactory::~MissionFactory()
{
    delete _missionPool;
}

Mission* MissionFactory::createMission(uint32 missionId)
{
    const MissionData* missionData = MissionConfig::getInstance().getMissionDataById(missionId);
    if (missionData != nullptr)
    {
        switch (missionData->missionType)
        {
        case MissionType::MissionType_NPCDialogue: return _missionPool->acquire(*missionData);
        default:
            break;
        }
        
        return _missionPool->acquire(*missionData);
    }

    return nullptr;
}

DialogueMission* MissionFactory::toDialogueMission(Mission* mission)
{
    return missionCast<DialogueMission>(mission);
}
