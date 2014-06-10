#include "game_map_view.h"
#include "ui_game_map_view.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

GameMapView::GameMapView(QWidget *parent)
    : QMainWindow(parent)
{
    _ui = new Ui::GameMapView();
    _ui->setupUi(this);

    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);

    QPixmap pixmap("images/map/sample_map.jpg");
    QGraphicsScene *scene = new QGraphicsScene;
    QGraphicsPixmapItem *item = new QGraphicsPixmapItem;
    _ui->mapView->setScene(scene);
    item->setPixmap(pixmap);
    scene->addItem(item);
    item->setPos(0, 0);
}

GameMapView::~GameMapView()
{
    delete _ui;
}

