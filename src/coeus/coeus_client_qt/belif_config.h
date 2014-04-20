#ifndef __BELIEF_CONFIG_H__
#define __BELIEF_CONFIG_H__

#include "game_common/config/configuration.h"

struct Belif
{
    std::string beliefName;
    std::string beliefDesc;
    std::string beliefBadgePicture;
};

typedef std::vector<Belif> BelifList;

class BeliefConfig
    : public Configuration, public Venus::Singleton<BeliefConfig>
{
public:
    bool parse();
    const BelifList& belifList() { return _belifList; }

private:
    BelifList _belifList;
};

#endif // __BELIEF_CONFIG_H_