#ifndef CHARACTER_CREATOR_SUMMARY_PAGE_H
#define CHARACTER_CREATOR_SUMMARY_PAGE_H

#include <QWizardPage>
namespace Ui {class CharacterCreator_SummaryPage;};

class CharacterCreator_SummaryPage : public QWizardPage
{
    Q_OBJECT

public:
    CharacterCreator_SummaryPage(QWidget *parent = 0);
    ~CharacterCreator_SummaryPage();

public:
    bool validatePage();
    void updateDescriptions();

private:
    Ui::CharacterCreator_SummaryPage* _ui;
};

#endif // CHARACTER_CREATOR_SUMMARY_PAGE_H
