#ifndef __GAME_MAIN_H__
#define __GAME_MAIN_H__

#include "qt_coeus_common.h"

class GameStatusBarWidget;
class GameMapWidget;
class GameChatWidget;
class QSplitter;

namespace Ui { class GameMainDialog; };

enum GameView
{
    GV_MOVIE,
    GV_CHAR_CREATOR,
    GV_DATA_LOADER,
    GV_GENERAL
};

class GameMain : public QMainWindow
{
    Q_OBJECT

public:
    GameMain(QWidget* parent = 0);
    virtual ~GameMain();

public:
    void initControl();

public:
    void initGame(bool needCreate = false);
    void loadGameData();
    void changeView(GameView gameView);

private slots:
    void slotOnAboutQT();
    void slotOnBagActionTriggered(bool checked);
	void resizeEvent(QResizeEvent* event);

private:
    Ui::GameMainDialog* _ui;
	Qt::WindowFlags _defaultWindowFlags;
	GameView _currentView;
	QSize _orginSize;
    QSplitter* _splitterMain;
};

#endif // !__GAME_MAIN_H__
