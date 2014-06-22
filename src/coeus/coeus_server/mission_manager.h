#ifndef __MISSION_MANAGER_H__
#define __MISSION_MANAGER_H__

#include <venus_net/common.h>

class Player;
class Mission;
class MissionManager
{
public:
    MissionManager(Player* player);
    virtual ~MissionManager();

public:
    bool acceptMission(uint32 missionId);

private:
    adap_map<uint32, Mission*> _missions;
};

#endif // !__MISSION_MANAGER_H__
