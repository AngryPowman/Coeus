#include "game_launcher.h"
#include <QtPlugin>

Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin);

int main(int argc, char *argv[])
{
    GameLauncher launcher;
    return launcher.run(argc, argv);
}
