#include "character_creator_characteristic_page.h"
#include "ui_character_creator_characteristic_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

CharacterCreator_CharacteristicPage::CharacterCreator_CharacteristicPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_CharacteristicPage();
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(CHRACTERISTIC_PAGE);
    layout->addWidget(leftWidget);
}

CharacterCreator_CharacteristicPage::~CharacterCreator_CharacteristicPage()
{
    delete _ui;
}

