#ifndef GAME_MAP_VIEW_H
#define GAME_MAP_VIEW_H

#include <QMainWindow>
namespace Ui {class GameMapView;};

class GameMapWidget;
class DialogueBox;
class GameMapView : public QMainWindow
{
    Q_OBJECT

public:
    enum ButtomWidgetView
    {
        GeneralView,
        DialogueView,
    };

public:
    GameMapView(QWidget *parent = 0);
    ~GameMapView();

public:
    void changeButtomWidgetView(ButtomWidgetView view);

private:
    Ui::GameMapView* _ui;
    GameMapWidget* _gameMapWidget;
    DialogueBox* _dialogueBox;
};

#endif // GAME_MAP_VIEW_H
