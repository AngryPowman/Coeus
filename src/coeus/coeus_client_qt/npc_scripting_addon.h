#ifndef __NPC_SCRIPTING_ADDON_H__
#define __NPC_SCRIPTING_ADDON_H__

#include "game_common/scripting_addon.h"

class NPCScriptingAddon : public ScriptingAddon
{
public:
    NPCScriptingAddon();
    virtual ~NPCScriptingAddon();

public:
    void register_functions();

public:
    bool onPve();

private:
    static int get_level(lua_State* L);
};


#endif // !__NPC_SCRIPTING_ADDON_H__
