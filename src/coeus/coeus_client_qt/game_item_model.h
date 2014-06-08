#ifndef __GAME_ITEM_MODEL_H__
#define __GAME_ITEM_MODEL_H__

#include <QStandardItemModel>

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


#endif // !__GAME_ITEM_MODEL_H__
