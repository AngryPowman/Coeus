#ifndef WORLD_INFO_SIDE_BAR_H
#define WORLD_INFO_SIDE_BAR_H

#include <QWidget>
namespace Ui {class WorldInfoSideBar;};

class WorldInfoSideBar : public QWidget
{
    Q_OBJECT

public:
    WorldInfoSideBar(QWidget *parent = 0);
    ~WorldInfoSideBar();

private:
    Ui::WorldInfoSideBar *ui;
};

#endif // WORLD_INFO_SIDE_BAR_H
