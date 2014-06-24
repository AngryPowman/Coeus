#include "game_map_viewer.h"
#include "dialogue_box_widget.h"
#include "widget_helper.h"
#include "dialogue_box.h"
#include <QWheelEvent>
#include <QScrollBar>
#include <QTimer>
#include <QDebug>
#include <QLabel>

GameMapViewer::GameMapViewer(QWidget* parent)
    : QGraphicsView(parent), _zoom(0)
{
    this->setDragMode(QGraphicsView::DragMode::ScrollHandDrag);
    this->setInteractive(true);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    _dialogueBox = new DialogueBoxWidget(this);
    this->resizeEvent(nullptr);

    DialogueBox::initialize(_dialogueBox);

    _scaleAnimationTimer = new QTimer(parent);
    connect(_scaleAnimationTimer, SIGNAL(timeout()), SLOT(scaleAnimationProcess()));
}

GameMapViewer::~GameMapViewer()
{

}

void GameMapViewer::wheelEvent(QWheelEvent* event)
{
    
    const QPointF pscene = mapToScene(event->pos());

    int delta = event->delta();
    qreal factor = std::pow(1.00052, delta);
    qDebug() << _zoom;

    int zoomBlock = _zoom + event->delta();
    if (zoomBlock > 400 || zoomBlock < -200)
    {
        return;
    }

    _zoom += delta;
    
    scale(factor, factor);

    const QPointF p1mouse = mapFromScene(pscene);
    const QPointF move = p1mouse - event->pos();
    horizontalScrollBar()->setValue(move.x() + horizontalScrollBar()->value());
    verticalScrollBar()->setValue(move.y() + verticalScrollBar()->value());
}

void GameMapViewer::scaleAnimationProcess()
{

}

void GameMapViewer::resizeEvent(QResizeEvent* event)
{
    if (_dialogueBox != nullptr)
    {
        _dialogueBox->setGeometry(
            this->width() / 2 - _dialogueBox->width() / 2,
            this->geometry().bottom() - _dialogueBox->height() - 50,
            _dialogueBox->width(),
            _dialogueBox->height());
    }
}
