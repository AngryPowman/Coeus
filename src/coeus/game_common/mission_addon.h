#ifndef __MISSION_ADDON_H__
#define __MISSION_ADDON_H__

class MissionAddonImpl;
class MissionAddon
{
public:
    MissionAddon(MissionAddonImpl* impl);
    virtual ~MissionAddon();

private:
    MissionAddonImpl* _impl;
};

#endif // !__MISSION_ADDON_H__
