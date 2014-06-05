#include "item_helper.h"

#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif  

ItemHelper::ItemType::ItemTypenameRef ItemHelper::ItemType::_itemTypename;

bool ItemHelper::init()
{
    REGISTER_ITEM_TYPE(0,                           "Î´ÖªÎïÆ·");
    REGISTER_ITEM_TYPE(ITEM_TYPE_GENERAL_ITEM,      "ÆÕÍ¨ÎïÆ·");
    REGISTER_ITEM_TYPE(ITEM_TYPE_ORE,               "¿óÊ¯");
    REGISTER_ITEM_TYPE(ITEM_TYPE_WOOD,              "Ä¾²Ä");
    REGISTER_ITEM_TYPE(ITEM_TYPE_LUXURY,            "ÉÝ³ÞÆ·");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SPECIAL,           "ÌØÊâÎïÆ·");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CARD,              "¿¨ÅÆ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_EGG,               "³èÎïµ°");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CHEST,             "±¦Ïä");
    REGISTER_ITEM_TYPE(ITEM_TYPE_BOOK,              "Êé¼®");

    REGISTER_ITEM_TYPE(ITEM_TYPE_WEAPON,            "ÎäÆ÷");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CLOTHES,           "ÒÂ·þ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SHOES,             "Ð¬×Ó");
    REGISTER_ITEM_TYPE(ITEM_TYPE_ITEM_STORAGE,      "´¢ÎïÆ÷");

    REGISTER_ITEM_TYPE(ITEM_TYPE_WINE,              "¾Æ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_MEAT,              "Èâ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_DRINK,             "ÒûÁÏ");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SWEETS,            "Ìðµã");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SNACK,             "Ð¡³Ô");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SICHUAN_CUISINE,   "´¨²Ë");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CANTONESE_CUISINE, "ÔÁ²Ë");
    REGISTER_ITEM_TYPE(ITEM_TYPE_HUNAN_CUISINE,     "Ïæ²Ë");
    REGISTER_ITEM_TYPE(ITEM_TYPE_DRUP_CUISINE,      "Ò©Æ·");
    REGISTER_ITEM_TYPE(ITEM_TYPE_REAGENT_CUISINE,   "ÊÔ¼Á");

    return true;
}

const std::string& ItemHelper::ItemType::toTypename(uint32 itemType)
{
    ItemTypenameRef::const_iterator iter = _itemTypename.find(itemType);
    return (iter != _itemTypename.end() ? iter->second : _itemTypename[0]);
}