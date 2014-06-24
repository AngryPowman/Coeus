#include "dialogue_box.h"
#include "dialogue_box_widget.h"

DialogueBoxWidget* DialogueBox::_dialogueBoxWidget = nullptr;
void DialogueBox::initialize(DialogueBoxWidget* widget)
{
    _dialogueBoxWidget = widget;
}

void DialogueBox::showNPCDialogueBox(uint32 npcId)
{
    const NPCData* npcData = NPCConfig::getInstance().getNPCById(npcId);
    if (npcData != nullptr)
    {
        _dialogueBoxWidget->attackNPCData(const_cast<NPCData*>(npcData));
        _dialogueBoxWidget->showBox();
    }
}
