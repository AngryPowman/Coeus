#ifndef GAME_BAG_H
#define GAME_BAG_H

#include <QMainWindow>


namespace Ui { class GameBag; };
class GameItem;
class GameItemModel;
class GameBag : public QMainWindow
{
    Q_OBJECT

public:
    GameBag(QWidget *parent = 0);
    ~GameBag();

public:
    void addItem(const GameItem& gameItem);

private:
    Ui::GameBag* _ui;
    GameItemModel* _itemModel;
};

#endif // GAME_BAG_H
