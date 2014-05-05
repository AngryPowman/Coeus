#ifndef GAME_CHAT_WIDGET_H
#define GAME_CHAT_WIDGET_H

#include <QWidget>

namespace Ui { class GameChatWidget; };

class GameChatWidget : public QWidget
{
    Q_OBJECT

public:
    GameChatWidget(QWidget* parent);
    ~GameChatWidget();

private:
    Ui::GameChatWidget* _ui;
};

#endif // GAME_CHAT_WIDGET_H
