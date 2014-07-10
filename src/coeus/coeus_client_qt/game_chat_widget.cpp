#include "game_chat_widget.h"
#include "ui_game_chat_widget.h"
#include "qt_coeus_common.h"

GameChatWidget::GameChatWidget(QWidget* parent)
    : QWidget(parent)
{
    _ui = new Ui::GameChatWidget();
    _ui->setupUi(this);

    connect(_ui->cmbChannel, SIGNAL(currentIndexChanged(int)), this, SLOT(slotChannelListIndexChanged(int)));
    connect(_ui->btnSend, SIGNAL(clicked()), this, SLOT(slotOnSendClicked()));

    _ui->cmbChannel->setCurrentIndex(ChatChannel::WorldChatChannel);
	slotChannelListIndexChanged(ChatChannel::WorldChatChannel);

    addChatMessage(ChatChannel::WorldChatChannel, "Test message in plain text.", "AngryPowman");
    addChatMessage(ChatChannel::WorldChatChannel, "Test <font color=red>message</font> in html.", "AngryPowman");
}

GameChatWidget::~GameChatWidget()
{
    delete _ui;
}

void GameChatWidget::addChatMessage(ChatChannel channel, const QString& message, const QString& targetName/* = ""*/)
{
    const static QString channelName[ChatChannelMaxFlag] = {"[世界]", "[私聊]", "[公会]", "[系统]"};

    QString speaker = "[<a href = \"#\">" + targetName + "</a>] ";
    QString content = channelName[channel] + (channel == ChatChannel::SystemChannel ? " " : speaker)+ message;

    _ui->txtAllMessages->append(content);
    switch (channel)
    {
    case WorldChatChannel:
        _ui->txtWorldMessages->append(content);
        break;
    case PrivateChatChannel:
        _ui->txtPrivateMessages->append(content);
        break;
    case GuildChatChannel:
        _ui->txtGuildMessages->append(content);
        break;
    case SystemChannel:
        _ui->txtSystemMessages->append(content);
        break;
    default:
        break;
    }
}

void GameChatWidget::slotChannelListIndexChanged(int index)
{
    _currentChannel = static_cast<ChatChannel>(index);
    _ui->cmbTargetName->setVisible(index == ChatChannel::PrivateChatChannel);
}

void GameChatWidget::slotOnSendClicked()
{
    if (_currentChannel == ChatChannel::PrivateChatChannel && _ui->cmbTargetName->currentText().isEmpty())
    {
        addChatMessage(ChatChannel::SystemChannel, QStringLiteral("必须输入一个昵称"));
        return;
    }

	if (_ui->txtChatMessage->text().isEmpty())
	{
		addChatMessage(ChatChannel::SystemChannel, QStringLiteral("你想说什么？"));
		return;
	}

//     switch (_currentChannel)
//     {
//         case ChatChannel::WorldChatChannel:
//         case ChatChannel::GuildChatChannel:
//         {
//             Protocol::CSSendPublicChatMessageReq publicChatMessageReq;
//             publicChatMessageReq.channel = _currentChannel;
//             publicChatMessageReq.message = _ui->txtChatMessage->text().toStdString();
//             GameNetwork::getInstance().sendMessage(Opcodes::CSSendPublicChatMessageReq, publicChatMessageReq);
//             break;
//         }
//         case ChatChannel::PrivateChatChannel:
//         {
//             Protocol::CSSendPrivateChatMessageByNameReq privateChatMessageByNameReq;
//             privateChatMessageByNameReq.target_name = _ui->cmbTargetName->currentText().toLocal8Bit();
//             privateChatMessageByNameReq.message = _ui->txtChatMessage->text().toStdString();
// 			GameNetwork::getInstance().sendMessage(Opcodes::CSSendPrivateChatMessageByNameReq, privateChatMessageByNameReq);
//             break;
//         }
//         default:
//             QMessageBox::critical(this, QStringLiteral("聊天"), QStringLiteral("No such channel."), QMessageBox::Yes);
//             break;
//     }
}

// void GameChatWidget::onPublicChatMessageNotification(const Protocol::SCPublicChatMessageNotification& publicChatMessagenotification)
// {
// 	addChatMessage(
// 		static_cast<ChatChannel>(publicChatMessagenotification.channel),
// 		QString::fromStdString(publicChatMessagenotification.message),
//         QString::fromLocal8Bit(publicChatMessagenotification.target_name.c_str())
// 		);
// }
// 
// void GameChatWidget::onPrivateChatMessageNotification(const Protocol::SCPrivateChatMessageNotification& privateChatMessagenotification)
// {
// 	addChatMessage(
// 		ChatChannel::PrivateChatChannel,
// 		QString::fromStdString(privateChatMessagenotification.message),
//         QString::fromLocal8Bit(privateChatMessagenotification.target_name.c_str())
// 		);
// }
