#ifndef __ITEM_INDEX_WIDGET_H__
#define __ITEM_INDEX_WIDGET_H__

// $class : ItemIndexWidget
// Draw an index graph use to show a single row in QTableView.

#include <QWidget>

class GameItem;
class ItemIndexWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ItemIndexWidget(const GameItem& item);
    virtual ~ItemIndexWidget();

public:
    void initGraph();
    void updateGraph();
    const GameItem& item() const;

private:
    const GameItem& _gameItem;
};

#endif
