#ifndef GAME_MAP_VIEW_H
#define GAME_MAP_VIEW_H

#include <QMainWindow>
namespace Ui {class GameMapView;};

class GameMapView : public QMainWindow
{
    Q_OBJECT

public:
    GameMapView(QWidget *parent = 0);
    ~GameMapView();

private:
    Ui::GameMapView* _ui;
};

#endif // GAME_MAP_VIEW_H
