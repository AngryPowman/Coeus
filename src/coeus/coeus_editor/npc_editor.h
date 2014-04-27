#ifndef NPC_EDITOR_H
#define NPC_EDITOR_H

#include <QWidget>
#include "ui_widget_npc_editor.h"
#include "game_common/config/npc_config.h"

Q_DECLARE_METATYPE(const NPCData*);

//对话树节点类型
enum DialoguesTreeNodeType
{
    DT_NONE, 
    DT_DIALOGUE,                // NPC主动对白
    DT_DIALOGUE_OPTION,         // 对话选项
    DT_DIALOGUE_OPTION_EX,      // 选项答复
};

enum NPCNodeType
{
    NPCCategory,
    NPCItem
};

class NPCEditor : public QWidget
{
    Q_OBJECT

public:
    NPCEditor(QWidget *parent = 0);
    ~NPCEditor();

public:
    void loadNPCTreeList();

private:
    void setSaveFlagEnabled(bool value);

private slots:
    void slotNPCItemClicked(QTreeWidgetItem* item, int column);
    void slotOnSave();
    void slotOnTextValueChanged(const QString& value) { slotOnValueChanged(); }
    void slotOnCheckValueChanged(bool){ slotOnValueChanged(); }
    void slotOnIntValueChanged(int){ slotOnValueChanged(); }
    void slotOnValueChanged();
    void slotOnListDialoguesTypeItemClicked(QListWidgetItem*);
    void slotOnDialoguesTreeContextMenu(const QPoint& point);

private:
    bool _saveStateLock;
    Ui::NPCEditor _ui;
};

#endif // NPC_EDITOR_H
