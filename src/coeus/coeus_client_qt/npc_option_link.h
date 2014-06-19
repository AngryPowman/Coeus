#ifndef NPC_OPTION_LINK_H
#define NPC_OPTION_LINK_H

#include <QLabel>

class NPCOptionLink : public QLabel
{
    Q_OBJECT

public:
    enum OptionLinkIcon
    {
        None,
        TalkOption,
        NewMissionOption,
    };

public:
    NPCOptionLink(const QString& text, QWidget* parent = nullptr);
    ~NPCOptionLink();

private:
    void setLinkIconType(const OptionLinkIcon&& iconType);
    void setLinkText(const QString& text);

private:
    OptionLinkIcon _optionLinkIcon;
};

#endif // NPC_OPTION_LINK_H
