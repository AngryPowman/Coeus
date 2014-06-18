#ifndef DIALOGUE_BOX_H
#define DIALOGUE_BOX_H

#include <QWidget>
#include <venus_net/common.h>

namespace Ui {class DialogueBox;};

struct NPCData;
class DialogueBox : public QWidget
{
    Q_OBJECT

public:
    DialogueBox(QWidget* parent = 0);
    ~DialogueBox();

public:
    void attackNPCData(uint32 npcId);
    void attackNPCData(NPCData* npcData);
    void showBox();
    void hideBox();
    void next();
    void prev();
    void onLinkClicked(int index);

private:
    void loadAvatar(const QString& file);
    void updateDialogue(int index);

private:
    Ui::DialogueBox* _ui;
    NPCData* _npcData;
    int32 _dialoguePartIndex;
};

#endif // DIALOGUE_BOX_H
