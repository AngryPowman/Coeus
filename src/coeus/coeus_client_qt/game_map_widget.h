#ifndef GAME_MAP_WIDGET_H
#define GAME_MAP_WIDGET_H

#include <QWidget>

namespace Ui {class GameMapWidget;};
class WorldInfoSideBar;
class QSplitter;
class GameMapViewer;
class GameMapWidget : public QWidget
{
    Q_OBJECT

public:
    GameMapWidget(QWidget *parent = 0);
    ~GameMapWidget();

private:
    bool drawMapPicture(const QString& file);

private:
    Ui::GameMapWidget* _ui;
    WorldInfoSideBar* _worldInfoSideBar;
    QSplitter* _splitterMap;
    GameMapViewer* _mapViewer;
};

#endif // GAME_MAP_WIDGET_H
