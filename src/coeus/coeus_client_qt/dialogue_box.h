#ifndef __DIALOGUE_BOX_H__
#define __DIALOGUE_BOX_H__

#include <venus_net/common.h>

class DialogueBoxWidget;
class DialogueBox
{
public:
    static void initialize(DialogueBoxWidget* widget);

public:
    static void showNPCDialogueBox(uint32 npcId);

private:
    static DialogueBoxWidget* _dialogueBoxWidget;
};

#endif // !__DIALOGUE_BOX_H__
