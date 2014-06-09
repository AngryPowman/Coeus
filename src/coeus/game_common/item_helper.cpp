#include "item_helper.h"

#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif  

ItemHelper::ItemType::ItemTypenameRef ItemHelper::ItemType::_itemTypenames;
ItemHelper::ItemType::ItemTypenameRef ItemHelper::Employ::_employNames;

bool ItemHelper::init()
{
    // Item name of types
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

    // Item employ name of types
#if defined(COEUS_CLIENT)
    REGISTER_ITEM_EMPLOY_NAME(0,                      "ʹ��");
    REGISTER_ITEM_EMPLOY_NAME(ITEM_TYPE_WEAPON,       "װ��");
    REGISTER_ITEM_EMPLOY_NAME(ITEM_TYPE_CLOTHES,      "װ��");
    REGISTER_ITEM_EMPLOY_NAME(ITEM_TYPE_SHOES,        "װ��");
    REGISTER_ITEM_EMPLOY_NAME(ITEM_TYPE_ITEM_STORAGE, "װ��");
    REGISTER_ITEM_EMPLOY_NAME(ITEM_TYPE_EGG,          "����");
    REGISTER_ITEM_EMPLOY_NAME(ITEM_TYPE_CHEST,        "�򿪱���");
    REGISTER_ITEM_EMPLOY_NAME(ITEM_TYPE_BOOK,         "�Ķ�");
#endif

    return true;
}

const std::string& ItemHelper::ItemType::toTypename(uint32 itemType)
{
    ItemTypenameRef::const_iterator iter = _itemTypenames.find(itemType);
    return (iter != _itemTypenames.end() ? iter->second : _itemTypenames[0]);
}

const std::string& ItemHelper::Employ::toEmployName(uint32 itemType)
{
    EmployNameRef::const_iterator iter = _employNames.find(itemType);
    return (iter != _employNames.end() ? iter->second : _employNames[0]);
}
