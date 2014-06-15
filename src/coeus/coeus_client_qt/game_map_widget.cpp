#include "game_map_widget.h"
#include "ui_game_map_widget.h"
#include "world_info_side_bar.h"
#include <QSplitter>
#include <QHBoxLayout>
#include <QGraphicsPixmapItem>
#include "game_map_viewer.h"

GameMapWidget::GameMapWidget(QWidget* parent)
    : QWidget(parent)
{
    _ui = new Ui::GameMapWidget();
    _ui->setupUi(this);

    _splitterMap = new QSplitter(Qt::Horizontal);
    QHBoxLayout* hBoxLayout = new QHBoxLayout(this);
    hBoxLayout->setContentsMargins(0, 0, 0, 0);
    this->setLayout(hBoxLayout);

    //splitterMap->setOpaqueResize(true);
    hBoxLayout->addWidget(_splitterMap);
    _mapViewer = new GameMapViewer();
    _mapViewer->setAcceptDrops(true);

    _worldInfoSideBar = new WorldInfoSideBar();

    _splitterMap->addWidget(_mapViewer);
    _splitterMap->addWidget(_worldInfoSideBar);
    _splitterMap->setStretchFactor(0, 1);
    _splitterMap->setStretchFactor(1, 0);

    drawMapPicture("images/map/kga.jpeg");
}

GameMapWidget::~GameMapWidget()
{
    delete _ui;
}

bool GameMapWidget::drawMapPicture(const QString& file)
{
    QPixmap pixmap(file);
    QGraphicsScene* scene = new QGraphicsScene;
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem;
    _mapViewer->setScene(scene);
    item->setPixmap(pixmap);
    scene->addItem(item);
    item->setPos(100, 200);

    return true;
}

