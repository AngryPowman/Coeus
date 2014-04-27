#ifndef __COEUS_EDITOR_MAIN_H__
#define __COEUS_EDITOR_MAIN_H__

#include <QtWidgets/QMainWindow>
#include "ui_coeus_editor.h"

class CoeusEditorMain : public QMainWindow
{
    Q_OBJECT

public:
    CoeusEditorMain(QWidget *parent = 0);
    ~CoeusEditorMain();

private:
    Ui::CoeusEditorMain ui;
};

#endif // COEUS_EDITOR_H
