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
    QSplitter* splitterMain = new QSplitter(Qt::Horizontal, this);
    splitterMain->setStretchFactor(1, 1);
    GameStatusBarWidget* gameStatusBarWidget
        = WidgetManager::getInstance().gameStatusBarWidget(dynamic_cast<QWidget*>(splitterMain));

    QSplitter* splitterRight = new QSplitter(Qt::Vertical, splitterMain);
    splitterRight->setOpaqueResize(true);

    GameMapWidget* gameMapWidget = WidgetManager::getInstance().gameMapWidget(splitterRight);
    GameChatWidget* gameChatWidget = WidgetManager::getInstance().gameChatWidget(splitterRight);

    this->setCentralWidget(splitterMain);

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
    static QRect originRect(this->geometry());
    static QSize originMaximumSize(this->maximumSize());
    static QSize originMinimumSize(this->minimumSize());
    if (needCreate == true)
    {
        changeView(GameView::GV_MOVIE);
        CharacterCreator* characterCreator = WidgetManager::getInstance().characterCreator();
        QRect rect(characterCreator->geometry());
        rect.setLeft(this->geometry().left());
        rect.setTop(this->geometry().top());
        this->setGeometry(rect);
        this->setCentralWidget(characterCreator);
        this->setMaximumSize(characterCreator->size());
        this->setMinimumSize(characterCreator->size());
    }
    else
    {
        this->setGeometry(originRect);
        this->setMaximumSize(originMaximumSize);
        this->setMinimumSize(originMinimumSize);

        initControl();
    }
}

void GameMain::changeView(GameView gameView)
{
    if (gameView == GameView::GV_MOVIE)
    {
        _ui->menubar->setVisible(false);
        _ui->tbTop->setVisible(false);
        _ui->tbLeftSide->setVisible(false);
    }
    else if (gameView == GameView::GV_GENERAL)
    {
        _ui->menubar->setVisible(true);
        _ui->tbTop->setVisible(true);
        _ui->tbLeftSide->setVisible(true);
    }
}

void GameMain::loadGameData()
{
    GameStatusBarWidget* gameStatusBarWidget
        = WidgetManager::getInstance().gameStatusBarWidget();
    gameStatusBarWidget->initStatus(3740133615);
}
