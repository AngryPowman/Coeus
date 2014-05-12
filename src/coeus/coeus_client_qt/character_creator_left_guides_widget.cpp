#include "character_creator_left_guides_widget.h"
#include "ui_character_creator_left_guides_widget.h"

CharacterCreator_LeftGuidesWidget::CharacterCreator_LeftGuidesWidget(QWidget *parent)
    : QWidget(parent)
{
    _ui = new Ui::CharacterCreator_LeftGuidesWidget();
    _ui->setupUi(this);
}

CharacterCreator_LeftGuidesWidget::~CharacterCreator_LeftGuidesWidget()
{
    delete _ui;
}

void CharacterCreator_LeftGuidesWidget::setCurrentPage(const CharacterCreatorPage& page)
{
    QLabel* pageLables[PAGE_MAX_FLAG] = 
    {
        _ui->lblPage_0,
        _ui->lblPage_1,
        _ui->lblPage_2,
        _ui->lblPage_3,
        _ui->lblPage_4,
        _ui->lblPage_5
    };

    for (int i = 0; i < page; ++i)
    {
        pageLables[i]->setStyleSheet("color:rgb(158, 158, 158)");
    }

    for (int i = page; i < PAGE_MAX_FLAG; ++i)
    {
        pageLables[i]->setStyleSheet("color:rgb(0, 0, 0)");
    }

    const QRect& rect = _ui->lblArrow->geometry();
    _ui->lblArrow->setGeometry(rect.x(), pageLables[page]->geometry().y(), rect.width(), rect.height());
}

