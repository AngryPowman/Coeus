#include "character_creator_characteristic_page.h"
#include "ui_character_creator_characteristic_page.h"

CharacterCreator_CharacteristicPage::CharacterCreator_CharacteristicPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_CharacteristicPage();
    _ui->setupUi(this);
}

CharacterCreator_CharacteristicPage::~CharacterCreator_CharacteristicPage()
{
    delete _ui;
}

