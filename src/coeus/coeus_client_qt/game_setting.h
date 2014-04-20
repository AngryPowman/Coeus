#ifndef __GAME_SETTING_H__
#define __GAME_SETTING_H__

#include <QMainWindow>
#include "ui_gamesys_setting_dialog.h"

class GameSetting : public QMainWindow
{
    Q_OBJECT

public:
    GameSetting(QWidget* parent = 0);
    virtual ~GameSetting();

public:
    void initControl();

signals:  
    private slots:


private:
    Ui::GameSysSettingDialog settingDialog;
};

#endif // COEUS_CLIENT_QT_H
