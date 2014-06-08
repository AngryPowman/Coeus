#ifndef __ITEM_INDEX_WIDGET_H__
#define __ITEM_INDEX_WIDGET_H__

// $class : ItemIndexWidget
// Item index graph use to show a single row in QTableView.

#include <QWidget>

namespace Ui { class ItemIndexWidget; };

class GameItem;
class ItemIndexWidget : public QWidget
{
    Q_OBJECT

    friend class GameItemTableView;

public:
    explicit ItemIndexWidget(const GameItem& item);
    virtual ~ItemIndexWidget();

public:
    void initGraph();
    void updateGraph();
    const GameItem& item() const;

private:
    void setIcon(const QString& icon, const QSize& size);
    void setItemName(const QString& name);
    void setItemDescription(const QString& description);
    void setItemTypename(const QString& itemTypename);
    void setItemCount(int count);

    // Draw text in specified rect, returns new rect for text
    QRect drawRichText(const QString& text, const QRect& rect);

private:
    const GameItem& _gameItem;
    Ui::ItemIndexWidget* _ui;
};

#endif
