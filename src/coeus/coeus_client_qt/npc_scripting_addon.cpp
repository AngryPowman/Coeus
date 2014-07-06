#include "npc_scripting_addon.h"

NPCScriptingAddon::NPCScriptingAddon()
{
    SAFE_LOAD_SCRIPTING("scripts/npc/c_npc_10000.lua");
}

NPCScriptingAddon::~NPCScriptingAddon()
{

}

void NPCScriptingAddon::register_functions()
{
    z_lua_state& luaState = lua_state();
    //luaState.reg_function("get_level", get_level);
}

bool NPCScriptingAddon::on_pve()
{
    z_lua_state& luaState = lua_state();
    return luaState.call<bool>("on_pve");;
}