#include "login_scripting_addon.h"

LoginScriptingAddon::LoginScriptingAddon()
{
    LuaEngine::initialize("scripts/s_login_scripting.lua");
}

LoginScriptingAddon::~LoginScriptingAddon()
{

}

void LoginScriptingAddon::register_functions()
{
}

void LoginScriptingAddon::on_login(bool isFirstLogin)
{
    z_lua_state& luaState = lua_state();
    bool result = luaState.call<bool>("on_login", isFirstLogin);
}
