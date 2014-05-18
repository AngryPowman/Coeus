#include "character_creator_epic_page.h"
#include "ui_character_creator_epic_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

CharacterCreator_EpicPage::CharacterCreator_EpicPage(QWidget *parent)
    : QWizardPage(parent), 
    _familyType(Epic::FamilyType::AnofficialFamily),
    _storyType(Epic::StoryType::FinderStory)
{
    _ui = new Ui::CharacterCreator_EpicPage();
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(EPIC_PAGE);
    layout->addWidget(leftWidget);

    connect(_ui->btnGroup_FamilyType, SIGNAL(buttonClicked(int)), this, SLOT(onFamilyTypeChanged(int)));
    connect(_ui->btnGroup_StoryType, SIGNAL(buttonClicked(int)), this, SLOT(onStoryTypeChanged(int)));

    _ui->btnGroup_FamilyType->setId(_ui->rdbAnofficialFamily, Epic::FamilyType::AnofficialFamily);
    _ui->btnGroup_FamilyType->setId(_ui->rdbRichFamily, Epic::FamilyType::RichFamily);
    _ui->btnGroup_FamilyType->setId(_ui->rdbCommonFamily, Epic::FamilyType::CommonFamily);
    _ui->btnGroup_FamilyType->setId(_ui->rdbNeedyFamily, Epic::FamilyType::NeedyFamily);

    _ui->btnGroup_StoryType->setId(_ui->rdbFinderStory, Epic::StoryType::FinderStory);
    _ui->btnGroup_StoryType->setId(_ui->rdbSeekerStory, Epic::StoryType::SeekerStory);
    _ui->btnGroup_StoryType->setId(_ui->rdbChallengerStory, Epic::StoryType::ChallengerStory);

    _ui->rdbAnofficialFamily->setChecked(true);
    _ui->rdbFinderStory->setChecked(true);
}

CharacterCreator_EpicPage::~CharacterCreator_EpicPage()
{
    delete _ui;
}

void CharacterCreator_EpicPage::onFamilyTypeChanged(int id)
{
    _familyType = static_cast<Epic::FamilyType>(id);
}

void CharacterCreator_EpicPage::onStoryTypeChanged(int id)
{
    _storyType = static_cast<Epic::StoryType>(id);
}

bool CharacterCreator_EpicPage::validatePage()
{
    wizard()->setProperty("family_type", _familyType);
    wizard()->setProperty("story_type", _storyType);

    return true;
}
