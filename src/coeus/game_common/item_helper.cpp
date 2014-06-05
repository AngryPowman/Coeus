#include "item_helper.h"

#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif  

ItemHelper::ItemType::ItemTypenameRef ItemHelper::ItemType::_itemTypename;

bool ItemHelper::init()
{
    REGISTER_ITEM_TYPE(0,                           "δ֪��Ʒ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_GENERAL_ITEM,      "��ͨ��Ʒ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_ORE,               "��ʯ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_WOOD,              "ľ��");
    REGISTER_ITEM_TYPE(ITEM_TYPE_LUXURY,            "�ݳ�Ʒ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SPECIAL,           "������Ʒ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CARD,              "����");
    REGISTER_ITEM_TYPE(ITEM_TYPE_EGG,               "���ﵰ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CHEST,             "����");
    REGISTER_ITEM_TYPE(ITEM_TYPE_BOOK,              "�鼮");

    REGISTER_ITEM_TYPE(ITEM_TYPE_WEAPON,            "����");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CLOTHES,           "�·�");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SHOES,             "Ь��");
    REGISTER_ITEM_TYPE(ITEM_TYPE_ITEM_STORAGE,      "������");

    REGISTER_ITEM_TYPE(ITEM_TYPE_WINE,              "��");
    REGISTER_ITEM_TYPE(ITEM_TYPE_MEAT,              "��");
    REGISTER_ITEM_TYPE(ITEM_TYPE_DRINK,             "����");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SWEETS,            "���");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SNACK,             "С��");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SICHUAN_CUISINE,   "����");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CANTONESE_CUISINE, "����");
    REGISTER_ITEM_TYPE(ITEM_TYPE_HUNAN_CUISINE,     "���");
    REGISTER_ITEM_TYPE(ITEM_TYPE_DRUP_CUISINE,      "ҩƷ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_REAGENT_CUISINE,   "�Լ�");

    return true;
}

const std::string& ItemHelper::ItemType::toTypename(uint32 itemType)
{
    ItemTypenameRef::const_iterator iter = _itemTypename.find(itemType);
    return (iter != _itemTypename.end() ? iter->second : _itemTypename[0]);
}