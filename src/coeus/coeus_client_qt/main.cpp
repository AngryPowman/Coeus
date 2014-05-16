#include "game_launcher.h"
#include <QtPlugin>

#if defined(_WIN32)
#ifdef _DEBUG
#define DEBUG_CLIENTBLOCK    new( _CLIENT_BLOCK, __FILE__, __LINE__)
#else
#define DEBUG_CLIENTBLOCK
#endif
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#ifdef _DEBUG
#define new DEBUG_CLIENTBLOCK
#endif
#endif

Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin);

int main(int argc, char *argv[])
{

#if QT_VERSION < QT_VERSION_CHECK(5,0,0)
#if defined(_MSC_VER) && (_MSC_VER < 1600)
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GB18030-0"));
#else  
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
#endif  
#endif

    int ret = GameLauncher::run(argc, argv);

#if defined(_WIN32)
    //_CrtDumpMemoryLeaks();
#endif
    
    return ret;
}
