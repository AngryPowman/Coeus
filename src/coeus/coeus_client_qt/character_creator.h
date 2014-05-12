#ifndef __CHARACTER_CREATOR_H__
#define __CHARACTER_CREATOR_H__

#include "qt_coeus_common.h"
#include "game_common/game_define.h"
#include <QWizard>

namespace Ui { class CharacterCreator; };

class CharacterCreator : public QWizard
{
    Q_OBJECT

public:
    CharacterCreator(QWidget* parent = 0);
    virtual ~CharacterCreator();

private:
    //virtual bool validateCurrentPage();
    //virtual int nextId() const;

private:
    Ui::CharacterCreator* _ui;
};

#endif // !__CHARACTER_CREATOR_H__
