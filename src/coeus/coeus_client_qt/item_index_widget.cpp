#include "item_index_widget.h"
#include "game_common/game_item.h"
#include <QtWidgets/QLabel>
#include "game_common/path_definition.h"

ItemIndexWidget::ItemIndexWidget(const GameItem& item)
    : _gameItem(item)
{

}

ItemIndexWidget::~ItemIndexWidget()
{

}

void ItemIndexWidget::initGraph()
{
    static QSize sIconSize(64, 64);

    // Draw item icon
    std::string iconPath = GameDirecotry::ItemDirectory + _gameItem.icon();
    QPixmap iconPixmap = QPixmap(QString::fromStdString(iconPath)).scaled(sIconSize);
    QLabel* iconLable = new QLabel(this);
    iconLable->setPixmap(iconPixmap);

    // Draw item name
    QLabel* itemNameLabel = new QLabel(this);
    itemNameLabel->setText("<b>" + QString::fromStdString(_gameItem.name()) + "</b>");
    QRect itemNameLabelRect(itemNameLabel->rect());
    itemNameLabelRect.setTop(itemNameLabelRect.top() + 10);
    itemNameLabelRect.setLeft(itemNameLabelRect.left() + sIconSize.width() + 4);
    itemNameLabel->setGeometry(itemNameLabelRect);
    itemNameLabel->adjustSize();

    // Draw item description
    QLabel* itemDescriptionLabel = new QLabel(this);
    itemDescriptionLabel->setText(QString::fromStdString(_gameItem.description()));
    QRect itemDescriptionLabelRect(itemNameLabel->rect());
    itemDescriptionLabelRect.setTop(itemNameLabelRect.top() + itemNameLabelRect.height() + 5);
    itemDescriptionLabelRect.setLeft(itemNameLabelRect.left());
    itemDescriptionLabel->setGeometry(itemDescriptionLabelRect);
    itemDescriptionLabel->adjustSize();

    // Draw item typename
    QLabel* itemTypenameLabel = new QLabel(this);
    itemTypenameLabel->setText(QString::fromStdString(_gameItem.typeName()));
    QRect itemTypenameLabelRect(itemTypenameLabel->rect());
    itemTypenameLabelRect.setTop(itemNameLabelRect.top() + itemNameLabelRect.height() / 2);
    itemTypenameLabelRect.setLeft(itemDescriptionLabelRect.left() + 240);
    itemTypenameLabel->setGeometry(itemTypenameLabelRect);
    itemTypenameLabel->adjustSize();

    // Draw count number
    QLabel* itemCountLabel = new QLabel(this);
    itemCountLabel->setText(QString::number(_gameItem.count()));
    QRect itemCountLabelRect(itemCountLabel->rect());
    itemCountLabelRect.setTop(itemNameLabelRect.top() + itemCountLabelRect.height() / 2);
    itemCountLabelRect.setLeft(itemTypenameLabelRect.left() + 160);
    itemCountLabel->setGeometry(itemCountLabelRect);
    itemCountLabel->adjustSize();

    this->adjustSize();
}
