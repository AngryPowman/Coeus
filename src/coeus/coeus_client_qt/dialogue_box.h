#ifndef DIALOGUE_BOX_H
#define DIALOGUE_BOX_H

#include <QWidget>
#include <venus_net/common.h>
#include "game_common/config/npc_config.h"

namespace Ui {class DialogueBox;};

class QVBoxLayout;
class NPCOptionLink;
class DialogueBox : public QWidget
{
    Q_OBJECT

public:
    DialogueBox(QWidget* parent = 0);
    ~DialogueBox();

    enum DialogueNodeType
    {
        DialogueNode,
        OptionNode
    };

public:
    void attackNPCData(uint32 npcId);
    void attackNPCData(NPCData* npcData);
    void showDialogueBox();

private:
    void loadAvatar(const QString& file);
    void updateDialogue(int index);
    void setPrevEnabled(bool value, bool visible = true);
    void setNextEnabled(bool value, bool visible = true);
    void updateOptions();
    void updateButtonState();
    void clearOptions();
    void showOptionDialogueBox(const NPCData::OptionDialogueNode& optionNode);

private slots:
    void slotOnPrevClicked();
    void slotOnNextClicked();
    void slotOnEndClicked();
    void onLinkClicked(NPCOptionLink* link);

protected:
    void paintEvent(QPaintEvent* event);

private:
    Ui::DialogueBox* _ui;
    NPCData* _npcData;
    int32 _dialoguePartIndex;
    QVBoxLayout* _linksLayout;
    std::vector<NPCOptionLink*> _optionLinks;
    const NPCData::DialogueNode* _currentDialogueNode;
};

#endif // DIALOGUE_BOX_H
