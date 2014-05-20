#include "game_chat_widget.h"
#include "ui_game_chat_widget.h"
#include "qt_coeus_common.h"

GameChatWidget::GameChatWidget(QWidget* parent)
    : QWidget(parent)
{
    _ui = new Ui::GameChatWidget();
    _ui->setupUi(this);

    addChatMessage(ChatChannel::WorldChatChannel, "Test message in plain text.", "AngryPowman");
    addChatMessage(ChatChannel::WorldChatChannel, "Test <font color=red>message</font> in html.", "AngryPowman");
}

GameChatWidget::~GameChatWidget()
{
    delete _ui;
}

void GameChatWidget::addChatMessage(ChatChannel channel, const QString& message, const QString& speaker)
{
    const static QString channelName[ChatChannelMaxFlag] = {"[世界]", "[私聊]", "[公会]", "[系统]"};

    QString content = "<b>" + channelName[channel] + "</b>[<a href=\"#\">" + speaker + "</a>] " + message;
    switch (channel)
    {
    case WorldChatChannel:
        _ui->txtWorldChat->append(content);
        break;
    case PrivateChatChannel:
        break;
    case GuildChatChannel:
        break;
    case SystemChannel:
        break;
    default:
        break;
    }
}
