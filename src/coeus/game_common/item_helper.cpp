#include "item_helper.h"
#include "item_definition.h"

ItemHelper::ItemType::ItemTypenameRef ItemHelper::ItemType::_itemTypename;
const std::string&& ItemHelper::ItemType::toTypename(uint32 itemType)
{
    ItemTypenameRef::const_iterator iter = _itemTypename.find(itemType);
    return std::forward<const std::string>(iter != _itemTypename.end() ? iter->second : "未知物品");
}

bool ItemHelper::init()
{
    REGISTER_ITEM_TYPE(ITEM_TYPE_GENERAL_ITEM,      "普通物品");
    REGISTER_ITEM_TYPE(ITEM_TYPE_ORE,               "矿石");
    REGISTER_ITEM_TYPE(ITEM_TYPE_WOOD,              "木材");
    REGISTER_ITEM_TYPE(ITEM_TYPE_LUXURY,            "奢侈品");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SPECIAL,           "特殊物品");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CARD,              "卡牌");
    REGISTER_ITEM_TYPE(ITEM_TYPE_EGG,               "宠物蛋");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CHEST,             "宝箱");
    REGISTER_ITEM_TYPE(ITEM_TYPE_BOOK,              "书籍");

    REGISTER_ITEM_TYPE(ITEM_TYPE_WEAPON,            "武器");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CLOTHES,           "衣服");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SHOES,             "鞋子");
    REGISTER_ITEM_TYPE(ITEM_TYPE_ITEM_STORAGE,      "储物器");

    REGISTER_ITEM_TYPE(ITEM_TYPE_WINE,              "酒");
    REGISTER_ITEM_TYPE(ITEM_TYPE_MEAT,              "肉");
    REGISTER_ITEM_TYPE(ITEM_TYPE_DRINK,             "饮料");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SWEETS,            "甜点");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SNACK,             "小吃");
    REGISTER_ITEM_TYPE(ITEM_TYPE_SICHUAN_CUISINE,   "川菜");
    REGISTER_ITEM_TYPE(ITEM_TYPE_CANTONESE_CUISINE, "粤菜");
    REGISTER_ITEM_TYPE(ITEM_TYPE_HUNAN_CUISINE,     "湘菜");
    REGISTER_ITEM_TYPE(ITEM_TYPE_DRUP_CUISINE,      "药品");
    REGISTER_ITEM_TYPE(ITEM_TYPE_REAGENT_CUISINE,   "试剂");
}
