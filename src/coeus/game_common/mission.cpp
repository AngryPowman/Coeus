#include "mission.h"

Mission::Mission()
    :_missionState(MissionState::MissionState_None)
{

}

Mission::~Mission()
{

}

void Mission::missionId(uint32 missionId)
{
    _missionId = missionId;
}

uint32 Mission::missionId()
{
    return _missionId;
}

void Mission::missionType(const MissionType& missionType)
{
    _missionType = missionType;
}

const MissionType& Mission::missionType() const
{
    return _missionType;
}

void Mission::missionState(const MissionState& missionState)
{
    _missionState = missionState;
}

const MissionState& Mission::missionState() const
{
    return _missionState;
}

#if defined (COEUS_CLIENT)

void Mission::category(const std::string& category)
{
    _category = category;
}

const std::string& Mission::category()
{
    return _category;
}

void Mission::title(const std::string& title)
{
    _title = title;
}

const std::string& Mission::title()
{
    return _title;
}

void Mission::description(const std::string& description)
{
    _description = description;
}

const std::string& Mission::description()
{
    return _description;
}

#endif