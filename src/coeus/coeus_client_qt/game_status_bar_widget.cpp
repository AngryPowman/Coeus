#include "game_status_bar_widget.h"
#include "ui_game_statusbar_widget.h"

GameStatusBarWidget::GameStatusBarWidget(QWidget *parent)
    : QWidget(parent)
{
    _ui = new Ui::GameStatusBarWidget();
    _ui->setupUi(this);
}

GameStatusBarWidget::~GameStatusBarWidget()
{
    delete _ui;
}

void GameStatusBarWidget::initStatus(uint64 character_guid)
{
    Protocol::CSPropertiesReq propertiesReq;
    GameNetwork::getInstance().sendMessage(Opcodes::CSPropertiesReq, propertiesReq);
}

void GameStatusBarWidget::onPropertiesRsp(const Protocol::SCPropertiesRsp& propertiesRsp)
{
    if (propertiesRsp.basic_properties.max_hp != 0)
    {
        float percent = (static_cast<float>(propertiesRsp.basic_properties.hp) / static_cast<float>(propertiesRsp.basic_properties.max_hp)) * 100;
        _ui->progressHp->setValue(static_cast<int>(percent));
        _ui->progressHp->setFormat(
            QString::number(propertiesRsp.basic_properties.hp) + "/" 
            + QString::number(propertiesRsp.basic_properties.max_hp));
    }

    if (propertiesRsp.basic_properties.next_exp != 0)
    {
        float percent = (static_cast<float>(propertiesRsp.basic_properties.exp) / static_cast<float>(propertiesRsp.basic_properties.next_exp)) * 100;
        _ui->progressExp->setValue(static_cast<int>(percent));
        _ui->progressExp->setFormat(QString::number(percent) + "%");
    }

    _ui->lcdPower->display(static_cast<int>(propertiesRsp.basic_properties.power));
}

void GameStatusBarWidget::updateLevel(uint16 level)
{

}

void GameStatusBarWidget::updateCareer(uint8 career)
{

}

void GameStatusBarWidget::updateHP(uint32 hp, uint32 maxHp)
{

}

void GameStatusBarWidget::updateExp(uint32 exp)
{

}
