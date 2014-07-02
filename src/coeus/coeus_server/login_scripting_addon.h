#ifndef __LOGIN_SCRIPTING_ADDON_H__
#define __LOGIN_SCRIPTING_ADDON_H__

#include "game_common/scripting_addon.h"

class LoginScriptingAddon : public ScriptingAddon
{
public:
    LoginScriptingAddon();
    virtual ~LoginScriptingAddon();

public:
    void register_functions();

public:
    void on_login(bool isFirstLogin);
};

#endif // !__LOGIN_SCRIPTING_ADDON_H__
