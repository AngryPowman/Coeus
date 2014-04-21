#include "belif_config.h"
#include "game_common/path_definition.h"

bool BeliefConfig::parse()
{
    Json::Value value;
    READ_CONFIG(ConfigFile::BelifConfigPath, value);

    const Json::Value& jsonRoot = value["belief"];
    if (jsonRoot == Json::nullValue)
    {
        return false;
    }

    _belifList.resize(jsonRoot.size());
    for (int i = 0; i < jsonRoot.size(); ++i)
    {
        const Json::Value& jsonIndexValue = jsonRoot[i];
        if (jsonIndexValue == Json::nullValue)
        {
            continue;
        }

        Belif belif;
        belif.beliefName = jsonIndexValue["belief_name"].asString();
        belif.beliefDesc = jsonIndexValue["belief_desc"].asString();
        belif.beliefBadgePicture = jsonIndexValue["belief_pic"].asString();

        _belifList[i] = belif;
    }

    return true;
}