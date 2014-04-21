#include "game_launcher.h"
#include <QtPlugin>

Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin);

#if QT_VERSION < QT_VERSION_CHECK(5,2,1)
#if defined(_MSC_VER) && (_MSC_VER < 1600)  
QTextCodec::setCodecForTr(QTextCodec::codecForName("GB18030-0"));
#else  
QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
#endif  
#endif

int main(int argc, char *argv[])
{
    GameLauncher launcher;
    return launcher.run(argc, argv);
}
