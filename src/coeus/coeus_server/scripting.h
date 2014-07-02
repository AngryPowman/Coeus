#ifndef __SCRIPTING_ADDONS_H__
#define __SCRIPTING_ADDONS_H__

#include <venus_net/types.h>

class ScriptingAddon;
class LoginScriptingAddon;

class Scripting
{
public:
    static LoginScriptingAddon* loginScriptingAddon();

private:
    static adap_map<uint32, ScriptingAddon*> _scriptingAddons;
};

#endif // !__SCRIPTING_ADDONS_H__
