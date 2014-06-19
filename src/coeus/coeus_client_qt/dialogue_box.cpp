#include "dialogue_box.h"
#include "ui_dialogue_box.h"
#include "widget_helper.h"
#include <random>
#include "qt_coeus_common.h"
#include "npc_option_link.h"

DialogueBox::DialogueBox(QWidget *parent)
    : QWidget(parent), _npcData(nullptr), _dialoguePartIndex(0), _currentDialogueNode(nullptr)
{
    _ui = new Ui::DialogueBox;
    _ui->setupUi(this);

    _linksLayout = new QVBoxLayout(_ui->linksWidget);

    connect(_ui->btnPrev, SIGNAL(clicked()), this, SLOT(slotOnPrevClicked()));
    connect(_ui->btnNext, SIGNAL(clicked()), this, SLOT(slotOnNextClicked()));
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
    _dialoguePartIndex = 0;
}

void DialogueBox::loadAvatar(const QString& file)
{
    WidgetHelper::loadLablePicture(_ui->lblAvatar, _ui->lblAvatar->size(), file);
}

void DialogueBox::showDialogueBox()
{
    _dialoguePartIndex = 0;

    loadAvatar(QString::fromStdString(std::move(_npcData->avatar)));
    const std::string& name = _npcData->name;
    const std::string& title = _npcData->title;

    _ui->lblName->setText(
        "<b><font size=5>" + QString::fromStdString(name) + "</b></font>  " + QString::fromStdString(title));

    // Get a random dialogue node
    const std::vector<NPCData::DialogueNode>& dialogue_tree = _npcData->dialogues.dialogue_tree;
    std::default_random_engine rdEngine(time(NULL));
    std::uniform_int_distribution<std::size_t> dis(0, dialogue_tree.size() - 1);

    size_t randomDialogueIndex = dis(rdEngine);
    _currentDialogueNode = &dialogue_tree[randomDialogueIndex];

    // Update current dialogue index
    updateDialogue(0);

    this->show();
}

void DialogueBox::updateDialogue(int index)
{
    const std::string& content = _currentDialogueNode->dialogue_parts[_dialoguePartIndex];

    _ui->txtContent->setText(QString::fromStdString(std::move(content)));

    // load options if the end of dialogues part
    if (_currentDialogueNode->dialogue_parts.size() <= 1)
    {
        setPrevEnabled(false);
        setNextEnabled(false);
        updateOptions();
    }
    else
    {
        setPrevEnabled(true);
        setNextEnabled(true);
    }

    this->adjustSize();
    this->updateGeometry();
}

void DialogueBox::hideBox()
{
    this->hide();
}

void DialogueBox::setPrevEnabled(bool value)
{
    _ui->btnPrev->setEnabled(value);
}

void DialogueBox::setNextEnabled(bool value)
{
    _ui->btnNext->setEnabled(value);
}

void DialogueBox::updateOptions()
{
    // clear options
    for (QObject* object : _linksLayout->children())
    {
        _linksLayout->removeWidget(dynamic_cast<QWidget*>(object));
    }

    if (!_currentDialogueNode->dialogue_options.empty())
    {
        for (const NPCData::OptionDialogueNode& optionDialogueNode : _currentDialogueNode->dialogue_options)
        {
            NPCOptionLink* link = new NPCOptionLink(QString::fromStdString(optionDialogueNode.option_content));
            _linksLayout->addWidget(link);
        }
    }
}

void DialogueBox::slotOnPrevClicked()
{

}

void DialogueBox::slotOnNextClicked()
{
    updateDialogue(_dialoguePartIndex++);
}

