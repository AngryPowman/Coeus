#include "dialogue_box.h"
#include "ui_dialogue_box.h"
#include "widget_helper.h"

DialogueBox::DialogueBox(QWidget *parent)
    : QWidget(parent)
{
    _ui = new Ui::DialogueBox;
    _ui->setupUi(this);

    setAvatarPicture("images/avatar/lrj.jpg");
}

DialogueBox::~DialogueBox()
{
    delete _ui;
}

void DialogueBox::setAvatarPicture(const QString& file)
{
    WidgetHelper::loadLablePicture(_ui->lblAvatar, _ui->lblAvatar->size(), file);
}

