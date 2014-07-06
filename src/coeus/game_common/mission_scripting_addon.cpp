#include "mission_scripting_addon.h"
#include "game_common/mission_data.h"

MissionScriptingAddon::MissionScriptingAddon(const MissionData* missionData)
{
    SAFE_LOAD_SCRIPTING(missionData->script);
}

MissionScriptingAddon::~MissionScriptingAddon()
{

}

void MissionScriptingAddon::register_functions()
{
    z_lua_state& luaState = lua_state();
}

bool MissionScriptingAddon::on_check_conditions()
{
    return lua_state().call<bool>("on_check_conditions");
}

void MissionScriptingAddon::on_accepted_mission()
{
    lua_state().call<bool>("on_accepted_mission");
}

void MissionScriptingAddon::on_finished_mission()
{
    lua_state().call<bool>("on_finished_mission");
}
