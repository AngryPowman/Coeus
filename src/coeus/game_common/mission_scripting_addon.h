#ifndef __MISSION_SCRIPTING_ADDON_H__
#define __MISSION_SCRIPTING_ADDON_H__

#include "game_common/scripting_addon.h"

struct MissionData;
class MissionScriptingAddon : public ScriptingAddon
{
public:
    MissionScriptingAddon(const MissionData* missionData);
    virtual ~MissionScriptingAddon();

public:
    void register_functions();

public:
    bool on_check_conditions();
    void on_accepted_mission();
    void on_finished_mission();
};


#endif // !__MISSION_SCRIPTING_ADDON_H__
