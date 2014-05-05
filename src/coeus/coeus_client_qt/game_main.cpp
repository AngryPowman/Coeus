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
    _gameStatusBarWidget = new GameStatusBarWidget(splitterMain);

    QSplitter* splitterRight = new QSplitter(Qt::Vertical, splitterMain);
    splitterRight->setOpaqueResize(true);
    _gameMapWidget = new GameMapWidget(splitterRight);
    _gameChatWidget = new GameChatWidget(splitterRight);

    this->setCentralWidget(splitterMain);

    // connect signal to slots
    connect(_ui->actionAbout_QT, SIGNAL(triggered()), this, SLOT(slotOnAboutQT()));
}

void GameMain::slotOnAboutQT()
{
    QMessageBox::aboutQt(this);
}