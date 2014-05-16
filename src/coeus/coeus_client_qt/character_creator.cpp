#include "character_creator.h"
#include "ui_character_creator_dialog.h"
#include "widget_manager.h"

CharacterCreator::CharacterCreator(QWidget* parent /*= 0*/)
    : QWizard(parent)
{
    _ui = new Ui::CharacterCreator;
    _ui->setupUi(this);
    _createRequest = new Protocol::CSCreateCharacterReq;

    addPage(WidgetManager::getInstance().characterCreator_IntrodutionPage());
    addPage(WidgetManager::getInstance().characterCreator_BaseInfoPage());
    addPage(WidgetManager::getInstance().characterCreator_CareerBeliefPage());
    addPage(WidgetManager::getInstance().characterCreator_CharacteristicPage());
    addPage(WidgetManager::getInstance().characterCreator_EpicPage());
    addPage(WidgetManager::getInstance().characterCreator_SummaryPage());

    setButtonText(QWizard::BackButton, QStringLiteral("��һ��"));
    setButtonText(QWizard::NextButton, QStringLiteral("��һ��"));
    setButtonText(QWizard::CancelButton, QStringLiteral("���ص�¼����"));
    setButtonText(QWizard::FinishButton, QStringLiteral("��ɴ���"));
}

CharacterCreator::~CharacterCreator()
{
    delete _createRequest;
    delete _ui;
}

bool CharacterCreator::validateCurrentPage()
{
    QWizardPage* finalPage = this->page(this->nextId());
    if (finalPage != nullptr && finalPage->isFinalPage())
    {
        WidgetManager::getInstance().characterCreator_SummaryPage()->updateDescriptions();
    }

    return currentPage()->validatePage();
}
/*
int CharacterCreator::nextId() const
{
    return 0;
}
*/
