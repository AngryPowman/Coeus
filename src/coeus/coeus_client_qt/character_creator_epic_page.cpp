#include "character_creator_epic_page.h"
#include "ui_character_creator_epic_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

CharacterCreator_EpicPage::CharacterCreator_EpicPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_EpicPage();
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(EPIC_PAGE);
    layout->addWidget(leftWidget);
}

CharacterCreator_EpicPage::~CharacterCreator_EpicPage()
{
    delete _ui;
}

