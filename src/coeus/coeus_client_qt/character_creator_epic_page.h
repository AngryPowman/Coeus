#ifndef CHARACTER_CREATOR_EPIC_PAGE_H
#define CHARACTER_CREATOR_EPIC_PAGE_H

#include <QWizardPage>
#include "game_common/game_define.h"
namespace Ui {class CharacterCreator_EpicPage;};

class CharacterCreator_EpicPage : public QWizardPage
{
    Q_OBJECT

public:
    CharacterCreator_EpicPage(QWidget *parent = 0);
    ~CharacterCreator_EpicPage();

public:
    bool validatePage();

private slots:
    void onFamilyTypeChanged(int);
    void onStoryTypeChanged(int);

private:
    Ui::CharacterCreator_EpicPage* _ui;
    Epic::FamilyType _familyType;
    Epic::StoryType _storyType;
};

#endif // CHARACTER_CREATOR_EPIC_PAGE_H
