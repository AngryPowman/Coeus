#ifndef __DIALOGUE_MISSION_H__
#define __DIALOGUE_MISSION_H__

#include "mission.h"

class DialogueMission : public Mission
{
public:
    explicit DialogueMission(const MissionData& missionData);
    explicit DialogueMission(const MissionData& missionData, uint32 srcNPC, uint32 destNPC);
    explicit DialogueMission(const MissionData& missionData, uint32 srcNPC, const NPCSet_t& destNPCSet);

public:
    void setSourceNPCId(uint32 srcNPC);
    uint32 getSourceNPCId() const;
    void setDestNPCIdSet(const NPCSet_t& destNPCSet);
    const NPCSet_t& getDestNPCIdSet() const;
    void addDestNPCId(uint32 destNPCId);
    void clearDestNPCList();

private:
    uint32 _sourceNPCId;
    NPCSet_t _destNPCSet;
};

#endif // !__DIALOGUE_MISSION_H__
