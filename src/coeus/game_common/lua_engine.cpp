#include "lua_engine.h"

LuaEngine::LuaStateTable LuaEngine::_luaStateTable;
LuaEngine::LuaEngine()
{

}

LuaEngine::~LuaEngine()
{

}

LuaEngine::LuaData* LuaEngine::initialize(const std::string& scriptFile)
{
    auto iter = _luaStateTable.find(scriptFile);
    if (iter != _luaStateTable.end())
    {
        return iter->second.get();
    }

    LuaData::Ptr luaData(new LuaData);
    bool result = (luaData->state.create() == 0 && luaData->state.open_all_libs() == 0);
    if (result)
    {
        if (scriptFile.empty())
        {
            return nullptr;
        }

        int s_ok = luaData->state.dofile((GameDirecotry::Shared + scriptFile).c_str());
        if (s_ok == 0)
        {
            std::pair<LuaStateTable::iterator, bool> ins_result
                = _luaStateTable.insert(std::make_pair(scriptFile, std::move(luaData)));
            if (ins_result.second)
            {
                register_functions();
                return ins_result.first->second.get();
            }
        }
    }

    return nullptr;
}
