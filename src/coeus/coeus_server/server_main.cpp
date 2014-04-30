#include "game_service_application.h"

int main(int argc, char* argv[])
{
    GameServiceApplication serverApp("GameServer1");

    int ret = serverApp.start(argc, argv);

#ifdef _WIN32
#define _CRTDBG_MAP_ALLOC
    _CrtDumpMemoryLeaks();
#endif

    return ret;
}