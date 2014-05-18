#ifndef CHARACTER_CREATOR_BASEINFO_PAGE_H
#define CHARACTER_CREATOR_BASEINFO_PAGE_H

#include <QWizardPage>
#include "game_common/game_define.h"

namespace Ui { class CharacterCreator_BaseInfoPage; };

class CharacterCreator_BaseInfoPage : public QWizardPage
{
    Q_OBJECT

public:
    CharacterCreator_BaseInfoPage(QWidget *parent);
    ~CharacterCreator_BaseInfoPage();

public:
    // validation implement
    bool validatePage();

    //void onGetRandomNicknameRsp(const Protocol::SCGetRandomNameRsp& randomNicknameRsp);
    //void onCreateCharacterRsp(const Protocol::SCCreateCharacter& createCharacterRsp);

private slots:
    //void slotOnRandomNickname();
    //void slotOnCreateBtn();

private:
    Ui::CharacterCreator_BaseInfoPage* _ui;
};

#endif // CHARACTER_CREATOR_BASEINFO_PAGE_H
