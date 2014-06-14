#include "game_map_view.h"
#include "ui_game_map_view.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include "game_map_widget.h"
#include "dialogue_box.h"

GameMapView::GameMapView(QWidget *parent)
    : QMainWindow(parent)
{
    _ui = new Ui::GameMapView();
    _ui->setupUi(this);

//     QPixmap pixmap("images/map/sample_map.jpg");
//     QGraphicsScene *scene = new QGraphicsScene;
//     QGraphicsPixmapItem *item = new QGraphicsPixmapItem;
//     _ui->mapView->setScene(scene);
//     item->setPixmap(pixmap);
//     scene->addItem(item);
//     item->setPos(0, 0);

    _dialogueBox = new DialogueBox();
    _gameMapWidget = new GameMapWidget(parent);
    this->setCentralWidget(_gameMapWidget);

    changeButtomWidgetView(GeneralView);
;}

GameMapView::~GameMapView()
{
    delete _ui;
}

void GameMapView::changeButtomWidgetView(ButtomWidgetView view)
{
    if (view == GeneralView)
    {
        _ui->buttomInfoTabWidget->setVisible(false);
        _ui->dockWidget->setWidget(_dialogueBox);
    }
}

