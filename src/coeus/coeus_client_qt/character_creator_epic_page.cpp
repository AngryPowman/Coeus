#include "character_creator_epic_page.h"
#include "ui_character_creator_epic_page.h"

CharacterCreator_EpicPage::CharacterCreator_EpicPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_EpicPage();
    _ui->setupUi(this);
}

CharacterCreator_EpicPage::~CharacterCreator_EpicPage()
{
    delete _ui;
}

