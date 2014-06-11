#ifndef __NPC_H__
#define __NPC_H__

#include "game_common/config/npc_config.h"

class NPC
{
public:
    NPC(const NPCData& npcData);
    virtual ~NPC();

public:
    inline const NPCData& data() const
    {
        return _npcData;
    }

    inline const NPCData::AIData& ai() const
    {
        return _npcData.ai;
    }

    inline const NPCData::DialoguesData& dialogues() const
    {
        return _npcData.dialogues;
    }

    inline uint32 favor() const
    {
        return _favor;
    }

    inline void setFavor(uint32 value)
    { 
        _favor = value; 
    }

private:
    const NPCData& _npcData;
    uint32 _favor;

};

#endif // !__NPC_H__
