#include "dialogue_box.h"
#include "ui_dialogue_box.h"

DialogueBox::DialogueBox(QWidget *parent)
    : QWidget(parent)
{
    _ui = new Ui::DialogueBox;
    _ui->setupUi(this);
}

DialogueBox::~DialogueBox()
{
    delete _ui;
}

void DialogueBox::setAvatarPicture(const std::string& file)
{

}

