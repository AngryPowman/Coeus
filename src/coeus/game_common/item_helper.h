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
        static ItemTypenameRef _itemTypenames;
        static const std::string& toTypename(uint32 itemType);
    };

    class Employ
    {
    public:
        typedef adap_map<uint32, std::string> EmployNameRef;
        static EmployNameRef _employNames;
        static const std::string& toEmployName(uint32 itemType);
    };

public:
    static bool init();
};

#define REGISTER_ITEM_TYPE(id, name) \
    ItemHelper::ItemType::_itemTypenames[id] = name;

#define REGISTER_ITEM_EMPLOY_NAME(id, name) \
    ItemHelper::Employ::_employNames[id] = name;

#endif // !__ITEM_HELPER_H__
