#include "stdafx.h"
#include "coeus_editor.h"
#include <QtWidgets/QApplication>
#include <QtPlugin>
#include "npc_editor.h"
#include "ui_window_npc_editor.h"

Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    NPCEditor w;
    w.show();
    return a.exec();
}
