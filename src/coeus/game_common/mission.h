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
    void missionId(uint32 missionId);
    uint32 missionId();
    void missionType(const MissionType& missionType);
    const MissionType& missionType() const;
    void missionState(const MissionState& missionState);
    const MissionState& missionState() const;

#if defined (COEUS_CLIENT)
    void category(const std::string& category);
    const std::string& category();

    void title(const std::string& title);
    const std::string& title();

    void description(const std::string& description);
    const std::string& description();
#endif

private:
    uint32 _missionId;
    MissionType _missionType;
    MissionState _missionState;
    std::string _category;
    std::string _title;
    std::string _description;
};

#endif // !__MISSION_H__
