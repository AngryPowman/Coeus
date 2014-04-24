#ifndef __NPC_CONFIG_H__
#define __NPC_CONFIG_H__

#include "game_common/config/configuration.h"
#include "game_common/game_define.h"

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

    struct DialoguesData
    {
        Dialogues general;              //��ͨ������
        Dialogues attack_BadConditions; //��ս�߲�������ս����
        Dialogues attack_Ask;           //��ս�߷�����սʱ
        Dialogues attacksk_Won;         //ʤ���ĳ���
        Dialogues attack_Failed;        //ʧ�ܵĳ���
    };

    uint16 id;
    std::string name;
    std::string title;
    std::string avatar;
    AIData ai;
    DialoguesData dialogues;
};

class NPCConfig
	: public Configuration, public Venus::Singleton<NPCConfig>
{
public:
	bool parse();

private:
    std::map<uint32, NPCData> _npcList;
};

#endif // !__NPC_CONFIG_H__
