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
        "������һ���ٻ����ң������������δ�Ȩ���Ǹ��ٶ�����",
        "������һ�����ɵй��ļ�ͥ���������Ŵ����߿Ƽ���ҵ���Ǹ���������",
        "������һ����ͨ��ͥ���䲻�ܻӽ���������Ҳ������ʳ��",
        "�ҳ�����һ�����Ǽ�ͥ�������ʵ�������׶֮�ء�"
    };

    const QString storyDescription[Epic::StoryType::StoryMaxFlag] =
    {
        "��һ��������ʱ�����ֱ��ϳ��������صĺ�ɫ����"
        "��ɫ�����ڸ��Ҵ���ǿ��������ͬʱ��ҲӰ�����ҵ��������񾭡�\n\n"
        "�һ��ɱ����˷�ӡ�������ڱ�ֲ����ת�����Լ����ұ���Ҫ��������ָ������˵����",

        "�ҳ������ɣ��������ʱ��������̤����ð��֮·��"
        "·;�н�ʶ�˺ܶ�ǿ�����Ȥ�Ļ�飬�Ҿ���̽���������κν��䡣\n\n"
        "ֱ��ĳһ�췢����ͺӥ��֯������ı����",

        "��Ե�ɺ��£��ұ�һ��ǿ����Ҳ�֪������������ʦ��Ϊͽ�ܣ����׸�����ѧϰ��"
        "���̻����Һܶ�ս���������������ʣ�����һֱ��֪����ʦ�����ֺ���ʵ��ݣ�"
        "��ʦ��Ϊ���ҵ�ʵ����û�ʸ�֪��̫�࣬��˵���ҳ�ʦ֮���ٸ����ҡ�\n\n"
        "����ҿ���ɱ�б������Լ���ǿ������־���������������ǿ�ߡ�"
    };

    QString content = "�ҽ�" + nickname + "����һ��" /*+((gender == Gender::Male) ? "����" : "Ů��")*/ + 
        QString(CharacterConfig::getInstance().toName(character_type).c_str()) + "��\n\n";

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
    createCharacter.nickname = nickname.toLocal8Bit().constData();
    createCharacter.epic.characteristic = characteristic;
    createCharacter.epic.family_type = family_type;
    createCharacter.epic.story_type = story_type;

    GameNetwork::getInstance().sendMessage(Opcodes::CSCreateCharacter, createCharacter);
	//WidgetManager::getInstance().gameMain()->initGame(false);
    return true;
}
