#ifndef NPC_EDITOR_H
#define NPC_EDITOR_H

#include <QWidget>
#include "ui_widget_npc_editor.h"
#include "game_common/config/npc_config.h"

Q_DECLARE_METATYPE(const NPCData*);

class NPCEditor : public QWidget
{
    Q_OBJECT

public:
    //对话树节点类型
    enum DialogueTreeNodeType
    {
        DT_NONE,
        DT_DIALOGUE,                // NPC主动对白
        DT_DIALOGUE_OPTION,         // 对话选项
    };

    //NPC节点类型
    enum NPCNodeType
    {
        NPCCategory,
        NPCItem
    };

private:
    //对话树右键菜单
    enum DialogueTree
    {
        DTC_M_ADD_DIALOGUE,
        DTC_M_ADD_OPTION,
        DTC_M_EDIT_ITEM,
        DTC_M_RESET_CONDITION,
        DTC_M_MOVE_UP,
        DTC_M_MOVE_DOWN,
        DTC_M_CUT,
        DTC_M_COPY,
        DTC_M_PASTE,
        DTC_M_DELETE,
        DTC_M_SELECT_ALL,
        
        DTC_M_MAX
    };

public:
    NPCEditor(QWidget *parent = 0);
    ~NPCEditor();

public:
    void init();

private slots:
    void slotNPCItemClicked(QTreeWidgetItem* item, int column);
    void slotOnSave();
    void slotOnTextValueChanged(const QString& value) { slotOnValueChanged(); }
    void slotOnCheckValueChanged(bool){ slotOnValueChanged(); }
    void slotOnIntValueChanged(int){ slotOnValueChanged(); }
    void slotOnValueChanged();
    void slotOnListDialoguesTypeItemClicked(QListWidgetItem*);
    void slotOnDialoguesTreeContextMenu(const QPoint& point);

    //对话树菜单项
    void slotOnAddDialogueAction(bool);         //添加对话
    void slotOnAddOptionAction(bool);           //添加选项
    void slotOnEditItemAction(bool);            //编辑
    void slotOnResetConditionAction(bool);      //清空条件
    void slotOnMoveUpAction(bool);              //上移
    void slotOnMoveDownAction(bool);            //下移
    void slotOnCutAction(bool);                 //剪切
    void slotOnCopyAction(bool);                //复制
    void slotOnPasteAction(bool);               //粘贴
    void slotOnDeleteAction(bool);              //删除
    void slotOnSeleteAllAction(bool);           //全选

public:
    void loadNPCTreeList();

private:
    void setSaveFlagEnabled(bool value);
    void updateDialogueTreeContextMenu(DialogueTreeNodeType nodeType);

private:
    bool _saveStateLock;
    QMenu* _dialogueTreeContextMenu;
    QAction* _dialogueTreeMenuActions[DTC_M_MAX];

    Ui::NPCEditor _ui;
};

#endif // NPC_EDITOR_H
