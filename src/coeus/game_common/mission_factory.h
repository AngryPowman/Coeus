#ifndef __MISSION_FACTORY_H__
#define __MISSION_FACTORY_H__

#include "game_common/mission.h"

namespace Venus { template<typename T> class ObjectPool; }

class DialogueMission;
class MissionFactory
{
public:
    explicit MissionFactory(uint32_t chunk_size, uint32_t increase_size);
    virtual ~MissionFactory();

    static Mission* createMission(uint32 missionId);
    static DialogueMission* toDialogueMission(Mission* mission);

private:
    template <typename T> static T* missionCast(Mission* mission);
    static Venus::ObjectPool<Mission>* _missionPool;
};

template <typename T>
T* MissionFactory::missionCast(Mission* mission)
{
    return dynamic_cast<T*>(mission);
}

#endif // !__MISSION_FACTORY_H__
