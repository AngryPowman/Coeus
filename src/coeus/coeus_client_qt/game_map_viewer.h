#ifndef __GAME_MAP_VIEW_H__
#define __GAME_MAP_VIEW_H__

#include <QGraphicsView>

class GameMapViewer : public QGraphicsView
{
    Q_OBJECT

public:
    GameMapViewer(QWidget* parent = 0);
    ~GameMapViewer();

public:

private:
};

#endif // GAME_MAP_VIEW_H
