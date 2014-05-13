#ifndef __GAME_DEFINE_H__
#define __GAME_DEFINE_H__

#include "venus_net/common.h"

#define DB_TYPE_SQLITE (0x1)
#define DB_TYPE_MYSQL  (0x2)

typedef std::vector<uint32> SceneList;
typedef std::vector<uint32> ItemList;
typedef std::vector<uint32> CardList;
typedef std::vector<std::string> DialogueParts;
typedef std::vector<DialogueParts> Dialogues;

enum Gender
{
    Female = 0,   // 女性
    Male,         // 男性

    GenderMax
};

enum Belief
{
    UniverseFederal = 0, // 宇宙联邦
    PowerOfDestiny,      // 自然之力
    Dark,                // 黑暗教廷
    BeliefMax
};

enum CharacterType
{
    MirrorHunter = 0,   // 镜子猎人
    SpaceTraveler,      // 时空旅行者
    Inventor,           // 大发明家

    CharacterTypeMax,
};

enum Characteristic
{
    KindHearted          = 0x00,   //善良
    Conscientious        = 0x01,   //有责任心
    Cowardice            = 0x02,   //贪生怕死
    Heroic               = 0x03,   //英勇
    Technique            = 0x04,   //技术宅
    Obliging             = 0x05,   //乐于助人
    Arrogancy            = 0x06,   //自大
    Perfectionism        = 0x07,   //完美主义
    Vain                 = 0x08,   //虚荣
    Mature               = 0x09,   //成熟
    Sissy                = 0x0A,   //娘炮
    Knowledgeability     = 0x0B,   //见多识广
    Tender               = 0x0C,   //温柔
    FreedomLoving        = 0x0D,   //热爱自由
    Homosexual           = 0x0E,   //同性恋
    Hypocrisy            = 0x0F,   //虚伪
    Impulsion            = 0x10,   //冲动
    Introversive         = 0x11,   //内向
    Pure                 = 0x12,   //单纯
    Flighty              = 0x13,   //浮躁
    HighIQ               = 0x14,   //高智商
    MultiplePersonality  = 0x15,   //多重人格
    Perceptual           = 0x16,   //感性
    Rational             = 0x17,   //理性
    Obscene              = 0x18,   //猥琐
    Romantic             = 0x19,   //浪漫
    LeftHander           = 0x1A,   //左撇子
    Selfish              = 0x1B,   //自私
    Cautious             = 0x1C,   //认真谨慎
    Lazy                 = 0x1D,   //懒惰
};

enum LoginResult
{
    LR_LOGIN_SUCCESS,       // 登录成功
    LR_ACCOUNT_DISMATCH,    // 用户名和密码不匹配
    LR_USER_BANNED,         // 用户被封号
};

#endif // !__GAME_DEFINE_H__
