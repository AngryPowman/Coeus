#ifndef __DIALOGUE_MISSION_H__
#define __DIALOGUE_MISSION_H__

#include "mission.h"
#include <set>

class DialogueMission : public Mission
{
public:
    struct DialogueNPC
    {
        uint32 id;
        bool finished;

        DialogueNPC(uint32 npcid, bool isFinished = false)
            : id(npcid), finished(isFinished)
        {
        }
    };

    typedef std::vector<DialogueNPC> NPCSet_t;

public:
    explicit DialogueMission(const MissionData& missionData);
    explicit DialogueMission(const MissionData& missionData, uint32 srcNPC, uint32 destNPC);
    explicit DialogueMission(const MissionData& missionData, uint32 srcNPC, const NPCSet_t& destNPCList);

public:
    void setSourceNPCId(uint32 srcNPC);
    uint32 getSourceNPCId() const;

    void setDestNPCIdSet(const NPCSet_t& destNPCList);
    const NPCSet_t& getDestNPCIdSet() const;

    void addDestNPCId(uint32 destNPCId);
    void clearDestNPCList();
    void setFinishedDestNPC(uint32 destNPCId);

public:
    bool isFinished();

private:
    uint32 _sourceNPCId;
    NPCSet_t _destNPCList;
};

#endif // !__DIALOGUE_MISSION_H__
