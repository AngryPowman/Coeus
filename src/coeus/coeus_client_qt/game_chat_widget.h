#ifndef GAME_CHAT_WIDGET_H
#define GAME_CHAT_WIDGET_H

#include <QWidget>
#include "game_common/game_define.h"

namespace Ui { class GameChatWidget; };

class GameChatWidget : public QWidget
{
    Q_OBJECT

public:
    GameChatWidget(QWidget* parent);
    ~GameChatWidget();

public:
    void addChatMessage(ChatChannel channel, const QString& message, const QString& speaker);

private:
    Ui::GameChatWidget* _ui;
};

#endif // GAME_CHAT_WIDGET_H
