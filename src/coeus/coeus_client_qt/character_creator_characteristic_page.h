#ifndef CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H
#define CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H

#include <QWizardPage>
namespace Ui { class CharacterCreator_CharacteristicPage; };
class QCheckBox;
class CharacterCreator_CharacteristicPage : public QWizardPage
{
    Q_OBJECT

    static const int MaxCharacteristicOptions = 12;

public:
    CharacterCreator_CharacteristicPage(QWidget *parent = 0);
    ~CharacterCreator_CharacteristicPage();

    bool validatePage();

private slots:
    void onChecked(bool checked);

private:
    Ui::CharacterCreator_CharacteristicPage* _ui;
    QVector<QCheckBox*> _characteristicCheckBoxes;
    int _checkCount;
    int _characteristicValues;
};

#endif // CHARACTER_CREATOR_CHARACTERISTIC_PAGE_H
