#include "character_config.h"
#include "game_common/path_definition.h"

bool CharacterConfig::parse()
{
    Json::Value value;
    READ_CONFIG(ConfigFile::CharacterConfigPath, value);

    const Json::Value& jsonRoot = value["character"];
    if (jsonRoot == Json::nullValue)
    {
        return false;
    }

    _characterList.resize(jsonRoot.size());
    for (int i = 0; i < jsonRoot.size(); ++i)
    {
        const Json::Value& jsonIndexValue = jsonRoot[i];
        if (jsonIndexValue == Json::nullValue)
        {
            continue;
        }

        CharacterInfo characterInfo;
        characterInfo.name = jsonIndexValue["name"].asString();
        characterInfo.detail = jsonIndexValue["detail"].asString();

        characterInfo.avatar[Gender::Female] = jsonIndexValue["avatar"][Gender::Female].asString();
        characterInfo.avatar[Gender::Male] = jsonIndexValue["avatar"][Gender::Male].asString();

        characterInfo.cg[Gender::Female] = jsonIndexValue["cg"][Gender::Female].asString();
        characterInfo.cg[Gender::Male] = jsonIndexValue["cg"][Gender::Male].asString();

        characterInfo.splash[Gender::Female] = jsonIndexValue["splash"][Gender::Female].asString();
        characterInfo.splash[Gender::Male] = jsonIndexValue["splash"][Gender::Male].asString();

        _characterList[i] = characterInfo;
    }

    return true;
}