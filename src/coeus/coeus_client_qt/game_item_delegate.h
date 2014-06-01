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

class GameItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    enum GameItemIndex
    {
        ItemGeneral
    };

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
            QWidget* itemWidget = new QWidget();

            static QSize sIconSize(48, 48);

            // draw item icon
            QPixmap itemIconPixmap = QPixmap("images/ui/lsb_char_details.png").scaled(sIconSize);
            qApp->style()->drawItemPixmap(painter, option.rect, Qt::AlignCenter, QPixmap(itemIconPixmap));

            // draw item name
            QString text = "<b>³¾·âµÄÄ§·¨ÃØ¼®</b>";
            QStyleOptionViewItem myOption = option;
            myOption.displayAlignment = Qt::AlignLeft | Qt::AlignVCenter;
            qApp->style()->drawItemText(painter, myOption.rect, myOption.displayAlignment, QApplication::palette(), true, text);
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
