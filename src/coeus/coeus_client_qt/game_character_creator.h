#ifndef __GAME_CHARACTER_CREATOR_H__
#define __GAME_CHARACTER_CREATOR_H__

#include "qt_coeus_common.h"
#include "ui_character_create_dialog.h"
#include "game_common/game_define.h"

class GameCharacterCreator : public QMainWindow
{
    Q_OBJECT

public:
    GameCharacterCreator(QWidget* parent = 0);
    virtual ~GameCharacterCreator();

    void initControl();
    void loadBelifList();
    void loadCharacter(Gender gender);

public:
    void onGetRandomNicknameRsp(const Protocol::SCGetRandomNameRsp& randomNicknameRsp);
    void onCreateCharacterRsp(const Protocol::SCCreateCharacterRsp& createCharacterRsp);

private slots:
    void slotBelifChanged(int index);
    void slotAvatarListIndexChanged(int index);
    void slotOnRandomNickname();
    void slotOnGenderChanged();
    void slotOnCreateBtn();

private:
    Ui::CharacterCreateDialog _ui;
};

#endif // !__GAME_CHARACTER_CREATOR_H__
