#ifndef __CHARACTER_CREATOR_H__
#define __CHARACTER_CREATOR_H__

#include <QWizard>
#include "game_common/game_define.h"

namespace Ui { class CharacterCreator; };
//namespace Protocol { struct CSCreateCharacter; };

class CharacterCreator : public QWizard
{
    Q_OBJECT

public:
    CharacterCreator(QWidget* parent = 0);
    virtual ~CharacterCreator();
    void updateRect(const QRect& rect);

private:
    bool validateCurrentPage();
    //virtual int nextId() const;

    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

private:
    Ui::CharacterCreator* _ui;
    bool _leftMouseButtonPressed;
    QRect _originRect;
    //Protocol::CSCreateCharacter* _createRequest;
};

#endif // !__CHARACTER_CREATOR_H__
