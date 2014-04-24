#ifndef __GAME_DEFINE_H__
#define __GAME_DEFINE_H__

#include "venus_net/common.h"

#define DB_TYPE_SQLITE (0x1)
#define DB_TYPE_MYSQL  (0x2)

typedef std::vector<uint32> SceneList;
typedef std::vector<uint32> ItemList;
typedef std::vector<uint32> CardList;
typedef std::vector<std::string> DialoguePart;
typedef std::vector<DialoguePart> Dialogues;

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

enum LoginResult
{
    LR_LOGIN_SUCCESS,       // 登录成功
    LR_ACCOUNT_DISMATCH,    // 用户名和密码不匹配
    LR_USER_BANNED,         // 用户被封号
};

#endif // !__GAME_DEFINE_H__
