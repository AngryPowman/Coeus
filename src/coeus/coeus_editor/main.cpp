#include "stdafx.h"
#include "coeus_editor.h"
#include <QtWidgets/QApplication>
#include <QtPlugin>

Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    coeus_editor w;
    w.show();
    return a.exec();
}
