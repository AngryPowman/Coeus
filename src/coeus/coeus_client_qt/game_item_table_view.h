#ifndef __GAME_ITEM_VIEW_H__
#define __GAME_ITEM_VIEW_H__

#include <QTableView>

class GameItemTableView
{
	Q_OBJECT
public:
	GameItemView(QWidget *parent = NULL) : QTableView(parent)
	{
		verticalHeader()->hide();
		horizontalHeader()->hide();
		pWidget = NULL;
	}
};


#endif