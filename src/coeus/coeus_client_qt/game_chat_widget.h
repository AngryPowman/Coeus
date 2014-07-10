#ifndef GAME_CHAT_WIDGET_H
#define GAME_CHAT_WIDGET_H

#include <QWidget>
#include "qt_coeus_common.h"
#include "game_common/game_define.h"

namespace Ui { class GameChatWidget; };

class GameChatWidget : public QWidget
{
    Q_OBJECT

public:
    GameChatWidget(QWidget* parent);
    ~GameChatWidget();

public:
	//void onPublicChatMessageNotification(const Protocol::SCPublicChatMessageNotification& publicChatMessagenotification);
	//void onPrivateChatMessageNotification(const Protocol::SCPrivateChatMessageNotification& privateChatMessagenotification);
    void addChatMessage(ChatChannel channel, const QString& message, const QString& targetName = "");

private slots:
    void slotChannelListIndexChanged(int index);
    void slotOnSendClicked();

private:
    Ui::GameChatWidget* _ui;
    ChatChannel _currentChannel;
};

#endif // GAME_CHAT_WIDGET_H
