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
    connect(_ui->btnEnd, SIGNAL(clicked()), this, SLOT(slotOnEndClicked()));
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

    loadAvatar(QString::fromStdString(std::move(_npcData->avatar)));
    const std::string& name = _npcData->name;
    const std::string& title = _npcData->title;

    _ui->lblName->setText(
        "<b><font size=5>" + QString::fromStdString(name) + "</b></font>  " + QString::fromStdString(title));
}

void DialogueBox::loadAvatar(const QString& file)
{
    WidgetHelper::loadLablePicture(_ui->lblAvatar, _ui->lblAvatar->size(), file);
}

void DialogueBox::showDialogueBox()
{
    _dialoguePartIndex = 0;

    // Get a random dialogue node
    const std::vector<NPCData::DialogueNode>& dialogue_tree = _npcData->dialogues.dialogue_tree;
    std::default_random_engine rdEngine(time(NULL));
    std::uniform_int_distribution<std::size_t> dis(0, dialogue_tree.size() - 1);

    size_t randomDialogueIndex = dis(rdEngine);
    _currentDialogueNode = &dialogue_tree[randomDialogueIndex];

    // Update current dialogue index
    updateDialogue(0);
    updateButtonState();
    this->show();
}

void DialogueBox::showOptionDialogueBox(const NPCData::OptionDialogueNode& optionNode)
{
    _dialoguePartIndex = 0;
    _currentDialogueNode = dynamic_cast<const NPCData::DialogueNode*>(&optionNode);

    // Update current dialogue index
    updateDialogue(0);
    updateButtonState();
}

void DialogueBox::updateDialogue(int index)
{
    if (!_currentDialogueNode->dialogue_parts.empty())
    {
        const std::string& content = _currentDialogueNode->dialogue_parts[_dialoguePartIndex];
        _ui->txtContent->setText(QString::fromStdString(std::move(content)));
    }
    else
    {
        this->hide();
    }

    updateOptions();

    this->adjustSize();
    this->updateGeometry();
}

void DialogueBox::setPrevEnabled(bool value, bool visible/* = false*/)
{
    _ui->btnPrev->setEnabled(value);
    _ui->btnPrev->setVisible(visible);
}

void DialogueBox::setNextEnabled(bool value, bool visible/* = false*/)
{
    _ui->btnNext->setEnabled(value);
    _ui->btnNext->setVisible(visible);
}

void DialogueBox::updateOptions()
{
    clearOptions();

    // load options if the end of dialogues part
    if (_dialoguePartIndex == _currentDialogueNode->dialogue_parts.size() - 1 &&
        !_currentDialogueNode->dialogue_options.empty())
    {
        for (std::size_t i = 0; i < _currentDialogueNode->dialogue_options.size(); ++i)
        {
            const NPCData::OptionDialogueNode& optionDialogueNode = _currentDialogueNode->dialogue_options[i];
            NPCOptionLink* link = new NPCOptionLink(QString::fromStdString(optionDialogueNode.option_content), optionDialogueNode);
            connect(link, SIGNAL(onClicked(NPCOptionLink*)), this, SLOT(onLinkClicked(NPCOptionLink*)));
            _linksLayout->addWidget(link);
            _optionLinks.push_back(link);
        }
    }
}

void DialogueBox::clearOptions()
{
    for (NPCOptionLink* link : _optionLinks)
    {
        delete link;
        link = nullptr;
    }
    _optionLinks.clear();
}

void DialogueBox::slotOnPrevClicked()
{
    updateDialogue(_dialoguePartIndex--);
    updateButtonState();
}

void DialogueBox::slotOnNextClicked()
{
    updateDialogue(_dialoguePartIndex++);
    updateButtonState();
}

void DialogueBox::updateButtonState()
{
    setPrevEnabled(
        !(_dialoguePartIndex <= 0), 
        !(_currentDialogueNode->dialogue_parts.size() == 1));
    setNextEnabled(
        !(_dialoguePartIndex >= _currentDialogueNode->dialogue_parts.size() - 1), 
        !(_currentDialogueNode->dialogue_parts.size() == 1));
}

void DialogueBox::onLinkClicked(NPCOptionLink* link)
{
    const NPCData::OptionDialogueNode& optionNode = link->optionNode();
    showOptionDialogueBox(optionNode);
}

void DialogueBox::slotOnEndClicked()
{
    this->hide();
}
