#include "npc_scripting_addon.h"
#include "game_common/config/npc_config.h"

NPCScriptingAddon::NPCScriptingAddon(const NPCData* npcData)
{
    SAFE_LOAD_SCRIPTING(npcData->script);
}

NPCScriptingAddon::~NPCScriptingAddon()
{

}

void NPCScriptingAddon::register_functions()
{
    z_lua_state& luaState = lua_state();
}

void NPCScriptingAddon::on_start_dialogue()
{

}

bool NPCScriptingAddon::on_pve()
{
    z_lua_state& luaState = lua_state();
    return luaState.call<bool>("on_pve");;
}