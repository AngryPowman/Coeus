#ifndef __MISSION_SCRIPTING_APIS_H__
#define __MISSION_SCRIPTING_APIS_H__

#include <z_lua_bind/z_lua_bind.h>


// Accept a mission with the given mission id.
// Param[0] : mission_id
// Returns false value if the mission available or not meet the mission conditions
int accept_mission(lua_State* L);

// Check if the given mission(id) finished.
// Param[0] : mission_id
// Returns true if the mission has finished.
int is_finished_mission(lua_State* L);

// Do finish a mission.
// Param[0] : mission_id
// Returns true if the mission finished.
int finished_mission(lua_State* L);

// Get the count of the ongoing missions
// Returns the number of the ongoing missions
int mission_count(lua_State* L);

#endif