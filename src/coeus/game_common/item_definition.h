#ifndef __ITEM_DEFINITION_H__
#define __ITEM_DEFINITION_H__

// ��Ʒ��־λ
enum ItemFlag
{
    Item_CanUse,        // ��ʹ��
    Item_CanDrop,       // �ɶ���
    Item_CanSell,       // �ɳ���
    Item_Consumable     // ������
};

#define ITEM_TYPE_FLAG_1        (0xF0000000)
#define ITEM_TYPE_FLAG_2        (ITEM_TYPE_FLAG_1    | 0x0FFF0000)
#define ITEM_TYPE_FLAG_3        (ITEM_TYPE_FLAG_2    | 0x0000F000)

//===================================================================
// ��Ҫ����
//===================================================================
#define ITEM_TYPE_ITEM          (0x10000000)    // ��Ʒ
#define ITEM_TYPE_EQUIP         (0x20000000)    // װ��
#define ITEM_TYPE_FOODSTUFF     (0x30000000)    // ʳƷ
#define ITEM_TYPE_RESOURCE      (0x40000000)    // �Ʋ�

//===================================================================
// ��������
//===================================================================

// ��Ʒ
#define ITEM_TYPE_GENERAL_ITEM      (ITEM_TYPE_ITEM | 0x00010000)   // (268500992, "��ͨ��Ʒ")
#define ITEM_TYPE_ORE               (ITEM_TYPE_ITEM | 0x00020000)   // (268566528, "��ʯ")
#define ITEM_TYPE_WOOD              (ITEM_TYPE_ITEM | 0x00030000)   // (268632064, "ľ��")
#define ITEM_TYPE_LUXURY            (ITEM_TYPE_ITEM | 0x00040000)   // (268697600, "�ݳ�Ʒ")
#define ITEM_TYPE_SPECIAL           (ITEM_TYPE_ITEM | 0x00050000)   // (268763136, "������Ʒ")
#define ITEM_TYPE_CARD              (ITEM_TYPE_ITEM | 0x00060000)   // (268828672, "����")
#define ITEM_TYPE_EGG               (ITEM_TYPE_ITEM | 0x00070000)   // (268894208, "���ﵰ")
#define ITEM_TYPE_CHEST             (ITEM_TYPE_ITEM | 0x00080000)   // (268959744, "����")
#define ITEM_TYPE_BOOK              (ITEM_TYPE_ITEM | 0x00090000)   // (269025280, "�鼮")


// װ��
#define ITEM_TYPE_WEAPON            (ITEM_TYPE_EQUIP | 0x00010000)  // (536936448, "����")
#define ITEM_TYPE_CLOTHES           (ITEM_TYPE_EQUIP | 0x00020000)  // (537001984, "�·�")
#define ITEM_TYPE_SHOES             (ITEM_TYPE_EQUIP | 0x00030000)  // (537067520, "Ь��")
#define ITEM_TYPE_ITEM_STORAGE      (ITEM_TYPE_EQUIP | 0x00040000)  // (537133056, "������")

// ʳƷ
#define ITEM_TYPE_WINE              (ITEM_TYPE_FOODSTUFF | 0x00010000)  // (805371904, "��")
#define ITEM_TYPE_MEAT              (ITEM_TYPE_FOODSTUFF | 0x00020000)  // (805437440, "��")
#define ITEM_TYPE_DRINK             (ITEM_TYPE_FOODSTUFF | 0x00030000)  // (805502976, "����")
#define ITEM_TYPE_SWEETS            (ITEM_TYPE_FOODSTUFF | 0x00040000)  // (805568512, "���")
#define ITEM_TYPE_SNACK             (ITEM_TYPE_FOODSTUFF | 0x00050000)  // (805634048, "С��")
#define ITEM_TYPE_SICHUAN_CUISINE   (ITEM_TYPE_FOODSTUFF | 0x00060000)  // (805699584, "����")
#define ITEM_TYPE_CANTONESE_CUISINE (ITEM_TYPE_FOODSTUFF | 0x00070000)  // (805765120, "����")
#define ITEM_TYPE_HUNAN_CUISINE     (ITEM_TYPE_FOODSTUFF | 0x00080000)  // (805830656, "���")
#define ITEM_TYPE_DRUP_CUISINE      (ITEM_TYPE_FOODSTUFF | 0x00090000)  // (805896192, "ҩƷ")
#define ITEM_TYPE_REAGENT_CUISINE   (ITEM_TYPE_FOODSTUFF | 0x000a0000)  // (805961728, "�Լ�")

//===================================================================
// ��������
//===================================================================


#endif // !__ITEM_DEFINITION_H__
