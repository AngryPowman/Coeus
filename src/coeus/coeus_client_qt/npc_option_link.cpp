#include "npc_option_link.h"

NPCOptionLink::NPCOptionLink(const QString& text, QWidget* parent)
    : QLabel(parent)
{
    this->setTextFormat(Qt::TextFormat::RichText);
    this->setLinkText(text);
}

NPCOptionLink::~NPCOptionLink()
{

}

void NPCOptionLink::setLinkIconType(const OptionLinkIcon&& iconType)
{
    _optionLinkIcon = std::move(iconType);
}

void NPCOptionLink::setLinkText(const QString& text)
{
    this->setText("<a href='#'>" + text + "</a>");
    this->adjustSize();
}
