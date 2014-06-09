#ifndef __ITEM_CONFIG_H__
#define __ITEM_CONFIG_H__

#include "configuration.h"
#include "../item_definition.h"

struct ItemData
{
    uint32 id;
    uint32 type;
    std::string name;
    std::string description;
    uint16 maxStack;
    uint32 flags;

#if defined(COEUS_CLIENT)
    std::string icon;
#endif
};

typedef adap_map<uint32, ItemData> ItemTable;
class ItemConfig
    : public Configuration, public Venus::Singleton<ItemConfig>
{
public:
    ItemConfig();
    virtual ~ItemConfig();

public:
    bool parse();
    const ItemData* itemDataById(uint32 id) const;

private:
    ItemTable _items;
};

#endif // !__ITEM_CONFIG_H__




