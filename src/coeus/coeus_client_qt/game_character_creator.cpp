#include "game_character_creator.h"
#include "belif_config.h"
#include "character_config.h"

GameCharacterCreator::GameCharacterCreator(QWidget* parent /*= 0*/)
    : QMainWindow(parent)
{
    _ui.setupUi(this);
    initControl();
}

GameCharacterCreator::~GameCharacterCreator()
{

}

void GameCharacterCreator::initControl()
{
    connect(_ui.cmbBelif, SIGNAL(currentIndexChanged(int)), this, SLOT(slotBelifChanged(int)));
    connect(_ui.btnRandom, SIGNAL(clicked()), this, SLOT(slotOnRandomNickname()));
    connect(_ui.cmbAvatarList, SIGNAL(currentIndexChanged(int)), this, SLOT(slotAvatarListIndexChanged(int)));
    connect(_ui.optMale,SIGNAL(clicked()),this,SLOT(slotOnGenderChanged()));
    connect(_ui.optFemale,SIGNAL(clicked()),this,SLOT(slotOnGenderChanged()));

    //�̶������С
    this->setFixedSize(this->geometry().width(), this->geometry().height());

    this->setMouseTracking(true);

    //�����ü�������
    loadBelifList();
    loadCharacter(Gender::Male);
}

void GameCharacterCreator::loadBelifList()
{
    const BelifList& belifList = BeliefConfig::getInstance().belifList();
    for (size_t i = 0; i < belifList.size(); ++i)
    {
        _ui.cmbBelif->addItem(QString(belifList[i].beliefName.c_str()));
    }

    if (_ui.cmbBelif->count() > 0)
    {
        slotBelifChanged(0);
    }
}

void GameCharacterCreator::loadCharacter(Gender gender)
{
    _ui.cmbAvatarList->clear();
    const CharacterList& characterList = CharacterConfig::getInstance().characterList();
    for (size_t i = 0; i < characterList.size(); ++i)
    {
        QIcon icon(QString(characterList[i].avatar[gender].c_str()));
        if (!icon.isNull())
        {
            _ui.cmbAvatarList->addItem(icon, characterList[i].name.c_str());
        }
    }

    if (!characterList.empty())
    {
        _ui.cmbAvatarList->setCurrentIndex(0);
    }
}

void GameCharacterCreator::slotBelifChanged(int index)
{
    const BelifList& belifList = BeliefConfig::getInstance().belifList();
    QString styleSheetString;
    styleSheetString.sprintf("QFrame#frame_badge{border-image:url(%s)}", belifList[index].beliefBadgePicture.c_str());

    _ui.frameBadge->setObjectName("frame_badge");
    _ui.frameBadge->setStyleSheet(styleSheetString);
}

void GameCharacterCreator::slotAvatarListIndexChanged(int index)
{
    if (_ui.cmbAvatarList->count() != 0)
    {
        Gender currentGender = Gender::Female;
        if (_ui.optMale->isChecked()) currentGender = Gender::Male;

        const CharacterList& characterList = CharacterConfig::getInstance().characterList();

        // ������Ϣ
        _ui.lblCharacterName->setText(characterList[index].name.c_str());
        _ui.lblCharacterDetail->setText(characterList[index].detail.c_str());

        // ���ر���
        /*QPixmap pixmap = QPixmap(characterList[index].splash[currentGender].c_str()).scaled(this->size());
        QPalette palette(this->palette());
        palette.setBrush(QPalette::Background, QBrush(pixmap));
        this->setPalette(palette);*/

        // ���ذ���CG
        QImage* image = new QImage();
        if (image->load(characterList[index].cg[currentGender].c_str()))
        {
            //����ͼƬ�ߴ���Ӧͷ����ʾ����
            QImage scaleAvatarImage = image->scaled(_ui.graphicsCG->width(), _ui.graphicsCG->height());

            //����ͼ�γ���
            QGraphicsScene* graphicsScene = new QGraphicsScene();
            graphicsScene->addPixmap(QPixmap::fromImage(scaleAvatarImage));
            _ui.graphicsCG->setScene(graphicsScene);
        }
    }
}

void GameCharacterCreator::slotOnRandomNickname()
{
    Protocol::CSGetRandomNameReq getRandomNicknameReq;
    GameNetwork::getInstance().sendMessage(Opcodes::CSGetRandomNameReq, getRandomNicknameReq);
}

void GameCharacterCreator::slotOnGenderChanged()
{
    Gender currentGender = Gender::Female;
    if (_ui.optMale->isChecked()) currentGender = Gender::Male;

    loadCharacter(currentGender);
}

void GameCharacterCreator::onGetRandomNicknameRsp(const Protocol::SCGetRandomNameRsp& randomNicknameRsp)
{
    _ui.txtNickname->setText(QString::fromStdString(randomNicknameRsp.random_name.c_str()));
}