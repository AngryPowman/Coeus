#ifndef __GAME_CHARACTER_CREATOR_H__
#define __GAME_CHARACTER_CREATOR_H__

#include "qt_coeus_common.h"
#include "ui_character_create_dialog.h"

class GameCharacterCreator : public QMainWindow
{
    Q_OBJECT

public:
    GameCharacterCreator(QWidget* parent = 0);
    virtual ~GameCharacterCreator();

    void loadBelifList();

private slots:
    void slotBelifChanged(int index);

private:
    Ui::CharacterCreateDialog _characterCreateDialog;
};

#endif // !__GAME_CHARACTER_CREATOR_H__
