#ifndef GAME_BAG_H
#define GAME_BAG_H

#include <QMainWindow>

namespace Ui { class GameBag; };
class GameBag : public QMainWindow
{
    Q_OBJECT

public:
    GameBag(QWidget *parent = 0);
    ~GameBag();

private:
    Ui::GameBag* _ui;
};

#endif // GAME_BAG_H
