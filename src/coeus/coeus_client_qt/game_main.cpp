#include "game_main.h"
#include <QLayout>
#include "ui_game_main_dialog.h"
#include "game_status_bar_widget.h"
#include "game_map_widget.h"
#include "game_chat_widget.h"

GameMain::GameMain(QWidget* parent /*= 0*/)
    : QMainWindow(parent)
{
    _ui = new Ui::GameMainDialog();
    _ui->setupUi(this);

    initControl();
}

GameMain::~GameMain()
{
    delete _ui;
}

void GameMain::initControl()
{
    // init game ui layout
    QSplitter* splitterMain = new QSplitter(Qt::Horizontal, this);
    splitterMain->setStretchFactor(1, 1);
    GameStatusBarWidget* gameStatusBarWidget = WidgetManager::getInstance().gameStatusBarWidget(splitterMain);
    gameStatusBarWidget->initStatus(3740133615);

    QSplitter* splitterRight = new QSplitter(Qt::Vertical, splitterMain);
    splitterRight->setOpaqueResize(true);

    GameMapWidget* gameMapWidget = WidgetManager::getInstance().gameMapWidget(splitterRight);
    GameChatWidget* gameChatWidget = WidgetManager::getInstance().gameChatWidget(splitterRight);

    this->setCentralWidget(splitterMain);

    // connect signal to slots
    connect(_ui->actionAbout_QT, SIGNAL(triggered()), this, SLOT(slotOnAboutQT()));
}

void GameMain::slotOnAboutQT()
{
    QMessageBox::aboutQt(this);
}
