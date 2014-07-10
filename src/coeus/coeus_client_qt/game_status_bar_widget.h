#ifndef GAME_STATUS_BAR_WIDGET_H
#define GAME_STATUS_BAR_WIDGET_H

#include <QWidget>
#include "qt_coeus_common.h"

namespace Ui { class GameStatusBarWidget; };

class GameStatusBarWidget : public QWidget
{
    Q_OBJECT

public:
    GameStatusBarWidget(QWidget *parent);
    ~GameStatusBarWidget();

public:
    void initStatus(uint64 character_guid);

public:
    //void onPropertiesRsp(const Protocol::SCCharacterInitialDataRsp& characterInitialDataRsp);

private:
    void updateLevel(uint16 level);
    void updateCareer(uint8 career);
    void updateHP(uint32 hp, uint32 maxHp);
    void updateExp(uint32 exp);

private slots:
    void slotOnDialogueTest();

private:
    Ui::GameStatusBarWidget* _ui;
};

#endif // GAME_STATUS_BAR_WIDGET_H
