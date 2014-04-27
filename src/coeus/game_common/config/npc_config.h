#ifndef __NPC_CONFIG_H__
#define __NPC_CONFIG_H__

#include "game_common/game_define.h"
#include "configuration.h"

struct NPCData
{
    struct AIData
    {
        uint16 level;                   // NPC�ȼ�
        bool attackable;                // �ɷ��𹥻�
        bool favorable;                 // �кøж�����
        bool marriageable;              // ������ż
        bool presentable;               // ����������Ʒ
        bool movealbe;                  // �Ƿ�����ߵ������ӳ���
        bool surrender;                 // �Ƿ��Ͷ��
        SceneList movementScene;        // ���ܻ����ߵĳ���
        ItemList favoriteItems;         // ϲ������Ʒ����
        ItemList hateItems;             // �������Ʒ����
        CardList cards;                 // ʹ�õ�����
    };

    struct OptionDialogueNode;
    typedef std::vector<OptionDialogueNode> OptionDialogueNodeList;
    struct DialogueNode
    {
        std::string show_condition_script;
        std::string event_script;
        DialogueParts dialogueParts;
        OptionDialogueNodeList dialogue_options;
    };

    struct OptionDialogueNode : public DialogueNode
    {
        std::string execute_condition_script;
        std::string option_content;
        OptionDialogueNodeList dialogue_options;
    };

    struct DialoguesData
    {
        std::vector<DialogueNode> dialogue_tree;
        Dialogues attack_BadConditions; //��ս�߲�������ս����
        Dialogues attack_Ask;           //��ս�߷�����սʱ
        Dialogues attacksk_Won;         //ʤ���ĳ���
        Dialogues attack_Failed;        //ʧ�ܵĳ���
    };

    uint16 id;
    std::string name;
    std::string title;
    std::string category;
    std::string avatar;
    AIData ai;
    DialoguesData dialogues;
};

typedef std::map<uint32, NPCData> NPCDataList;
class NPCConfig
	: public Configuration, public Venus::Singleton<NPCConfig>
{
public:
	bool parse();
    const NPCDataList& getNPCList() { return _npcList; }

private:
    NPCDataList _npcList;
};

#endif // !__NPC_CONFIG_H__
