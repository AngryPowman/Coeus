#ifndef __CHARACTER_CONFIG_H__
#define __CHARACTER_CONFIG_H__

#include "game_common/game_define.h"
#include "game_common/config/configuration.h"

struct CharacterInfo
{
    std::string name;
    std::string detail;
    std::string avatar[Gender::GenderMax];
    std::string cg[Gender::GenderMax];
    std::string splash[Gender::GenderMax];
};

typedef std::vector<CharacterInfo> CharacterList;

class CharacterConfig
    : public Configuration, public Venus::Singleton<CharacterConfig>
{
public:
    bool parse();
    const CharacterList& characterList() { return _characterList; }

private:
    CharacterList _characterList;
};

#endif // __CHARACTER_CONFIG_H__