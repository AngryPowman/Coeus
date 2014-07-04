#ifndef __MISSION_ADDON_IMPL_H__
#define __MISSION_ADDON_IMPL_H__

#include "game_common/scripting_addon.h"

class MissionAddonImpl : public ScriptingAddon
{
public:
    virtual void on_accept() {};

private:
    MissionAddonImpl(const MissionAddonImpl&);
    MissionAddonImpl& operator = (const MissionAddonImpl&);
};

#endif // !__MISSION_ADDON_IMPL_H__
