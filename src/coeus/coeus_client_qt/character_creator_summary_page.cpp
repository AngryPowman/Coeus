#include "character_creator_summary_page.h"
#include "ui_character_creator_summary_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"
#include "character_config.h"
#include "qt_coeus_common.h"

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
    QString nickname = wizard()->property("nickname").toString();
    Gender gender = static_cast<Gender>(wizard()->property("gender").toInt());
    CharacterType character_type = static_cast<CharacterType>(wizard()->property("character_type").toInt());

    QString content = "我叫" + nickname + "，是一名" +((gender == Gender::Male) ? "男性" : "女性") + 
        QString(CharacterConfig::getInstance().toName(character_type).c_str()) + "。";

    _ui->txtMyEpic->setText(
        content
        );
}