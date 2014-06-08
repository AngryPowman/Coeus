#ifndef __GAME_ITEM_VIEW_H__
#define __GAME_ITEM_VIEW_H__

#include <QTableView>

class GameItem;
class GameItemModel;
class GameItemTableView : private QTableView
{
	Q_OBJECT

public:
    static const int DEFAULT_ICON_SIZE = 64;
    static const int DEFAULT_ITEM_ROW_HEIGHT = 80;

public:
	GameItemTableView(QWidget* parent = nullptr);
	virtual ~GameItemTableView();

public:

    void addItem(const GameItem& gameItem);
    QTableView* rawView();

private:
    GameItemModel* _itemModel;
};


#endif