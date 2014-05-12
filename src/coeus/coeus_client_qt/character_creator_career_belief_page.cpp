#include "character_creator_career_belief_page.h"
#include "ui_character_creator_career_belief_page.h"
#include "game_common/config/belif_config.h"
#include "character_config.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

CharacterCreator_CareerBeliefPage::CharacterCreator_CareerBeliefPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_CareerBeliefPage();
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(CAREER_BELIEF_PAGE);
    layout->addWidget(leftWidget);

    initControl();
}

CharacterCreator_CareerBeliefPage::~CharacterCreator_CareerBeliefPage()
{
    delete _ui;
}


void CharacterCreator_CareerBeliefPage::initControl()
{
    //connect(_ui->cmbBelif, SIGNAL(currentIndexChanged(int)), this, SLOT(slotBelifChanged(int)));
    connect(_ui->cmbAvatarList, SIGNAL(currentIndexChanged(int)), this, SLOT(slotAvatarListIndexChanged(int)));
    connect(_ui->optMale, SIGNAL(clicked()), this, SLOT(slotOnGenderChanged()));
    connect(_ui->optFemale, SIGNAL(clicked()), this, SLOT(slotOnGenderChanged()));

    //从配置加载数据
    //loadBelifList();
    loadCharacter(Gender::Male);
}

/*
void CharacterCreator_CareerBeliefPage::loadBelifList()
{
    const BelifList& belifList = BeliefConfig::getInstance().belifList();
    for (size_t i = 0; i < belifList.size(); ++i)
    {
        _ui->cmbBelif->addItem(QString(belifList[i].beliefName.c_str()));
    }

    if (_ui->cmbBelif->count() > 0)
    {
        slotBelifChanged(0);
    }
}*/

void CharacterCreator_CareerBeliefPage::loadCharacter(Gender gender)
{
    _ui->cmbAvatarList->clear();
    const CharacterList& characterList = CharacterConfig::getInstance().characterList();
    for (size_t i = 0; i < characterList.size(); ++i)
    {
        QIcon icon(QString(characterList[i].avatar[gender].c_str()));
        if (!icon.isNull())
        {
            _ui->cmbAvatarList->addItem(icon, characterList[i].name.c_str());
        }
    }

    if (!characterList.empty())
    {
        _ui->cmbAvatarList->setCurrentIndex(0);
    }
}

/*
void CharacterCreator_CareerBeliefPage::slotBelifChanged(int index)
{
    const BelifList& belifList = BeliefConfig::getInstance().belifList();
    QString styleSheetString;
    styleSheetString.sprintf("QFrame#frame_badge{border-image:url(%s)}", belifList[index].beliefBadgePicture.c_str());

    _ui->frameBadge->setObjectName("frame_badge");
    _ui->frameBadge->setStyleSheet(styleSheetString);
}*/

void CharacterCreator_CareerBeliefPage::slotAvatarListIndexChanged(int index)
{
    if (_ui->cmbAvatarList->count() != 0)
    {
        Gender currentGender = Gender::Female;
        if (_ui->optMale->isChecked()) currentGender = Gender::Male;

        const CharacterList& characterList = CharacterConfig::getInstance().characterList();

        // 文字信息
        _ui->lblCharacterName->setText(characterList[index].name.c_str());
        _ui->lblCharacterDetail->setText(characterList[index].detail.c_str());

        // 加载背景
        /*QPixmap pixmap = QPixmap(characterList[index].splash[currentGender].c_str()).scaled(this->size());
        QPalette palette(this->palette());
        palette.setBrush(QPalette::Background, QBrush(pixmap));
        this->setPalette(palette);*/

        // 加载半身CG
        QImage* image = new QImage();
        if (image->load(characterList[index].cg[currentGender].c_str()))
        {
            //调整图片尺寸适应头像显示区域
            QImage scaleAvatarImage = image->scaled(_ui->graphicsCG->width(), _ui->graphicsCG->height());

            //创建图形场景
            QGraphicsScene* graphicsScene = new QGraphicsScene();
            graphicsScene->addPixmap(QPixmap::fromImage(scaleAvatarImage));
            _ui->graphicsCG->setScene(graphicsScene);
        }
    }
}

void CharacterCreator_CareerBeliefPage::slotOnGenderChanged()
{
    int currentIndex = _ui->cmbAvatarList->currentIndex();
    Gender currentGender = Gender::Female;
    if (_ui->optMale->isChecked()) currentGender = Gender::Male;

    loadCharacter(currentGender);

    _ui->cmbAvatarList->setCurrentIndex(currentIndex);
}

bool CharacterCreator_CareerBeliefPage::validatePage()
{
    //createRequest->gender = _ui->optMale->isChecked() ? Gender::Male : Gender::Female;
    //createRequest->character_type = _ui->cmbAvatarList->currentIndex();
    registerField("gender", _ui->optMale);
    registerField("character_type", _ui->cmbAvatarList);

    return true;
}
