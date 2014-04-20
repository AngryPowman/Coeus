#ifndef __GAME_MAIN_H__
#define __GAME_MAIN_H__

#include "qt_coeus_common.h"
#include "ui_game_main_dialog.h"

class GameMain : public QMainWindow
{
    Q_OBJECT

public:
    GameMain(QWidget* parent = 0);
    virtual ~GameMain();

private:
    Ui::GameMainDialog _gameMainDialog;
};

#endif // !__GAME_MAIN_H__
