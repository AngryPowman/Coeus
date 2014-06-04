#include "item_index_widget.h"
#include "game_common/game_item.h"
#include <QtWidgets/QLabel>

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
    QPixmap iconPixmap = QPixmap(QString::fromStdString(_gameItem.icon())).scaled(sIconSize);
    QLabel* iconLable = new QLabel(this);
    iconLable->setPixmap(iconPixmap);

    // Draw item name
    QLabel* itemNameLabel = new QLabel(this);
    itemNameLabel->setText("<b>" + QString::fromLocal8Bit(_gameItem.name().c_str()) + "</b>");
    QRect itemNameLabelRect(itemNameLabel->rect());
    itemNameLabelRect.setTop(itemNameLabelRect.top() + 10);
    itemNameLabelRect.setLeft(itemNameLabelRect.left() + sIconSize.width() + 4);
    itemNameLabel->setGeometry(itemNameLabelRect);
    itemNameLabel->adjustSize();

    // Draw item description
    QLabel* itemDescriptionLabel = new QLabel(this);
    itemDescriptionLabel->setText(QString::fromLocal8Bit(_gameItem.description().c_str()));
    QRect itemDescriptionLabelRect(itemNameLabel->rect());
    itemDescriptionLabelRect.setTop(itemNameLabelRect.top() + itemNameLabelRect.height() + 5);
    itemDescriptionLabelRect.setLeft(itemNameLabelRect.left());
    itemDescriptionLabel->setGeometry(itemDescriptionLabelRect);
    itemDescriptionLabel->adjustSize();

    // Draw item typename
    QLabel* itemTypenameLabel = new QLabel(this);
    itemTypenameLabel->setText(QString::fromLocal8Bit(_gameItem.typeName().c_str()));
    QRect itemTypenameLabelRect(itemTypenameLabel->rect());
    itemTypenameLabelRect.setTop(itemNameLabelRect.top() + itemNameLabelRect.height() / 2);
    itemTypenameLabelRect.setLeft(itemDescriptionLabelRect.left() + 240);
    itemTypenameLabel->setGeometry(itemTypenameLabelRect);
    itemTypenameLabel->adjustSize();

    /*const QString& itemTypename = QString::fromLocal8Bit(gameItem.typeName().c_str());
    QStyleOptionViewItem itemTypenameOption = option;
    itemTypenameOption.displayAlignment = Qt::AlignVCenter;
    itemTypenameOption.rect.setLeft(option.rect.left() + sIconSize.width() + 230);
    qApp->style()->drawItemText(painter, itemTypenameOption.rect, itemTypenameOption.displayAlignment, QApplication::palette(), true, itemTypename);

    // Draw count number
    const QString& itemCount = QString::number(gameItem.count());
    QStyleOptionViewItem itemCountOption = option;
    itemCountOption.displayAlignment = Qt::AlignVCenter;
    itemCountOption.rect.setLeft(option.rect.left() + sIconSize.width() + 350);
    qApp->style()->drawItemText(painter, itemCountOption.rect, itemCountOption.displayAlignment, QApplication::palette(), true, itemCount);
    */

    this->adjustSize();
}
