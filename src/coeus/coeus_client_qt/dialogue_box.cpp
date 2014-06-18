#include "dialogue_box.h"
#include "ui_dialogue_box.h"
#include "widget_helper.h"
#include "game_common/config/npc_config.h"
#include <random>
#include "qt_coeus_common.h"

DialogueBox::DialogueBox(QWidget *parent)
    : QWidget(parent), _npcData(nullptr), _dialoguePartIndex(0)
{
    _ui = new Ui::DialogueBox;
    _ui->setupUi(this);
}

DialogueBox::~DialogueBox()
{
    delete _ui;
}

void DialogueBox::attackNPCData(uint32 npcId)
{
    const NPCData* npcData = NPCConfig::getInstance().getNPCById(npcId);
    attackNPCData(const_cast<NPCData*>(npcData));
}

void DialogueBox::attackNPCData(NPCData* npcData)
{
    _npcData = npcData;
}

void DialogueBox::loadAvatar(const QString& file)
{
    WidgetHelper::loadLablePicture(_ui->lblAvatar, _ui->lblAvatar->size(), file);
}

void DialogueBox::showBox()
{
    loadAvatar(QString::fromStdString(std::move(_npcData->avatar)));
    updateDialogue(_dialoguePartIndex);

    this->show();
}

void DialogueBox::updateDialogue(int index)
{
    const std::vector<NPCData::DialogueNode>& dialogue_tree = _npcData->dialogues.dialogue_tree;

    std::default_random_engine rdEngine(time(NULL));
    std::uniform_int_distribution<std::size_t> dis(0, dialogue_tree.size() - 1);
    
    const std::string& name = _npcData->name;
    const std::string& title = _npcData->title;

    size_t randomDialogueIndex = dis(rdEngine);
    const NPCData::DialogueNode& dialogueNode = dialogue_tree[randomDialogueIndex];
    const std::string& content = dialogueNode.dialogue_parts[_dialoguePartIndex];

    _ui->lblName->setText(
        "<b><font size=5>" + QString::fromStdString(name) + "</b></font>  " + QString::fromStdString(title));
    
    _ui->txtContent->setText(QString::fromStdString(std::move(content)));
    //if (!dialogueNode.dialogue_options.empty())
    //{
        
        QVBoxLayout* layout = new QVBoxLayout(_ui->linksWidget);
        for (size_t i = 0; i < 8; ++i)
        {
            QLabel* linkLabel = new QLabel("<a href='#'>用于测试的NPC对话选项 - " + QString::number(i) + "</a>");
            linkLabel->adjustSize();
            layout->addWidget(linkLabel);
        }

        this->adjustSize();
        this->updateGeometry();
    //}
}

void DialogueBox::hideBox()
{
    _dialoguePartIndex = 0;
    this->hide();
}

