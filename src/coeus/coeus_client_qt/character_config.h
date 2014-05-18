#ifndef __CHARACTER_CONFIG_H__
#define __CHARACTER_CONFIG_H__

#include "game_common/game_define.h"
#include "game_common/config/configuration.h"

struct CharacterInfo
{
    std::string name;
    std::string detail;
    std::string avatar[Gender::GenderMaxFlag];
    std::string cg[Gender::GenderMaxFlag];
    std::string splash[Gender::GenderMaxFlag];
};

typedef std::vector<CharacterInfo> CharacterList;

class CharacterConfig
    : public Configuration, public Venus::Singleton<CharacterConfig>
{
public:
    bool parse();
    const CharacterList& characterList() { return _characterList; }
    const std::string& toName(CharacterType type) { return _characterList[type].name; }

private:
    CharacterList _characterList;
};

#endif // __CHARACTER_CONFIG_H__