#include "character_creator_summary_page.h"
#include "ui_character_creator_summary_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

CharacterCreator_SummaryPage::CharacterCreator_SummaryPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_SummaryPage();
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(SUMMARY_PAGE);
    layout->addWidget(leftWidget);
}

CharacterCreator_SummaryPage::~CharacterCreator_SummaryPage()
{
    delete _ui;
}

void CharacterCreator_SummaryPage::updateDescriptions()
{
    _ui->txtMyEpic->setText(QStringLiteral(""));
}

