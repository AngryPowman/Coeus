#include "login_scripting_addon.h"

LoginScriptingAddon::LoginScriptingAddon()
{
    LuaEngine::initialize("scripts/npc/s_npc_10000.lua");
}

LoginScriptingAddon::~LoginScriptingAddon()
{

}

void LoginScriptingAddon::register_functions()
{

}

void LoginScriptingAddon::onLogin(bool isFirstLogin)
{

}
