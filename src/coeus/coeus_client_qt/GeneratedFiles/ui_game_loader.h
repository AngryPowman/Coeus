/********************************************************************************
** Form generated from reading UI file 'game_loader.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_LOADER_H
#define UI_GAME_LOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameLoader
{
public:
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QLabel *label;

    void setupUi(QWidget *GameLoader)
    {
        if (GameLoader->objectName().isEmpty())
            GameLoader->setObjectName(QStringLiteral("GameLoader"));
        GameLoader->resize(329, 72);
        verticalLayout = new QVBoxLayout(GameLoader);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        progressBar = new QProgressBar(GameLoader);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        label = new QLabel(GameLoader);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        retranslateUi(GameLoader);

        QMetaObject::connectSlotsByName(GameLoader);
    } // setupUi

    void retranslateUi(QWidget *GameLoader)
    {
        GameLoader->setWindowTitle(QApplication::translate("GameLoader", "\350\275\275\345\205\245\346\270\270\346\210\217...", 0));
        label->setText(QApplication::translate("GameLoader", "\345\210\235\345\247\213\345\214\226\346\270\270\346\210\217....", 0));
    } // retranslateUi

};

namespace Ui {
    class GameLoader: public Ui_GameLoader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_LOADER_H
