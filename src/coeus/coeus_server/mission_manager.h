#ifndef __MISSION_MANAGER_H__
#define __MISSION_MANAGER_H__

#include <venus_net/common.h>

class Player;
class Mission;
typedef adap_map<uint32, Mission*> MissionList;
class MissionManager
{
public:
    MissionManager(Player* player);
    virtual ~MissionManager();

public:
    bool acceptMission(uint32 missionId);
    const MissionList& missionList() const;
    std::size_t missionCount();

public:
    static Mission* createMission(uint32 missionId);

private:
    MissionList _missions;
};

#endif // !__MISSION_MANAGER_H__
