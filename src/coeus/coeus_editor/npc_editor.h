#ifndef NPC_EDITOR_H
#define NPC_EDITOR_H

#include <QWidget>
#include "ui_window_npc_editor.h"
#include "game_common/config/npc_config.h"

Q_DECLARE_METATYPE(const NPCData*);

class NPCEditor : public QMainWindow
{
    Q_OBJECT

public:
    //对话树节点类型
    enum DialogueTreeNodeType
    {
        DT_NONE,
        DT_NPC_ROOT,                // NPC根节点
        DT_OPTION,                  // 选项
        DT_OPTION_CONTENT,          // 选项内容
        DT_SHOW_CONDITION,          // 显示条件
        DT_EXECUTE_CONDITION,       // 执行条件
        DT_DIALOGUE_ROOT,           // 随机对话对白
        DT_DIALOGUES,               // 对话数组父节点
        DT_DIALOGUE_CONTENT,        // 对话节点
        DT_EVENT_SCRIPT,            // 事件脚本
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
    void loadNPCTreeList();

private:
    void setSaveFlagEnabled(bool value);
    void updateDialogueTreeContextMenu(DialogueTreeNodeType nodeType);
    QString formatStringList(const std::vector<std::string>& strList);

    // dialogue tree nodes
    QTreeWidgetItem* addNPCNode(int npcId, const std::string& name);
    QTreeWidgetItem* addDialogueRootNode(QTreeWidgetItem* parent, const DialogueParts& dialogueParts);
    QTreeWidgetItem* addShowConditionScriptNode(QTreeWidgetItem* parent, const std::string& script);
    QTreeWidgetItem* addExecuteConditionScriptNode(QTreeWidgetItem* parent, const std::string& script);
    QTreeWidgetItem* addEventScriptNode(QTreeWidgetItem* parent, const std::string& script);
    QTreeWidgetItem* addOptionNode(QTreeWidgetItem* parent);
    QTreeWidgetItem* addOptionContentNode(QTreeWidgetItem* parent, const std::string& content);
    QTreeWidgetItem* addDialoguesNode(QTreeWidgetItem* parent, const DialogueParts& dialogueParts);

private slots:
    // general slots
    void slotNPCItemClicked(QTreeWidgetItem* item, int column);
    void slotOnSave();
    void slotOnTextValueChanged(const QString& value) { slotOnValueChanged(); }
    void slotOnCheckValueChanged(bool){ slotOnValueChanged(); }
    void slotOnIntValueChanged(int){ slotOnValueChanged(); }
    void slotOnValueChanged();
    void slotOnListDialoguesTypeItemClicked(QListWidgetItem*);
    void slotOnDialoguesTreeContextMenu(const QPoint& point);

    //dialogue tree menu actions
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

private:
    bool _saveStateLock;
    NPCData* _currentNPC;
    QMenu* _dialogueTreeContextMenu;
    QAction* _dialogueTreeMenuActions[DTC_M_MAX];

    Ui::GameNPCEditor _ui;
};

#endif // NPC_EDITOR_H
