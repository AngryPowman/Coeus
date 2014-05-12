#include "character_creator_introdution_page.h"
#include "ui_character_creator_introdution_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

CharacterCreator_IntrodutionPage::CharacterCreator_IntrodutionPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_IntrodutionPage;
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(INTRODUCTION_PAGE);
    layout->addWidget(leftWidget);
}

CharacterCreator_IntrodutionPage::~CharacterCreator_IntrodutionPage()
{

}
