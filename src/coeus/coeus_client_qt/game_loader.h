#ifndef GAME_LOADER_H
#define GAME_LOADER_H

#include <QWidget>
namespace Ui {class GameLoader;};

class GameLoader : public QWidget
{
    Q_OBJECT

public:
    GameLoader(QWidget *parent = 0);
    ~GameLoader();

private:
    Ui::GameLoader *ui;
};

#endif // GAME_LOADER_H
