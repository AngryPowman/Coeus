#include "character_creator_introdution_page.h"
#include "ui_character_creator_introdution_page.h"

CharacterCreator_IntrodutionPage::CharacterCreator_IntrodutionPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_IntrodutionPage;
    _ui->setupUi(this);
}

CharacterCreator_IntrodutionPage::~CharacterCreator_IntrodutionPage()
{

}
