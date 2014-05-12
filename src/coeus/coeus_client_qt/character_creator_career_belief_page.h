#ifndef CHARACTER_CREATOR_CAREER_BELIEF_PAGE_H
#define CHARACTER_CREATOR_CAREER_BELIEF_PAGE_H

#include <QWizardPage>
#include "qt_coeus_common.h"
#include "game_common/game_define.h"

namespace Ui {class CharacterCreator_CareerBeliefPage;};

class CharacterCreator_CareerBeliefPage : public QWizardPage
{
    Q_OBJECT

public:
    CharacterCreator_CareerBeliefPage(QWidget *parent = 0);
    ~CharacterCreator_CareerBeliefPage();

public:
    void initControl();
    //void loadBelifList();
    void loadCharacter(Gender gender);

private slots:
    //void slotBelifChanged(int index);
    void slotAvatarListIndexChanged(int index);
    void slotOnGenderChanged();

private:
    Ui::CharacterCreator_CareerBeliefPage* _ui;
};

#endif // CHARACTER_CREATOR_CAREER_BELIEF_PAGE_H
