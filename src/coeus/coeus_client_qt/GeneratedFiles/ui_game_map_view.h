/********************************************************************************
** Form generated from reading UI file 'game_map_view.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_MAP_VIEW_H
#define UI_GAME_MAP_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMapView
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *mapView;
    QMenuBar *menubar;

    void setupUi(QMainWindow *GameMapView)
    {
        if (GameMapView->objectName().isEmpty())
            GameMapView->setObjectName(QStringLiteral("GameMapView"));
        GameMapView->resize(800, 600);
        centralwidget = new QWidget(GameMapView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mapView = new QGraphicsView(centralwidget);
        mapView->setObjectName(QStringLiteral("mapView"));
        mapView->setAutoFillBackground(true);
        mapView->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        mapView->setBackgroundBrush(brush);
        mapView->setDragMode(QGraphicsView::NoDrag);
        mapView->setResizeAnchor(QGraphicsView::AnchorUnderMouse);

        horizontalLayout->addWidget(mapView);

        GameMapView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameMapView);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        GameMapView->setMenuBar(menubar);

        retranslateUi(GameMapView);

        QMetaObject::connectSlotsByName(GameMapView);
    } // setupUi

    void retranslateUi(QMainWindow *GameMapView)
    {
        GameMapView->setWindowTitle(QApplication::translate("GameMapView", "\346\237\217\346\236\227\345\223\210\347\211\271\345\244\247\351\231\206", 0));
    } // retranslateUi

};

namespace Ui {
    class GameMapView: public Ui_GameMapView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MAP_VIEW_H
