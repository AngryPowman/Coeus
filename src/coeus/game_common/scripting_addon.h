#ifndef __SCRIPTING_ADDON_H__
#define __SCRIPTING_ADDON_H__

#include "lua_engine.h"
#include <venus_net/common.h>

class ScriptingAddon : public LuaEngine
{
public:
    bool initialize(const std::string& scriptFile)
    {
        _luaData = LuaEngine::initialize(scriptFile);
        return (_luaData != nullptr);
    }

public:
    inline LuaData* lua_data() { return _luaData; }
    inline z_lua_state& lua_state() { return _luaData->state; }
    inline z_lua_function_reg& lua_function_reg() { return _luaData->function_register; }

private:
    LuaData* _luaData;
};

#define SAFE_LOAD_SCRIPTING(file) \
    if (!ScriptingAddon::initialize(file)) throw

#endif // !__SCRIPTING_ADDON_H__