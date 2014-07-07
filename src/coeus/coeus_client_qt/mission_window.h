#ifndef MISSION_WINDOW_H
#define MISSION_WINDOW_H

#include <QMainWindow>
namespace Ui {class MissionWindow;};

class MissionWindow : public QMainWindow
{
    Q_OBJECT

public:
    MissionWindow(QWidget *parent = 0);
    ~MissionWindow();

private:
    Ui::MissionWindow *ui;
};

#endif // MISSION_WINDOW_H
