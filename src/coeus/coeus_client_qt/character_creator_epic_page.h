#ifndef CHARACTER_CREATOR_EPIC_PAGE_H
#define CHARACTER_CREATOR_EPIC_PAGE_H

#include <QWizardPage>
namespace Ui {class CharacterCreator_EpicPage;};

class CharacterCreator_EpicPage : public QWizardPage
{
    Q_OBJECT

public:
    CharacterCreator_EpicPage(QWidget *parent = 0);
    ~CharacterCreator_EpicPage();

private:
    Ui::CharacterCreator_EpicPage* _ui;
};

#endif // CHARACTER_CREATOR_EPIC_PAGE_H
