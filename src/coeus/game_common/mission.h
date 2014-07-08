#ifndef __MISSION_H__
#define __MISSION_H__

#include <venus_net/common.h>
#include <memory>
#include "mission_define.h"

struct MissionData;
class MissioArgs;
class Mission
{
public:
    typedef std::shared_ptr<Mission> Ptr;
    typedef std::vector<int32> MissionArgs;

public:
    Mission(const MissionData& missionData, std::size_t args_size = 0);
    virtual ~Mission();

public:
    uint32 missionId();
    const MissionType& missionType() const;

#if defined (COEUS_CLIENT)
    const std::string& category();
    const std::string& title();
    const std::string& description();
#endif

    void missionState(const MissionState& missionState);
    const MissionState& missionState() const;

    virtual bool isFinished() { return false; }

private:
    MissionState _missionState;
    const MissionData& _missionData;
    MissionArgs* _missionArgs;
};

#endif // !__MISSION_H__
