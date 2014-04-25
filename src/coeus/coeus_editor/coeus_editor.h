#ifndef COEUS_EDITOR_H
#define COEUS_EDITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_coeus_editor.h"

class coeus_editor : public QMainWindow
{
    Q_OBJECT

public:
    coeus_editor(QWidget *parent = 0);
    ~coeus_editor();

private:
    Ui::coeus_editorClass ui;
};

#endif // COEUS_EDITOR_H
