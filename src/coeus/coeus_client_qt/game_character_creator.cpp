#include "game_character_creator.h"
#include "belif_config.h"

GameCharacterCreator::GameCharacterCreator(QWidget* parent /*= 0*/)
    : QMainWindow(parent)
{
    _characterCreateDialog.setupUi(this);
    loadBelifList();

    connect(_characterCreateDialog.cmbBelif, SIGNAL(currentIndexChanged(int)), this, SLOT(slotBelifChanged(int)));
}

GameCharacterCreator::~GameCharacterCreator()
{

}

void GameCharacterCreator::loadBelifList()
{
    const BelifList& belifList = BeliefConfig::getInstance().belifList();
    for (size_t i = 0; i < belifList.size(); ++i)
    {
        _characterCreateDialog.cmbBelif->addItem(QString(belifList[i].beliefName.c_str()));
    }

    if (_characterCreateDialog.cmbBelif->count() > 0)
    {
        slotBelifChanged(0);
    }
}

void GameCharacterCreator::slotBelifChanged(int index)
{
    const BelifList& belifList = BeliefConfig::getInstance().belifList();
    QString styleSheetString;
    styleSheetString.sprintf("QFrame#frame_badge{border-image:url(%s)}", belifList[index].beliefBadgePicture.c_str());

    _characterCreateDialog.frameBadge->setObjectName("frame_badge");
    _characterCreateDialog.frameBadge->setStyleSheet(styleSheetString);
}