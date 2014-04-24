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
    Female = 0,   // Ů��
    Male,         // ����

    GenderMax
};

enum Belief
{
    UniverseFederal = 0, // ��������
    PowerOfDestiny,      // ��Ȼ֮��
    Dark,                // �ڰ���͢
    BeliefMax
};

enum CharacterType
{
    MirrorHunter = 0,   // ��������
    SpaceTraveler,      // ʱ��������
    Inventor,           // ������

    CharacterTypeMax,
};

enum LoginResult
{
    LR_LOGIN_SUCCESS,       // ��¼�ɹ�
    LR_ACCOUNT_DISMATCH,    // �û��������벻ƥ��
    LR_USER_BANNED,         // �û������
};

#endif // !__GAME_DEFINE_H__
