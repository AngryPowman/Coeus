#include "character_creator.h"
#include "ui_character_creator_dialog.h"
#include "widget_manager.h"

CharacterCreator::CharacterCreator(QWidget* parent /*= 0*/)
    : QWizard(parent)
{
    _ui = new Ui::CharacterCreator;
    _ui->setupUi(this);

    addPage(WidgetManager::getInstance().characterCreator_IntrodutionPage(this));
    addPage(WidgetManager::getInstance().characterCreator_BaseInfoPage(this));
    addPage(WidgetManager::getInstance().characterCreator_CareerBeliefPage(this));
    addPage(WidgetManager::getInstance().characterCreator_CharacteristicPage(this));
    addPage(WidgetManager::getInstance().characterCreator_EpicPage(this));
}

CharacterCreator::~CharacterCreator()
{

}

bool CharacterCreator::validateCurrentPage()
{
    return true;
}

int CharacterCreator::nextId() const
{
    return 0;
}

