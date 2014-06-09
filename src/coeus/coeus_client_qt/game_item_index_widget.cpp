#include "game_item_index_widget.h"
#include "game_common/game_item.h"
#include <QtWidgets/QLabel>
#include "game_common/path_definition.h"
#include "ui_item_index_widget.h"

ItemIndexWidget::ItemIndexWidget(const GameItem& item)
    : _gameItem(item)
{
    _ui = new Ui::ItemIndexWidget();
    _ui->setupUi(this);
}

ItemIndexWidget::~ItemIndexWidget()
{

}

void ItemIndexWidget::initGraph()
{
    static QSize sIconSize(64, 64);

    std::string iconPath = GameDirecotry::ItemDirectory + _gameItem.icon();
    setIcon(QString::fromStdString(iconPath), sIconSize);
    setItemName(QString::fromStdString(_gameItem.name().c_str()));
    setItemDescription(QString::fromStdString(_gameItem.description().c_str()));
    setItemTypename(QString::fromStdString(_gameItem.typeName().c_str()));
    setItemCount(_gameItem.count());
    
    _ui->btnEmploy->setEnabled(_gameItem.flags() & ItemFlag::Item_CanUse);
    _ui->btnEmploy->setText(QString::fromStdString(ItemHelper::Employ::toEmployName(_gameItem.type())));
}

void ItemIndexWidget::setIcon(const QString& icon, const QSize& size)
{
    QPixmap iconPixmap = QPixmap(icon).scaled(size);
    _ui->lblIcon->setPixmap(iconPixmap);
    _ui->lblIcon->adjustSize();
}

void ItemIndexWidget::setItemName(const QString& name)
{
    _ui->lblItemName->setText("<b>" + name + "</b>");
}

void ItemIndexWidget::setItemDescription(const QString& description)
{
	_ui->lblItemDescription->setTextFormat(Qt::TextFormat::RichText);
    _ui->lblItemDescription->setText(description);
}

void ItemIndexWidget::setItemTypename(const QString& itemTypename)
{
    _ui->lblTypename->setText(itemTypename);
}

void ItemIndexWidget::setItemCount(int count)
{
    _ui->lblCount->setText(QString::number(count));
}
