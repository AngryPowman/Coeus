#ifndef __NPC_SCRIPTING_ADDON_H__
#define __NPC_SCRIPTING_ADDON_H__

#include "game_common/scripting_addon.h"

struct NPCData;
class NPCScriptingAddon : public ScriptingAddon
{
public:
    NPCScriptingAddon(const NPCData* npcData);
    virtual ~NPCScriptingAddon();

public:
    void register_functions();

public:
    void on_start_dialogue();
    bool on_pve();
};


#endif // !__NPC_SCRIPTING_ADDON_H__
