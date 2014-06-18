#include "npc_config.h"
#include "game_common/path_definition.h"

bool NPCConfig::parse()
{
    Json::Value value;
    READ_CONFIG(ConfigFile::NPCConfigPath, value);

    for (const Json::Value& npcValue : value)
    {
        NPCData npcData;

        //������������
        npcData.id = npcValue["id"].asUInt();
        npcData.name = npcValue["name"].asString();
        npcData.title = npcValue["title"].asString();
        npcData.category = npcValue["category"].asString();
        npcData.avatar = npcValue["avatar"].asString();

        //����AI����
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


        //�����Ի���
        const Json::Value& dialoguesValue = npcValue["dialogues"];
        const Json::Value& dialogueTreeValue = dialoguesValue["dialogue_tree"];
        for (const Json::Value& dialogueValue : dialogueTreeValue)
        {
            NPCData::DialogueNode dialogueNode;
            dialogueNode.show_condition_script = dialogueValue["show_condition_script"].asString();
            dialogueNode.event_script = dialogueValue["event_script"].asString();
            for (const Json::Value& contentPartValue : dialogueValue["dialogue_content"])
                dialogueNode.dialogue_parts.push_back(contentPartValue.asString());

            //����ѡ��Ի��ڵ�
            const Json::Value& optionDialogueArr = dialogueValue["dialogue_options"];
            if (optionDialogueArr != Json::nullValue)
            {
                std::function<void(NPCData::OptionDialogueNodeList&, const Json::Value&)> parseOptionNodeProcessFunc
                    = [&parseOptionNodeProcessFunc](NPCData::OptionDialogueNodeList& optionNodeList, const Json::Value& childOptionDialogueArr)
                {
                    for (const Json::Value& optionDialogueValue : childOptionDialogueArr)
                    {
                        NPCData::OptionDialogueNode optionDialogueNode;
                        optionDialogueNode.show_condition_script = optionDialogueValue["show_condition_script"].asString();
                        optionDialogueNode.execute_condition_script = optionDialogueValue["execute_condition_script"].asString();
                        optionDialogueNode.event_script = optionDialogueValue["event_script"].asString();
                        optionDialogueNode.option_content = optionDialogueValue["option_content"].asString();
                        for (const Json::Value& contentPartValue : optionDialogueValue["dialogue_content"])
                            optionDialogueNode.dialogue_parts.push_back(contentPartValue.asString());

                        parseOptionNodeProcessFunc(optionDialogueNode.dialogue_options, optionDialogueValue["dialogue_options"]);

                        optionNodeList.push_back(optionDialogueNode);
                    }
                };

                parseOptionNodeProcessFunc(dialogueNode.dialogue_options, optionDialogueArr);
            }


            npcData.dialogues.dialogue_tree.push_back(dialogueNode);
        }

        //��ս�߲�������ս����

        _npcList[npcData.id] = npcData;
    }



    return true;
}
