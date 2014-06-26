#include "dialogue_mission.h"

DialogueMission::DialogueMission(const MissionData& missionData)
    : Mission(missionData)
{
}

DialogueMission::DialogueMission(const MissionData& missionData, uint32 srcNPC, uint32 destNPC)
: Mission(missionData), _sourceNPCId(srcNPC)
{
    _destNPCSet.insert(destNPC);
}

DialogueMission::DialogueMission(const MissionData& missionData, uint32 srcNPC, const NPCSet_t& destNPCSet)
    : Mission(missionData), _sourceNPCId(srcNPC), _destNPCSet(destNPCSet)
{
}

void DialogueMission::setSourceNPCId(uint32 srcNPC)
{
    _sourceNPCId = srcNPC;
}

uint32 DialogueMission::getSourceNPCId() const
{
    return _sourceNPCId;
}

void DialogueMission::setDestNPCIdSet(const NPCSet_t& destNPCSet)
{
    _destNPCSet = destNPCSet;
}

const NPCSet_t& DialogueMission::getDestNPCIdSet() const
{
    return _destNPCSet;
}

void DialogueMission::addDestNPCId(uint32 destNPCId)
{
    NPCSet_t::const_iterator iter = _destNPCSet.find(destNPCId);
    if (iter != _destNPCSet.end())
    {
        _destNPCSet.insert(destNPCId);
    }
}

void DialogueMission::clearDestNPCList()
{
    _destNPCSet.clear();
}
