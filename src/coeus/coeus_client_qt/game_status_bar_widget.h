#ifndef GAME_STATUS_BAR_WIDGET_H
#define GAME_STATUS_BAR_WIDGET_H

#include <QWidget>

namespace Ui { class GameStatusBarWidget; };

class GameStatusBarWidget : public QWidget
{
    Q_OBJECT

public:
    GameStatusBarWidget(QWidget *parent);
    ~GameStatusBarWidget();

private:
    Ui::GameStatusBarWidget* _ui;
};

#endif // GAME_STATUS_BAR_WIDGET_H
