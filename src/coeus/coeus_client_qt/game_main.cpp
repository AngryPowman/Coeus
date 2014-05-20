#include "game_main.h"
#include <QLayout>
#include "ui_game_main_dialog.h"
#include "game_status_bar_widget.h"
#include "game_map_widget.h"
#include "game_chat_widget.h"
#include "game_bag.h"
#include "widget_manager.h"
#include "character_creator.h"

GameMain::GameMain(QWidget* parent /*= 0*/)
    : QMainWindow(parent)
{
    _ui = new Ui::GameMainDialog();
    _ui->setupUi(this);

    QDesktopWidget* desk = QApplication::desktop();
    int wd = desk->width();
    int ht = desk->height();
    this->move((wd - width()) / 2, (ht - height()) / 2);

    // init man layout
    _splitterMain = new QSplitter(Qt::Horizontal, this);
    _splitterMain->setStretchFactor(1, 1);
    GameStatusBarWidget* gameStatusBarWidget
        = WidgetManager::getInstance().gameStatusBarWidget(dynamic_cast<QWidget*>(_splitterMain));

    QSplitter* splitterRight = new QSplitter(Qt::Vertical, _splitterMain);
    splitterRight->setOpaqueResize(true);

    GameMapWidget* gameMapWidget = WidgetManager::getInstance().gameMapWidget(splitterRight);
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
}

GameMain::~GameMain()
{
    delete _ui;
}

void GameMain::initControl()
{
    // video widget
    //QLabel* videoWidget = new QLabel(this);
    //videoWidget->setBackgroundRole();
    //this->setCentralWidget(videoWidget);

    // init game ui layout

}

void GameMain::slotOnAboutQT()
{
    QMessageBox::aboutQt(this);
}

void GameMain::slotOnBagActionTriggered(bool checked)
{
    GameBag* gameBag = WidgetManager::getInstance().gameBag();
    Qt::WindowFlags flags = gameBag->windowFlags();
    flags |= Qt::WindowStaysOnTopHint;
    gameBag->setWindowFlags(flags);
    if (checked)
    {
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
            Qt::WindowFlags flags = 0;
            flags |= Qt::MSWindowsFixedSizeDialogHint;
            this->setWindowFlags(flags);
            break;
        }
        case GV_DATA_LOADER:
            break;
        case GV_GENERAL:
        {
            _ui->menubar->setVisible(true);
            _ui->tbTop->setVisible(true);
            _ui->tbLeftSide->setVisible(true);
            this->setCentralWidget(_splitterMain);
            this->setGeometry(originRect);
            Qt::WindowFlags flags = 0;
            flags |= Qt::WindowMaximizeButtonHint;
            flags |= Qt::WindowCloseButtonHint;
            flags |= Qt::WindowMinimizeButtonHint;
            this->setWindowFlags(flags);

            _splitterMain->setVisible(true);
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
    gameStatusBarWidget->initStatus(3740133620);
}
