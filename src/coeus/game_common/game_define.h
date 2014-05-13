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

enum Characteristic
{
    KindHearted          = 0x00,   //����
    Conscientious        = 0x01,   //��������
    Cowardice            = 0x02,   //̰������
    Heroic               = 0x03,   //Ӣ��
    Technique            = 0x04,   //����լ
    Obliging             = 0x05,   //��������
    Arrogancy            = 0x06,   //�Դ�
    Perfectionism        = 0x07,   //��������
    Vain                 = 0x08,   //����
    Mature               = 0x09,   //����
    Sissy                = 0x0A,   //����
    Knowledgeability     = 0x0B,   //����ʶ��
    Tender               = 0x0C,   //����
    FreedomLoving        = 0x0D,   //�Ȱ�����
    Homosexual           = 0x0E,   //ͬ����
    Hypocrisy            = 0x0F,   //��α
    Impulsion            = 0x10,   //�嶯
    Introversive         = 0x11,   //����
    Pure                 = 0x12,   //����
    Flighty              = 0x13,   //����
    HighIQ               = 0x14,   //������
    MultiplePersonality  = 0x15,   //�����˸�
    Perceptual           = 0x16,   //����
    Rational             = 0x17,   //����
    Obscene              = 0x18,   //���
    Romantic             = 0x19,   //����
    LeftHander           = 0x1A,   //��Ʋ��
    Selfish              = 0x1B,   //��˽
    Cautious             = 0x1C,   //�������
    Lazy                 = 0x1D,   //����
};

enum LoginResult
{
    LR_LOGIN_SUCCESS,       // ��¼�ɹ�
    LR_ACCOUNT_DISMATCH,    // �û��������벻ƥ��
    LR_USER_BANNED,         // �û������
};

#endif // !__GAME_DEFINE_H__
