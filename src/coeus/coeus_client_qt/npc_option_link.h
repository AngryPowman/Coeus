#ifndef NPC_OPTION_LINK_H
#define NPC_OPTION_LINK_H

#include <QLabel>
#include <venus_net/common.h>
#include "game_common/config/npc_config.h"

class DialogueBox;
class QMouseEvent;
class NPCOptionLink : public QLabel
{
    Q_OBJECT

private:
    enum OptionLinkIcon
    {
        None,
        TalkOption,
        NewMissionOption,
    };
    friend class DialogueBox;

private:
    NPCOptionLink(const QString& text, const NPCData::OptionDialogueNode& optionNode, QWidget* parent = nullptr);
    ~NPCOptionLink();

private:
    void setLinkIconType(const OptionLinkIcon&& iconType);
    void setLinkText(const QString& text);
    inline const NPCData::OptionDialogueNode& optionNode() { return _optionNode; }

protected:
    void mouseReleaseEvent(QMouseEvent* event);

signals:
    void onClicked(NPCOptionLink* link);

private:
    OptionLinkIcon _optionLinkIcon;
    const NPCData::OptionDialogueNode& _optionNode;
};

#endif // NPC_OPTION_LINK_H
