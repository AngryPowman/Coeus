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
    //�Ի����ڵ�����
    enum DialogueTreeNodeType
    {
        DT_NONE,
        DT_NPC_ROOT,                // NPC���ڵ�
        DT_OPTION,                  // ѡ��
        DT_OPTION_CONTENT,          // ѡ������
        DT_SHOW_CONDITION,          // ��ʾ����
        DT_EXECUTE_CONDITION,       // ִ������
        DT_DIALOGUE_ROOT,           // ����Ի��԰�
        DT_DIALOGUES,               // �Ի����鸸�ڵ�
        DT_DIALOGUE_CONTENT,        // �Ի��ڵ�
        DT_EVENT_SCRIPT,            // �¼��ű�
    };

    //NPC�ڵ�����
    enum NPCNodeType
    {
        NPCCategory,
        NPCItem
    };

private:
    //�Ի����Ҽ��˵�
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
    void slotOnAddDialogueAction(bool);         //��ӶԻ�
    void slotOnAddOptionAction(bool);           //���ѡ��
    void slotOnEditItemAction(bool);            //�༭
    void slotOnResetConditionAction(bool);      //�������
    void slotOnMoveUpAction(bool);              //����
    void slotOnMoveDownAction(bool);            //����
    void slotOnCutAction(bool);                 //����
    void slotOnCopyAction(bool);                //����
    void slotOnPasteAction(bool);               //ճ��
    void slotOnDeleteAction(bool);              //ɾ��
    void slotOnSeleteAllAction(bool);           //ȫѡ

private:
    bool _saveStateLock;
    NPCData* _currentNPC;
    QMenu* _dialogueTreeContextMenu;
    QAction* _dialogueTreeMenuActions[DTC_M_MAX];

    Ui::GameNPCEditor _ui;
};

#endif // NPC_EDITOR_H
