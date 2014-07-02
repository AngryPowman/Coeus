#include "scripting.h"
#include "login_scripting_addon.h"

LoginScriptingAddon* Scripting::loginScriptingAddon()
{
    static LoginScriptingAddon instance;
    return &instance;
}
