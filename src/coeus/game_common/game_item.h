#ifndef __GAME_ITEM_H__
#define __GAME_ITEM_H__

#include <exception>
#include <venus_net/venus_net.h>
#include "config/item_config.h"
#include "item_exception.h"
#include "item_helper.h"

class ItemData;
class GameItem
{
public:
    GameItem(const ItemData& itemData)
        : _itemData(itemData), _count(0)
    {
        if (itemData.maxStack <= 0)
        {
            throw BadStackValueException();
        }

        _count = 0;
    }

    virtual ~GameItem() {}

public:
    inline const uint32 id() const { return _itemData.id; }
    inline const uint32 type() const { return _itemData.type; }
    inline const std::string& typeName() const { return ItemHelper::ItemType::toTypename(_itemData.type); }
    inline const std::string& name() const { return _itemData.name; }
    inline const std::string& description() const { return _itemData.description; }
    inline void setCount(uint16 count) { _count = count; }
    inline int count() const { return _count; }
    inline int maxStack() const { return _itemData.maxStack; }
    uint32 flags() const { return _itemData.flags; }

#if defined(COEUS_CLIENT)
public:
    const std::string& icon() const{ return _itemData.icon; }
#endif

private:
    const ItemData& _itemData;
    uint16 _count;
};

#if defined(COEUS_CLIENT)
    //#include <QMetaType>
    //Q_DECLARE_METATYPE(GameItem);
#endif

#endif // !__GAME_ITEM_H__
