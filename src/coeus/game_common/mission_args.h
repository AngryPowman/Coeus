#ifndef __MISSION_ARGS_H__
#define __MISSION_ARGS_H__

#include <venus_net/common.h>

class MissionArgs
{
public:
    MissionArgs(std::size_t size)
    {
        _args = new int32[size];
    }

    virtual ~MissionArgs()
    {
        SAFE_DELETE(_args);
    }

public:
    bool setValue(std::size_t index, int32 value)
    {
        _args[index] = value;
    }

private:
    int32* _args;
};

#endif // !__MISSION_ARGS_H__
