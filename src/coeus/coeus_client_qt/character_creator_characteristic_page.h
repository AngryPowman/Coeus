#ifndef CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H
#define CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H

#include <QWizardPage>
namespace Ui { class CharacterCreator_CharacteristicPage; };

class CharacterCreator_CharacteristicPage : public QWizardPage
{
    Q_OBJECT

public:
    CharacterCreator_CharacteristicPage(QWidget *parent = 0);
    ~CharacterCreator_CharacteristicPage();

private:
    Ui::CharacterCreator_CharacteristicPage* _ui;
};

#endif // CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H
