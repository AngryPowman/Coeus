#ifndef __LUA_ENGINE_H__
#define __LUA_ENGINE_H__

#include "z_lua_bind/z_lua_bind.h"

class LuaEngine
{
protected:
    LuaEngine()
    {
        
    }

protected:
    bool initialize(const std::string& scriptFile)
    {
        bool result = (_lua_state.create() == 0 && _lua_state.open_all_libs() == 0);
        if (result)
        {
            register_functions();
            if (!scriptFile.empty())
            {
                _lua_state.dofile(scriptFile.c_str());
            }
        }

        return result;
    }

protected:
    virtual void register_functions() = 0;
    inline z_lua_state& lua_state() { return _lua_state; }
    inline z_lua_function_reg& lua_function_reg() { return _lua_function_reg; }

private:
    z_lua_state _lua_state;
    z_lua_function_reg _lua_function_reg;
};

#endif // !__LUA_ENGINE_H__
