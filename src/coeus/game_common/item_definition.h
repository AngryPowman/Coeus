#ifndef __ITEM_DEFINITION_H__
#define __ITEM_DEFINITION_H__

#define ITEM_TYPE_FLAG_1        (0xF0000000)
#define ITEM_TYPE_FLAG_2        (ITEM_TYPE_FLAG_1    | 0x0FFF0000)
#define ITEM_TYPE_FLAG_3        (ITEM_TYPE_FLAG_2    | 0x0000F000)

//===================================================================
// 主要分类
//===================================================================
#define ITEM_TYPE_ITEM          (0x10000000)    // 物品
#define ITEM_TYPE_EQUIP         (0x20000000)    // 装备
#define ITEM_TYPE_FOODSTUFF     (0x30000000)    // 食品
#define ITEM_TYPE_RESOURCE      (0x40000000)    // 财产

//===================================================================
// 二级分类
//===================================================================

// 物品
#define ITEM_TYPE_GENERAL_ITEM      (ITEM_TYPE_ITEM | 0x00010000)   // 普通物品
#define ITEM_TYPE_ORE               (ITEM_TYPE_ITEM | 0x00020000)   // 矿石
#define ITEM_TYPE_WOOD              (ITEM_TYPE_ITEM | 0x00030000)   // 木材
#define ITEM_TYPE_LUXURY            (ITEM_TYPE_ITEM | 0x00040000)   // 奢侈品
#define ITEM_TYPE_SPECIAL           (ITEM_TYPE_ITEM | 0x00050000)   // 特殊物品
#define ITEM_TYPE_CARD              (ITEM_TYPE_ITEM | 0x00060000)   // 卡牌
#define ITEM_TYPE_EGG               (ITEM_TYPE_ITEM | 0x00070000)   // 宠物蛋
#define ITEM_TYPE_CHEST             (ITEM_TYPE_ITEM | 0x00080000)   // 宝箱
#define ITEM_TYPE_BOOK              (ITEM_TYPE_ITEM | 0x00090000)   // 书籍


// 装备
#define ITEM_TYPE_WEAPON            (ITEM_TYPE_EQUIP | 0x00010000)  // 武器
#define ITEM_TYPE_CLOTHES           (ITEM_TYPE_EQUIP | 0x00020000)  // 衣服
#define ITEM_TYPE_SHOES             (ITEM_TYPE_EQUIP | 0x00030000)  // 鞋子
#define ITEM_TYPE_ITEM_STORAGE      (ITEM_TYPE_EQUIP | 0x00040000)  // 储物器

// 食品
#define ITEM_TYPE_WINE              (ITEM_TYPE_FOODSTUFF | 0x00010000)  // 酒
#define ITEM_TYPE_MEAT              (ITEM_TYPE_FOODSTUFF | 0x00020000)  // 肉
#define ITEM_TYPE_DRINK             (ITEM_TYPE_FOODSTUFF | 0x00030000)  // 饮料
#define ITEM_TYPE_SWEETS            (ITEM_TYPE_FOODSTUFF | 0x00040000)  // 甜点
#define ITEM_TYPE_SNACK             (ITEM_TYPE_FOODSTUFF | 0x00050000)  // 小吃
#define ITEM_TYPE_SICHUAN_CUISINE   (ITEM_TYPE_FOODSTUFF | 0x00060000)  // 川菜
#define ITEM_TYPE_CANTONESE_CUISINE (ITEM_TYPE_FOODSTUFF | 0x00070000)  // 粤菜
#define ITEM_TYPE_HUNAN_CUISINE     (ITEM_TYPE_FOODSTUFF | 0x00080000)  // 湘菜
#define ITEM_TYPE_DRUP_CUISINE      (ITEM_TYPE_FOODSTUFF | 0x00090000)  // 湘菜
#define ITEM_TYPE_REAGENT_CUISINE   (ITEM_TYPE_FOODSTUFF | 0x000a0000)  // 湘菜

//===================================================================
// 三级分类
//===================================================================


#endif // !__ITEM_DEFINITION_H__
