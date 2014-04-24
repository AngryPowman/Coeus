#ifndef __NPC_CONFIG_H__
#define __NPC_CONFIG_H__

#include "game_common/config/configuration.h"
#include "game_common/game_define.h"

struct NPCData
{
    struct AIData
    {
        uint16 level;                   // NPC等级
        bool attackable;                // 可发起攻击
        bool favorable;                 // 有好感度属性
        bool marriageable;              // 允许求偶
        bool presentable;               // 接受赠送物品
        bool movealbe;                  // 是否会游走到其它子场景
        bool surrender;                 // 是否会投降
        SceneList movementScene;        // 可能会游走的场景
        ItemList favoriteItems;         // 喜欢的物品类型
        ItemList hateItems;             // 讨厌的物品类型
        CardList cards;                 // 使用的牌组
    };

    struct DialoguesData
    {
        Dialogues general;              //普通场合下
        Dialogues attack_BadConditions; //挑战者不满足挑战条件
        Dialogues attack_Ask;           //挑战者发起挑战时
        Dialogues attacksk_Won;         //胜利的场合
        Dialogues attack_Failed;        //失败的场合
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
