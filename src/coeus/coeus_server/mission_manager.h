#ifndef __MISSION_MANAGER_H__
#define __MISSION_MANAGER_H__

#include <venus_net/common.h>
#include "game_common/mission_define.h"
#include "game_common/mission.h"

class Player;
typedef adap_map<uint32, Mission::Ptr> MissionList;
class MissionManager
{
public:
    MissionManager(Player* player);
    virtual ~MissionManager();

public:
    MissionResult acceptMission(uint32 missionId);
    const MissionList& missionList() const;
    std::size_t missionCount();

public:
    Mission* createMission(uint32 missionId);
    void destroyMission(Mission* mission);

private:
    MissionList _missions;
};

#endif // !__MISSION_MANAGER_H__
