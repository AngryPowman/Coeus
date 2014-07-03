#ifndef __MISSION_CAST_H__
#define __MISSION_CAST_H__

class Mission;
class MissionCast
{
    friend MissionManager;

protected:
    template <typename T>
    T* misionCast(Mission* mission)
    {
        return dynamic_cast<T*>(mission);
    }
};

#endif // !__MISSION_CAST_H__
