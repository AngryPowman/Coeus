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
        QWidget* itemWidget = nullptr;
        if (index.column() == ItemGeneral)
        {
            static QSize sIconSize(64, 64);
            const GameItem& gameItem = index.data(Qt::DisplayRole).value<GameItem>();

            // draw item icon
            QPixmap itemIconPixmap = QPixmap(QString::fromStdString(gameItem.icon())).scaled(sIconSize);
            qApp->style()->drawItemPixmap(painter, option.rect, Qt::AlignLeft, QPixmap(itemIconPixmap));

            // draw item name
            const QString& itemName = QString::fromStdString(gameItem.name());
            QStyleOptionViewItem itemNameOption = option;
            itemNameOption.displayAlignment = Qt::AlignLeft | Qt::AlignTop;
            itemNameOption.rect.setLeft(option.rect.left() + sIconSize.width() + 10);
            itemNameOption.rect.setTop(option.rect.top() + 16);
            qApp->style()->drawItemText(painter, itemNameOption.rect, itemNameOption.displayAlignment, QApplication::palette(), true, itemName);

            // draw item description
            const QString& itemDescription = QString::fromStdString(gameItem.description());
            QStyleOptionViewItem itemDescriptionOption = option;
            itemDescriptionOption.displayAlignment = Qt::AlignLeft;
            itemDescriptionOption.rect.setLeft(option.rect.left() + sIconSize.width() + 10);
            itemDescriptionOption.rect.setTop(option.rect.top() + 36/* + sIconSize.height() - 10*/);
            qApp->style()->drawItemText(painter, itemDescriptionOption.rect, itemDescriptionOption.displayAlignment, QApplication::palette(), true, itemDescription, QPalette::ColorRole::Shadow);

            // draw count number
            const QString& itemCount = QString::number(gameItem.count());
            QStyleOptionViewItem itemCountOption = option;
            itemCountOption.displayAlignment = Qt::AlignCenter;
            itemCountOption.rect.setLeft(option.rect.left() + sIconSize.width() + 64);
            qApp->style()->drawItemText(painter, itemCountOption.rect, itemCountOption.displayAlignment, QApplication::palette(), true, itemCount);

            //qApp->style()->drawControl(QStyle::CE_PushButtonLabel, &xxxOption, painter);
        }
        else
        {
            // calling default delegate
            QStyledItemDelegate::paint(painter, option, index);
        }
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
            //QLineEdit* lineE = qobject_cast<QLineEdit*>(editor);
            //lineE->setText(index.data(Qt::DisplayRole).toString());//text() == data(Qt::DispalyRole).toString()  
        }
    }

    void setModelData(QWidget* editor,
        QAbstractItemModel* model,
        const QModelIndex& index
        ) const
    {
        if (index.isValid())
        {
            //QLineEdit* lineE = qobject_cast<QLineEdit*>(editor);
            //model->setData(index, lineE->text());
        }
    }

    void updateEditorGeometry(QWidget* editor,
        const QStyleOptionViewItem& option,
        const QModelIndex& index
        ) const
    {
        editor->setGeometry(option.rect);
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
