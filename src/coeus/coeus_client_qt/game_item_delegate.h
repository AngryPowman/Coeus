#ifndef __GAME_ITEM_DELEGATE_H__
#define __GAME_ITEM_DELEGATE_H__

#include <QObject>
#include <QTreeWidget>
#include <QLineEdit>
#include <QStyledItemDelegate>
#include <QLabel>
#include <QStandardItemModel>
#include <QPixmap>
#include <QApplication>
#include <QPainter>
#include <QTextItem>
#include <QPushButton>
#include "game_common/game_item.h"

class GameItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    enum GameItemIndex
    {
        ItemGeneral
    };
    static const int DEFAULT_ICON_SIZE = 56;
    static const int DEFAULT_ITEM_SEL_SIZE = DEFAULT_ICON_SIZE;

public:
    GameItemDelegate::GameItemDelegate(QObject* parent = nullptr)
        : QStyledItemDelegate(parent)
    {

    }

    virtual ~GameItemDelegate()
    {
    
    }

public:
    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
    {
//         QWidget* itemWidget = new QWidget(dynamic_cast<QWidget*>(this->parent()));
//         if (index.column() == ItemGeneral)
//         {
//             static QSize sIconSize(64, 64);
//             const GameItem& gameItem = index.data(Qt::DisplayRole).value<GameItem>();
// 
//             // Draw item icon
//             QPixmap itemIconPixmap = QPixmap(QString::fromStdString(gameItem.icon())).scaled(sIconSize);
//             qApp->style()->drawItemPixmap(painter, option.rect, Qt::AlignLeft, QPixmap(itemIconPixmap));
// 
//             // Draw item name
//             const QString& itemName = QString::fromLocal8Bit(gameItem.name().c_str());
//             QStyleOptionViewItem itemNameOption = option;
//             itemNameOption.displayAlignment = Qt::AlignLeft | Qt::AlignTop;
//             itemNameOption.rect.setLeft(option.rect.left() + sIconSize.width() + 10);
//             itemNameOption.rect.setTop(option.rect.top() + 16);
//             qApp->style()->drawItemText(painter, itemNameOption.rect, itemNameOption.displayAlignment, QApplication::palette(), true, itemName);
// 
//             // Draw item description
//             const QString& itemDescription = QString::fromLocal8Bit(gameItem.description().c_str());
//             QStyleOptionViewItem itemDescriptionOption = option;
//             itemDescriptionOption.displayAlignment = Qt::AlignLeft;
//             itemDescriptionOption.rect.setLeft(option.rect.left() + sIconSize.width() + 10);
//             itemDescriptionOption.rect.setTop(option.rect.top() + 36/* + sIconSize.height() - 10*/);
//             qApp->style()->drawItemText(painter, itemDescriptionOption.rect, itemDescriptionOption.displayAlignment, QApplication::palette(), true, itemDescription, QPalette::ColorRole::Shadow);
// 
//             // Draw item typename
//             const QString& itemTypename = QString::fromLocal8Bit(gameItem.typeName().c_str());
//             QStyleOptionViewItem itemTypenameOption = option;
//             itemTypenameOption.displayAlignment = Qt::AlignVCenter;
//             itemTypenameOption.rect.setLeft(option.rect.left() + sIconSize.width() + 230);
//             qApp->style()->drawItemText(painter, itemTypenameOption.rect, itemTypenameOption.displayAlignment, QApplication::palette(), true, itemTypename);
// 
//             // Draw count number
//             const QString& itemCount = QString::number(gameItem.count());
//             QStyleOptionViewItem itemCountOption = option;
//             itemCountOption.displayAlignment =  Qt::AlignVCenter;
//             itemCountOption.rect.setLeft(option.rect.left() + sIconSize.width() + 350);
//             qApp->style()->drawItemText(painter, itemCountOption.rect, itemCountOption.displayAlignment, QApplication::palette(), true, itemCount);
// 
//             // Draw use button
//             QStyleOptionButton useButtonOption;
//             //QRect buttonRect = QApplication::style()->subElementRect(QStyle::SE_PushButtonLayoutItem, &useButtonOption);
//             useButtonOption.rect = option.rect;
//             useButtonOption.text = QStringLiteral("使用");
//             useButtonOption.state |= QStyle::State_Active;
//             useButtonOption.state |= QStyle::State_Enabled;
//             useButtonOption.state |= QStyle::State_Window;
//             useButtonOption.features = QStyleOptionButton::ButtonFeature::DefaultButton;
//             //useButtonOption.rect.setTop(option.rect.top());
//             useButtonOption.rect.setSize(QSize(64, 24));
//             //useButtonOption.rect.setLeft(option.rect.left() + sIconSize.width() + 420);
//             qApp->style()->drawControl(QStyle::CE_PushButton, &useButtonOption, painter);
// 
//             QPushButton* button = new QPushButton(itemWidget);
//             button->setText(QStringLiteral("使用"));
//             button->setGeometry(option.rect);
//         }
//         else
//         {
//             // calling default delegate
//             QStyledItemDelegate::paint(painter, option, index);
//         }
    }

    QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option,
        const QModelIndex& index) const
    {
        QLabel* itemName = nullptr;

        // Todo:
        // ...

        return itemName;
    }

    void setEditorData(QWidget* editor, const QModelIndex& index) const
    {
        if (index.isValid())
        {
            // ... 
        }
    }

    void setModelData(QWidget* editor,
        QAbstractItemModel* model,
        const QModelIndex& index
        ) const
    {
        if (index.isValid())
        {
            // ...
        }
    }

    void updateEditorGeometry(QWidget* editor,
        const QStyleOptionViewItem& option,
        const QModelIndex& index
        ) const
    {
        editor->setGeometry(option.rect);
    }

    QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const
    {
        // ...
        return QStyledItemDelegate::sizeHint(option, index);
    }
};

class GameItemModel : public QStandardItemModel
{
    Q_OBJECT

public:
    GameItemModel(QObject* parent = nullptr)
        : QStandardItemModel(parent) { }

    GameItemModel(int row, int column, QObject* parent = nullptr)
        : QStandardItemModel(row, column, parent) { }

    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const
    {
        if (Qt::TextAlignmentRole == role)
            return Qt::AlignCenter;

        return QStandardItemModel::data(index, role);
    }
};


#endif // !__GAME_ITEM_DELEGATE_H__
