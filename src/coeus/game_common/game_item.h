#ifndef __GAME_ITEM_H__
#define __GAME_ITEM_H__

#include <venus_net/venus_net.h>
#include "item_helper.h"

class ItemConfig;
class GameItem
{
public:
    GameItem(/*const ItemConfig& itemConfig*/)
        : _id(0), _type(0), _count(0)
    {
        _type = 268566528;
        _icon = "images/ui/lsb_char_details.png";
        _name = "《代码大全》";
        _description = "抛掷出去能造成可怕伤害。";
        _count = 1;
    }

    virtual ~GameItem() {}

public:
    inline const uint32 id() const { return _id; }
    inline const uint32 type() const { return _type; }
    inline const std::string& typeName() const { return ItemHelper::ItemType::toTypename(_type); }
    inline const std::string& name() const { return _name; }
    inline const std::string& description() const { return _description; }
    inline int count() const { return _count; }

#if defined(COEUS_CLIENT)
public:
    const std::string& icon() const{ return _icon; }
private: 
    std::string _icon;
#endif

private:
    uint32 _id;
    uint32 _type;
    std::string _name;
    std::string _description;
    int _count;
    bool _allowUse;
    bool _allowDrop;
};

#if defined(COEUS_CLIENT)
    #include <QMetaType>
    Q_DECLARE_METATYPE(GameItem);
#endif

#endif // !__GAME_ITEM_H__
