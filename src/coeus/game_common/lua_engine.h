#ifndef __LUA_ENGINE_H__
#define __LUA_ENGINE_H__

#include "z_lua_bind/z_lua_bind.h"
#include "path_definition.h"
#include <memory>
#include <venus_net/common.h>


class LuaEngine
{
public:
    struct LuaData
    {
        typedef std::shared_ptr<LuaData> Ptr;

        z_lua_state state;
        z_lua_function_reg function_register;
    };

    typedef adap_map<std::string, LuaData::Ptr> LuaStateTable;

protected:
    LuaEngine();
    virtual ~LuaEngine();

protected:
    LuaData* initialize(const std::string& scriptFile);

protected:
    virtual void register_functions() = 0;

private:
    static LuaStateTable _luaStateTable;
};

#endif // !__LUA_ENGINE_H__
