#ifndef CHARACTER_CREATOR_INTRODUTION_PAGE_H
#define CHARACTER_CREATOR_INTRODUTION_PAGE_H

#include <QWizardPage>

namespace Ui { class CharacterCreator_IntrodutionPage; };

class CharacterCreator_IntrodutionPage : public QWizardPage
{
    Q_OBJECT

public:
    CharacterCreator_IntrodutionPage(QWidget *parent);
    ~CharacterCreator_IntrodutionPage();

private:
    Ui::CharacterCreator_IntrodutionPage* _ui;
};

#endif // CHARACTER_CREATOR_INTRODUTION_PAGE_H
