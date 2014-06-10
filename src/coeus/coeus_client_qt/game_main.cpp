#include "game_main.h"
#include <QLayout>
#include "ui_game_main_dialog.h"
#include "game_status_bar_widget.h"
#include "game_map_widget.h"
#include "game_chat_widget.h"
#include "game_bag.h"
#include "widget_manager.h"
#include "character_creator.h"
#include "game_data.h"
#include "game_common/item_helper.h"

GameMain::GameMain(QWidget* parent /*= 0*/)
    : QMainWindow(parent)
{
    _ui = new Ui::GameMainDialog();
    _ui->setupUi(this);

    // load configurations
    ItemHelper::init();

	_defaultWindowFlags = this->windowFlags();
	_orginSize = this->size();

    QDesktopWidget* desk = QApplication::desktop();
    int wd = desk->width();
    int ht = desk->height();
    this->move((wd - width()) / 2, (ht - height()) / 2);

    // init main layout
    _splitterMain = new QSplitter(Qt::Horizontal, this);
    _splitterMain->setStretchFactor(1, 1);
    GameStatusBarWidget* gameStatusBarWidget
        = WidgetManager::getInstance().gameStatusBarWidget(dynamic_cast<QWidget*>(_splitterMain));

    QSplitter* splitterRight = new QSplitter(Qt::Vertical, _splitterMain);
    splitterRight->setOpaqueResize(true);

    _mdiAreaMain = new QMdiArea(splitterRight);
    //GameMapWidget* gameMapWidget = WidgetManager::getInstance().gameMapWidget(splitterRight);
    GameChatWidget* gameChatWidget = WidgetManager::getInstance().gameChatWidget(splitterRight);

    _splitterMain->setVisible(false);

    // init left side toolbar
    _ui->menuSidebar->menuAction()->setVisible(false);
    _ui->tbLeftSide->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
    _ui->action_CharacterDetails->setIcon(QIcon("images/ui/lsb_char_details.png"));
    _ui->action_Bag->setIcon(QIcon("images/ui/lsb_bag.png"));
    _ui->action_Equipment->setIcon(QIcon("images/ui/lsb_equipment.png"));
    _ui->action_World->setIcon(QIcon("images/ui/lsb_world.png"));
    _ui->action_Friends->setIcon(QIcon("images/ui/lsb_friends.png"));

    // connect signal to slots
    connect(_ui->actionAbout_QT, SIGNAL(triggered()), this, SLOT(slotOnAboutQT()));
    connect(_ui->action_Bag, SIGNAL(triggered(bool)), this, SLOT(slotOnBagActionTriggered(bool)));

    // load map viewer
    GameMapView* gameMapView = WidgetManager::getInstance().gameMapView();
    _mdiAreaMain->addSubWindow(gameMapView, Qt::Dialog | Qt::FramelessWindowHint);
}

GameMain::~GameMain()
{
    delete _ui;
}

void GameMain::initControl()
{

}

void GameMain::slotOnAboutQT()
{
    QMessageBox::aboutQt(this);
}

void GameMain::slotOnBagActionTriggered(bool checked)
{
    GameBag* gameBag = WidgetManager::getInstance().gameBag();
    if (checked)
    {
        _mdiAreaMain->addSubWindow(gameBag);
        gameBag->show();
    }
    else
    {
        gameBag->hide();
    }
}

void GameMain::initGame(bool needCreate /*= false*/)
{
    if (needCreate == true)
    {
        changeView(GameView::GV_CHAR_CREATOR);
    }
    else
    {
        changeView(GameView::GV_GENERAL);
        loadGameData();
    }
}

void GameMain::changeView(GameView gameView)
{
    static QRect originRect(this->geometry());
    static QSize originMaximumSize(this->maximumSize());
    static QSize originMinimumSize(this->minimumSize());
	
	_currentView = gameView;
    switch (gameView)
    {
        case GV_MOVIE:
        {
            _ui->menubar->setVisible(false);
            _ui->tbTop->setVisible(false);
            _ui->tbLeftSide->setVisible(false);
            this->setCentralWidget(nullptr);
            break;
        }
        case GV_CHAR_CREATOR:
        {
            _ui->menubar->setVisible(false);
            _ui->tbTop->setVisible(false);
            _ui->tbLeftSide->setVisible(false);
            CharacterCreator* characterCreator = WidgetManager::getInstance().characterCreator();
            this->setCentralWidget(characterCreator);
            
            this->adjustSize();
            break;
        }
        case GV_DATA_LOADER:
            break;
        case GV_GENERAL:
        {
            _ui->menubar->setVisible(true);
            _ui->tbTop->setVisible(true);
            _ui->tbLeftSide->setVisible(true);
			_splitterMain->setVisible(true);

			this->setCentralWidget(_splitterMain);
            break;
        }
        default:
            break;
    }
}

void GameMain::loadGameData()
{
    GameStatusBarWidget* gameStatusBarWidget
        = WidgetManager::getInstance().gameStatusBarWidget();
	gameStatusBarWidget->initStatus(GameData::getInstance().fullData.character_id);
}

void GameMain::resizeEvent(QResizeEvent* event)
{
	if (_currentView == GameView::GV_CHAR_CREATOR)
	{
		this->adjustSize();
	}
}

void GameMain::onCreateCharacterRsp(const Protocol::SCCreateCharacter& createCharacter)
{
	if (createCharacter.result)
	{
		initGame(false);
	}
}
