#ifndef DIALOGUE_BOX_H
#define DIALOGUE_BOX_H

#include <QWidget>
namespace Ui {class DialogueBox;};

class DialogueBox : public QWidget
{
    Q_OBJECT

public:
    DialogueBox(QWidget* parent = 0);
    ~DialogueBox();

public:
    void setAvatarPicture(const std::string& file);

private:
    Ui::DialogueBox* _ui;
};

#endif // DIALOGUE_BOX_H
