#include "character_creator_summary_page.h"
#include "ui_character_creator_summary_page.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"
#include "character_config.h"
#include "qt_coeus_common.h"

CharacterCreator_SummaryPage::CharacterCreator_SummaryPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_SummaryPage();
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(SUMMARY_PAGE);
    layout->addWidget(leftWidget);
}

CharacterCreator_SummaryPage::~CharacterCreator_SummaryPage()
{
    delete _ui;
}

void CharacterCreator_SummaryPage::updateDescriptions()
{
    QString nickname = wizard()->property("nickname").toString();
    Gender gender = static_cast<Gender>(wizard()->property("gender").toUInt());
    CharacterType character_type = static_cast<CharacterType>(wizard()->property("character_type").toUInt());
    Epic::FamilyType family_type = static_cast<Epic::FamilyType>(wizard()->property("family_type").toUInt());
    Epic::StoryType story_type = static_cast<Epic::StoryType>(wizard()->property("story_type").toUInt());

    const QString familyDescription[Epic::FamilyType::FamilyMaxFlag] =
    {
        "我生在一个官宦世家，家族掌握政治大权，是个官二代。",
        "我生在一个富可敌国的家庭，家族有着大量高科技产业，是个富二代。",
        "我生在一个普通家庭，虽不能挥金如土，倒也丰衣足食。",
        "我出生在一个落魄家庭，穷困潦倒，无立锥之地。"
    };

    const QString storyDescription[Epic::StoryType::StoryMaxFlag] =
    {
        "有一天我醒来时发现手臂上出现了神秘的红色纹身。"
        "红色纹身在给我带来强大力量的同时，也影响着我的情绪和神经。\n\n"
        "我怀疑被下了封印或者体内被植入了转基因试剂，我必须要解除纹身，恢复正常人的生活。",

        "我崇尚自由，年少轻狂时背井离乡踏上了冒险之路，"
        "路途中结识了很多强大和有趣的伙伴，我决心探索宇宙中任何角落。\n\n"
        "直到某一天发现了秃鹰组织的新阴谋……",

        "机缘巧合下，我被一名强大而且不知名的宇宙气导师收为徒弟，自幼跟随他学习，"
        "他教会了我很多战斗技巧与人情世故，但我一直不知道导师的名字和真实身份，"
        "导师认为以我的实力还没资格知道太多，并说当我出师之后再告诉我。\n\n"
        "因此我苦练杀敌本领让自己变强，并立志打败宇宙中有名的强者。"
    };

    QString content = "我叫" + nickname + "，是一名" /*+((gender == Gender::Male) ? "男性" : "女性")*/ + 
        QString(CharacterConfig::getInstance().toName(character_type).c_str()) + "。\n\n";

    content += familyDescription[family_type] + "\n\n";
    content += storyDescription[story_type];

    _ui->txtMyEpic->setText(
        content
        );
}

bool CharacterCreator_SummaryPage::validatePage()
{
    QString nickname = wizard()->property("nickname").toString();
    Gender gender = static_cast<Gender>(wizard()->property("gender").toUInt());
    CharacterType character_type = static_cast<CharacterType>(wizard()->property("character_type").toUInt());
    uint32 characteristic = wizard()->property("characteristic").toUInt();
    Epic::FamilyType family_type = static_cast<Epic::FamilyType>(wizard()->property("family_type").toUInt());
    Epic::StoryType story_type = static_cast<Epic::StoryType>(wizard()->property("story_type").toUInt());

    Protocol::CSCreateCharacter createCharacter;
    createCharacter.character_type = character_type;
    createCharacter.gender = gender;
    createCharacter.nickname = nickname.toStdString();
    createCharacter.epic.characteristic = characteristic;
    createCharacter.epic.family_type = family_type;
    createCharacter.epic.story_type = story_type;

    GameNetwork::getInstance().sendMessage(Opcodes::CSCreateCharacter, createCharacter);

    return true;
}
