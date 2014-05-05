#ifndef GAME_MAP_WIDGET_H
#define GAME_MAP_WIDGET_H

#include <QWidget>
namespace Ui {class GameMapWidget;};

class GameMapWidget : public QWidget
{
    Q_OBJECT

public:
    GameMapWidget(QWidget *parent = 0);
    ~GameMapWidget();

private:
    Ui::GameMapWidget* _ui;
};

#endif // GAME_MAP_WIDGET_H
