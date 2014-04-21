#ifndef __GAME_DEFINE_H__
#define __GAME_DEFINE_H__

#define DB_TYPE_SQLITE (0x1)
#define DB_TYPE_MYSQL  (0x2)

enum Gender
{
    Female = 0,   // Ů��
    Male,         // ����

    GenderMax
};

enum Belief
{
    Holy = 0,           // ��ʥ��͢
    TechHarbinger,      // �Ƽ�����
    DarkBoundary,       // �ڰ��߽�
    BeliefMax
};

enum CharacterCareer
{
    MirrorHunter = 0,   // ��������
    Mechanic,           // ��еʦ
    CharacterCareerMax
};

enum LoginResult
{
    LR_LOGIN_SUCCESS,       // ��¼�ɹ�
    LR_ACCOUNT_DISMATCH,    // �û��������벻ƥ��
    LR_USER_BANNED,         // �û������
};

#endif // !__GAME_DEFINE_H__
