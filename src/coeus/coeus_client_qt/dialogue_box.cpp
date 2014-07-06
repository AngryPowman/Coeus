#include "dialogue_box.h"
#include "dialogue_box_widget.h"
#include "game_common/npc_scripting_addon.h"

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

        // Script Addon : on_start_dialogue()
        const NPCData* npcData = NPCConfig::getInstance().getNPCById(1000);
        NPCScriptingAddon scriptingAddon(npcData);
        scriptingAddon.on_start_dialogue();

        _dialogueBoxWidget->showBox();
    }
}
