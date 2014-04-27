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
    //�Ի����ڵ�����
    enum DialogueTreeNodeType
    {
        DT_NONE,
        DT_DIALOGUE,                // NPC�����԰�
        DT_DIALOGUE_OPTION,         // �Ի�ѡ��
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

private slots:
    void slotNPCItemClicked(QTreeWidgetItem* item, int column);
    void slotOnSave();
    void slotOnTextValueChanged(const QString& value) { slotOnValueChanged(); }
    void slotOnCheckValueChanged(bool){ slotOnValueChanged(); }
    void slotOnIntValueChanged(int){ slotOnValueChanged(); }
    void slotOnValueChanged();
    void slotOnListDialoguesTypeItemClicked(QListWidgetItem*);
    void slotOnDialoguesTreeContextMenu(const QPoint& point);

    //�Ի����˵���
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
