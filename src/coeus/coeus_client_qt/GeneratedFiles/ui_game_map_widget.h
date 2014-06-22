/********************************************************************************
** Form generated from reading UI file 'game_map_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_MAP_WIDGET_H
#define UI_GAME_MAP_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMapWidget
{
public:

    void setupUi(QWidget *GameMapWidget)
    {
        if (GameMapWidget->objectName().isEmpty())
            GameMapWidget->setObjectName(QStringLiteral("GameMapWidget"));
        GameMapWidget->resize(725, 551);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameMapWidget->sizePolicy().hasHeightForWidth());
        GameMapWidget->setSizePolicy(sizePolicy);
        GameMapWidget->setStyleSheet(QStringLiteral(""));

        retranslateUi(GameMapWidget);

        QMetaObject::connectSlotsByName(GameMapWidget);
    } // setupUi

    void retranslateUi(QWidget *GameMapWidget)
    {
        GameMapWidget->setWindowTitle(QApplication::translate("GameMapWidget", "GameMapWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class GameMapWidget: public Ui_GameMapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAP_WIDGET_H
