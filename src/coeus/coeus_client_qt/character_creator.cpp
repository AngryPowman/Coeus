#include "character_creator.h"
#include "ui_character_creator_dialog.h"
#include "widget_manager.h"

CharacterCreator::CharacterCreator(QWidget* parent /*= 0*/)
    : QWizard(parent),
    _leftMouseButtonPressed(false)
{
    _ui = new Ui::CharacterCreator;
    _ui->setupUi(this);
    _createRequest = new Protocol::CSCreateCharacter;

    addPage(WidgetManager::getInstance().characterCreator_IntrodutionPage());
    addPage(WidgetManager::getInstance().characterCreator_BaseInfoPage());
    addPage(WidgetManager::getInstance().characterCreator_CareerBeliefPage());
    addPage(WidgetManager::getInstance().characterCreator_CharacteristicPage());
    addPage(WidgetManager::getInstance().characterCreator_EpicPage());
    addPage(WidgetManager::getInstance().characterCreator_SummaryPage());

    setButtonText(QWizard::BackButton, "上一步");
    setButtonText(QWizard::NextButton, "下一步");
    setButtonText(QWizard::CancelButton, "退出");
    setButtonText(QWizard::FinishButton, "完成创建");

    //Qt::WindowFlags flags = 0;
    //flags |= Qt::WindowMinimizeButtonHint;
    //flags |= Qt::WindowCloseButtonHint;
    //flags |= Qt::MSWindowsFixedSizeDialogHint;
    //this->setWindowFlags(flags);
}

CharacterCreator::~CharacterCreator()
{
    delete _createRequest;
    delete _ui;
}

bool CharacterCreator::validateCurrentPage()
{
    if (currentPage()->validatePage() == false)
    {
        return false;
    }
    else
    {
        QWizardPage* finalPage = this->page(this->nextId());
        if (finalPage != nullptr && finalPage->isFinalPage())
        {
            WidgetManager::getInstance().characterCreator_SummaryPage()->updateDescriptions();
        }

        return true;
    }
}

void CharacterCreator::mousePressEvent(QMouseEvent* event)
{
    _leftMouseButtonPressed = true;
    event->ignore();
}

void CharacterCreator::mouseReleaseEvent(QMouseEvent* event)
{
    _leftMouseButtonPressed = false;
    event->ignore();
}

void CharacterCreator::mouseMoveEvent(QMouseEvent* event)
{
    if (_leftMouseButtonPressed)
        WidgetManager::getInstance().gameMain()->setCentralWidget(this);

    event->ignore();
}

/*
int CharacterCreator::nextId() const
{
    return 0;
}
*/
