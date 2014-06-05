#include "item_config.h"
#include "game_common/path_definition.h"
#include "../item_exception.h"

ItemConfig::ItemConfig()
{
}


ItemConfig::~ItemConfig()
{
}

bool ItemConfig::parse()
{
    Json::Value value;
    READ_CONFIG(ConfigFile::ItemConfig, value);

    if (value != Json::nullValue)
    {
        for (const Json::Value& itemValue : value)
        {
            ItemData itemData;
            itemData.id             = itemValue["id"].asUInt();
            itemData.type           = itemValue["type"].asUInt();
            itemData.name           = itemValue["name"].asString();
            itemData.description    = itemValue["description"].asString();
            itemData.maxStack       = itemValue["max_stack"].asUInt();
            itemData.flags          = itemValue["flags"].asUInt();

            if (itemData.maxStack <= 0)
            {
                throw BadStackValueException();
            }

            #ifdef COEUS_CLIENT
                itemData.icon = itemValue["icon"].asString();
            #endif

            _items[itemData.id] = itemData;
        }
    }

    return true;
}

const ItemData* ItemConfig::itemDataById(uint32 id) const
{
    ItemTable::const_iterator iter = _items.find(id);
    if (iter != _items.end())
    {
        return &iter->second;
    }

    return nullptr;
}
