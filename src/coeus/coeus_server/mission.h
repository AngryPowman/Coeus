#ifndef __MISSION_H__
#define __MISSION_H__

#include <venus_net/common.h>
#include "game_common/mission_define.h"

class Mission
{
public:
    Mission();
    virtual ~Mission();

public:
    uint32 missionId();
    const MissionType& missionType() const;
    const MissionState& missionState() const;
};

#endif // !__MISSION_H__
