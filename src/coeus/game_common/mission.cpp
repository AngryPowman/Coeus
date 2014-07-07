#include "mission.h"
#include "mission_data.h"
#include "mission_args.h"

Mission::Mission(const MissionData& missionData, std::size_t args_size/* = 0*/)
    : _missionData(missionData), _missionState(MissionState::MissionState_None), _missionArgs(nullptr)
{
    if (args_size <= 128)
    {
        _missionArgs = new MissionArgs(0);
    }
}

Mission::~Mission()
{
    SAFE_DELETE(_missionArgs);
}

uint32 Mission::missionId()
{
    return _missionData.missionId;
}

const MissionType& Mission::missionType() const
{
    return _missionData.missionType;
}

#if defined (COEUS_CLIENT)
const std::string& Mission::category()
{
    return _missionData.category;
}

const std::string& Mission::title()
{
    return _missionData.title;
}

const std::string& Mission::description()
{
    return _missionData.description;
}
#endif

void Mission::missionState(const MissionState& missionState)
{
    _missionState = missionState;
}

const MissionState& Mission::missionState() const
{
    return _missionState;
}