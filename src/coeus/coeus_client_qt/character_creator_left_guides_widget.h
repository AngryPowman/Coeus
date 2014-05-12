#ifndef CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H
#define CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H

#include <QWidget>
#include "ui_definition.h"

namespace Ui {class CharacterCreator_LeftGuidesWidget;};

class CharacterCreator_LeftGuidesWidget : public QWidget
{
    Q_OBJECT

public:
    CharacterCreator_LeftGuidesWidget(QWidget *parent = 0);
    ~CharacterCreator_LeftGuidesWidget();

public:
    void setCurrentPage(const CharacterCreatorPage& page);

private:
    Ui::CharacterCreator_LeftGuidesWidget* _ui;
};

#endif // CHARACTER_CREATOR_LEFT_GUIDES_WIDGET_H
