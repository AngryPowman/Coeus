#ifndef __GAME_MAIN_H__
#define __GAME_MAIN_H__

#include "qt_coeus_common.h"

class GameStatusBarWidget;
class GameMapWidget;
class GameChatWidget;

namespace Ui { class GameMainDialog; };

class GameMain : public QMainWindow
{
    Q_OBJECT

public:
    GameMain(QWidget* parent = 0);
    virtual ~GameMain();

public:
    void initControl();

private slots:
    void slotOnAboutQT();

private:
    Ui::GameMainDialog* _ui;
    GameStatusBarWidget* _gameStatusBarWidget;
    GameMapWidget* _gameMapWidget;
    GameChatWidget* _gameChatWidget;
};

#endif // !__GAME_MAIN_H__
