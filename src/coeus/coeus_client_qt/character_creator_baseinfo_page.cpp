#include "character_creator_baseinfo_page.h"
#include "ui_character_creator_baseinfo_page.h"
#include "game_common/config/belif_config.h"
#include "character_config.h"
#include "game_main.h"
#include "character_creator_left_guides_widget.h"
#include "widget_manager.h"

CharacterCreator_BaseInfoPage::CharacterCreator_BaseInfoPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_BaseInfoPage;
    _ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    CharacterCreator_LeftGuidesWidget* leftWidget = new CharacterCreator_LeftGuidesWidget(this);
    leftWidget->setCurrentPage(BASEINFO_PAGE);
    layout->addWidget(leftWidget);
}

CharacterCreator_BaseInfoPage::~CharacterCreator_BaseInfoPage()
{
    delete _ui;
}

bool CharacterCreator_BaseInfoPage::validatePage()
{
    if (_ui->txtNickname->text().size() == 0)
    {
        _ui->lblTip->setText("<font color=red>昵称不能为空。</font>");
        return false;
    }

    wizard()->setProperty("nickname", _ui->txtNickname->text());
    _ui->lblTip->setText("");

    return true;
}

/*
void CharacterCreator_BaseInfoPage::slotOnRandomNickname()
{
    Protocol::CSGetRandomNameReq getRandomNicknameReq;
    GameNetwork::getInstance().sendMessage(Opcodes::CSGetRandomNameReq, getRandomNicknameReq);
}

void CharacterCreator_BaseInfoPage::slotOnCreateBtn()
{
    if (_ui->txtNickname->text().length() == 0)
    {
        QMessageBox::information(this, "提示", "行走江湖岂能无名无姓？");
        _ui->txtNickname->selectAll();
        _ui->txtNickname->setFocus();
        return;
    }

    Protocol::CSCreateCharacterReq createCharacterReq;
    createCharacterReq.nickname = _ui->txtNickname->text().toStdString();
    createCharacterReq.belief = _ui->cmbBelif->currentIndex();
    createCharacterReq.gender = _ui->optMale->isChecked() ? Gender::Male : Gender::Female;
    createCharacterReq.character_type = _ui->cmbAvatarList->currentIndex();

    GameNetwork::getInstance().sendMessage(Opcodes::CSCreateCharacterReq, createCharacterReq);
}

void CharacterCreator_BaseInfoPage::onGetRandomNicknameRsp(const Protocol::SCGetRandomNameRsp& randomNicknameRsp)
{
    _ui->txtNickname->setText(QString::fromStdString(randomNicknameRsp.random_name.c_str()));
}

void CharacterCreator_BaseInfoPage::onCreateCharacterRsp(const Protocol::SCCreateCharacterRsp& createCharacterRsp)
{
    if (createCharacterRsp.result == false)
    {
        QMessageBox::critical(this, "失败", "无法创建角色。");
        exit(0);
    }
    else
    {
        //显示游戏主界面
        GameMain* gameMain = WidgetManager::getInstance().gameMain();
        gameMain->show();

        this->close();
    }
}*/