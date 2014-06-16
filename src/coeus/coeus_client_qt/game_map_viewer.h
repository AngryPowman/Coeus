#ifndef __GAME_MAP_VIEW_H__
#define __GAME_MAP_VIEW_H__

#include <QGraphicsView>

class QTimer;
class DialogueBox;
class GameMapViewer : public QGraphicsView
{
    Q_OBJECT

public:
    GameMapViewer(QWidget* parent = 0);
    ~GameMapViewer();

public:
    void wheelEvent(QWheelEvent* event);

private slots:
    void scaleAnimationProcess();

private:
    struct AinimateFactor
    {
        qreal startFactor;
        qreal endFactor;
    };

    int _zoom;
    AinimateFactor _animateFactorCached;
    QTimer* _scaleAnimationTimer;
    DialogueBox* _dialogueBox;
};

#endif // GAME_MAP_VIEW_H
