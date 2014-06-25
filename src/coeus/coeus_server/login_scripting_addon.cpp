#include "login_scripting_addon.h"

LoginScriptingAddon::LoginScriptingAddon()
{
    LuaEngine::initialize("data/scripts/npc/10001_zapline.lua");
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
