#ifndef __ITEM_HELPER_H__
#define __ITEM_HELPER_H__

#include <venus_net/common.h>
#include "item_definition.h"

class ItemHelper
{
public:
    class ItemType
    {
    public:
        typedef adap_map<uint32, std::string> ItemTypenameRef;
        static ItemTypenameRef _itemTypename;
        static const std::string& toTypename(uint32 itemType);
    };

public:
    static bool init();
};

#define REGISTER_ITEM_TYPE(id, name) \
    ItemHelper::ItemType::_itemTypename[id] = name;

#endif // !__ITEM_HELPER_H__
