#ifndef __MISSION_DATA_H__
#define __MISSION_DATA_H__

#include <venus_net/common.h>
#include "game_common/mission_define.h"

struct MissionData
{
    uint32 missionId;
    MissionType missionType;
    std::string script;

#if defined (COEUS_CLIENT)
    std::string category;
    std::string title;
    std::string description;
#endif
};

#endif // !__MISSION_DATA_H__
