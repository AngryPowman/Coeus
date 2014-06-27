#include "dialogue_mission.h"

DialogueMission::DialogueMission(const MissionData& missionData)
    : Mission(missionData)
{
}

DialogueMission::DialogueMission(const MissionData& missionData, uint32 srcNPC, uint32 destNPC)
: Mission(missionData), _sourceNPCId(srcNPC)
{
    addDestNPCId(destNPC);
}

DialogueMission::DialogueMission(const MissionData& missionData, uint32 srcNPC, const NPCSet_t& destNPCList)
    : Mission(missionData), _sourceNPCId(srcNPC), _destNPCList(destNPCList)
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

void DialogueMission::setDestNPCIdSet(const NPCSet_t& destNPCList)
{
    _destNPCList = destNPCList;
}

const DialogueMission::NPCSet_t& DialogueMission::getDestNPCIdSet() const
{
    return _destNPCList;
}

void DialogueMission::addDestNPCId(uint32 destNPCId)
{
    _destNPCList.push_back(DialogueNPC(destNPCId));
}

void DialogueMission::clearDestNPCList()
{
    _destNPCList.clear();
}

void DialogueMission::setFinishedDestNPC(uint32 destNPCId)
{
    for (DialogueNPC& npc : _destNPCList)
    {
        if (npc.id == destNPCId)
        {
            npc.finished = true;
        }
    }
}

bool DialogueMission::isFinished()
{
    for (const DialogueNPC& npc : _destNPCList)
    {
        if (!npc.finished)
        {
            return false;
        }
    }

    return true;
}
