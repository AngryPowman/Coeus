#include "npc_config.h"
#include "game_common/path_definition.h"

bool NPCConfig::parse()
{
    Json::Value value;
    READ_CONFIG(ConfigFile::NPCConfigPath, value);

    for (const Json::Value& npcValue : value)
    {
        NPCData npcData;

        //解析基本数据
        npcData.id = npcValue["id"].asUInt();
        npcData.name = npcValue["name"].asString();
        npcData.title = npcValue["title"].asString();
        npcData.avatar = npcValue["avatar"].asString();

        //解析AI属性
        const Json::Value& aiPropertiesValue = npcValue["ai_properties"];
        npcData.ai.level = aiPropertiesValue["level"].asUInt();
        npcData.ai.attackable = aiPropertiesValue["attackable"].asBool();
        npcData.ai.favorable = aiPropertiesValue["favorable"].asBool();
        npcData.ai.marriageable = aiPropertiesValue["marriageable"].asBool();
        npcData.ai.presentable = aiPropertiesValue["presentable"].asBool();
        npcData.ai.movealbe = aiPropertiesValue["movealbe"].asBool();

        for (const Json::Value& sceneIdValue : aiPropertiesValue["movement_scene"])
        {
            if (sceneIdValue != Json::nullValue)
            {
                npcData.ai.movementScene.push_back(sceneIdValue.asUInt());
            }
        }

        for (const Json::Value& favoriteItemValue : aiPropertiesValue["favorite_items"])
        {
            if (favoriteItemValue != Json::nullValue)
            {
                npcData.ai.favoriteItems.push_back(favoriteItemValue.asUInt());
            }
        }

        for (const Json::Value& hateItemValue : aiPropertiesValue["hate_items"])
        {
            if (hateItemValue != Json::nullValue)
            {
                npcData.ai.hateItems.push_back(hateItemValue.asUInt());
            }
        }

        for (const Json::Value& cardIdValue : aiPropertiesValue["cards"])
        {
            if (cardIdValue != Json::nullValue)
            {
                npcData.ai.cards.push_back(cardIdValue.asUInt());
            }
        }

        npcData.ai.surrender = aiPropertiesValue["surrender"].asBool();

        _npcList[npcData.id] = npcData;
    }

    return true;
}
