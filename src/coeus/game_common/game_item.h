#ifndef __GAME_ITEM_H__
#define __GAME_ITEM_H__

#include <string>

class GameItem
{
public:
    GameItem()
    {
        _icon = "images/ui/lsb_char_details.png";
        _name = "Magic Book";
        _description = "This is a rare book.";
        _count = 1;
    }

    virtual ~GameItem() {}

public:
    enum ItemType
    {

    };

public:
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
