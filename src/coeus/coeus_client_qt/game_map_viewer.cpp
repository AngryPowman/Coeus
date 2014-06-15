#include "game_map_viewer.h"

GameMapViewer::GameMapViewer(QWidget* parent)
    : QGraphicsView(parent)
{
    this->setDragMode(QGraphicsView::DragMode::ScrollHandDrag);
    this->setInteractive(true);
;}

GameMapViewer::~GameMapViewer()
{

}