#ifndef __GAME_LAUNCHER_H__
#define __GAME_LAUNCHER_H__

#include "game_login.h"
#include <QtWidgets/QtWidgets>
#include <QtWidgets/QApplication>
#include "widget_manager.h"
#include "game_opcode_registry.h"
#include "game_common/config/config_manager.h"

//configurations
#include "belif_config.h"
#include "config_loader.h"

class GameLauncher
{
public:
    static int run(int argc, char *argv[])
    {
        QApplication application(argc, argv);

        initEnvironment();
        initGameData();

        return application.exec();
    }

    static void initGameData()
    {
        ConfigLoader::getInstance().initialize(ConfigManager::getInstancePtr());
        ConfigManager::getInstance().start();
        ConfigManager::getInstance().wait();

        GameOpcodeRegistry::getInstance().initialize<GameHandler>();
        GameLogin* login = WidgetManager::getInstance().gameLogin();
        login->show();
    }

    static void initEnvironment()
    {
        QApplication::setStyle(QStyleFactory::create("Fusion"));
        QTextCodec::setCodecForLocale(QTextCodec::codecForName("system"));
    }
};

#endif // !__GAME_LAUNCHER_H__
