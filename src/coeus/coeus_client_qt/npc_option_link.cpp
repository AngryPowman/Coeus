#include "npc_option_link.h"
#include <QMouseEvent>

NPCOptionLink::NPCOptionLink(const QString& text, const NPCData::OptionDialogueNode& optionNode, QWidget* parent)
    : QLabel(parent), _optionNode(optionNode)
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

void NPCOptionLink::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        emit onClicked(this);
    }
}
