#ifndef DIALOGUE_BOX_H
#define DIALOGUE_BOX_H

#include <QWidget>
#include <venus_net/common.h>
#include "game_common/config/npc_config.h"

namespace Ui {class DialogueBox;};

class QVBoxLayout;
class DialogueBox : public QWidget
{
    Q_OBJECT

public:
    DialogueBox(QWidget* parent = 0);
    ~DialogueBox();

public:
    void attackNPCData(uint32 npcId);
    void attackNPCData(NPCData* npcData);
    void showDialogueBox();
    void hideBox();
    void onLinkClicked(int index);

private:
    void loadAvatar(const QString& file);
    void updateDialogue(int index);
    void setPrevEnabled(bool value);
    void setNextEnabled(bool value);
    void updateOptions();

private slots:
    void slotOnPrevClicked();
    void slotOnNextClicked();

private:
    Ui::DialogueBox* _ui;
    NPCData* _npcData;
    int32 _dialoguePartIndex;
    QVBoxLayout* _linksLayout;
    const NPCData::DialogueNode* _currentDialogueNode;
};

#endif // DIALOGUE_BOX_H
