#include "stdafx.h"
#include "npc_editor.h"
#include "game_common/config/npc_config.h"

NPCEditor::NPCEditor(QWidget *parent)
    : QMainWindow(parent)
{
    _ui.setupUi(this);
    memset(_dialogueTreeMenuActions, 0, DTC_M_MAX);
    init();
}

NPCEditor::~NPCEditor()
{

}

void NPCEditor::init()
{
    //加载配置
    ConfigManager manager;
    NPCConfig::getInstance().initialize(&manager);
    manager.start();
    manager.wait();

    std::function<void(QObject*)> func = [&func, this](QObject* parentObject)
    {
        foreach(QObject* object, parentObject->children())
        {
            //qDebug() << object->metaObject()->className();
            QString className(object->metaObject()->className());
            if (className == "QLineEdit")
            {
                object->connect(object, SIGNAL(textChanged(const QString&)), this, SLOT(slotOnTextValueChanged(const QString&)));
            }
            else if (className == "QCheckBox")
            {
                object->connect(object, SIGNAL(clicked(bool)), this, SLOT(slotOnCheckValueChanged(bool)));
            }
            else if (className == "QSpinBox")
            {
                object->connect(object, SIGNAL(valueChanged(int)), this, SLOT(slotOnIntValueChanged(int)));
            }
            else if (className == "QTreeWidget")
            {

            }

            func(object);
        }
    };

    func(this);

    connect(_ui.tvNpcList, SIGNAL(itemClicked(QTreeWidgetItem*, int)), this, SLOT(slotNPCItemClicked(QTreeWidgetItem*, int)));
    connect(_ui.btnSave, SIGNAL(clicked()), this, SLOT(slotOnSave()));
    connect(_ui.lstDialoguesType, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(slotOnListDialoguesTypeItemClicked(QListWidgetItem*)));
    connect(_ui.tvDialoguesTree, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(slotOnDialoguesTreeContextMenu(const QPoint&)));

    _saveStateLock = false;

    //初始化对话树菜单
    _dialogueTreeContextMenu = new QMenu(this);
    _dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE] = new QAction(QStringLiteral("添加对话(&S)..."), _dialogueTreeContextMenu);
    connect(_dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE], SIGNAL(triggered(bool)), this, SLOT(slotOnAddDialogueAction(bool)));
    
    _dialogueTreeMenuActions[DTC_M_ADD_OPTION] = new QAction(QStringLiteral("添加选项(&O)..."), _dialogueTreeContextMenu);
    
    _dialogueTreeMenuActions[DTC_M_EDIT_ITEM] = new QAction(QStringLiteral("编辑(&I)..."), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_EDIT_ITEM]->setShortcut(QKeySequence(Qt::Key_Space));
    
    _dialogueTreeMenuActions[DTC_M_RESET_CONDITION] = new QAction(QStringLiteral("重置条件"), _dialogueTreeContextMenu);
    
    // ---
    _dialogueTreeMenuActions[DTC_M_MOVE_UP] = new QAction(QStringLiteral("上移"), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_MOVE_UP]->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Up));
    
    _dialogueTreeMenuActions[DTC_M_MOVE_DOWN] = new QAction(QStringLiteral("下移"), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_MOVE_DOWN]->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Down));
    
    // ---
    _dialogueTreeMenuActions[DTC_M_CUT] = new QAction(QStringLiteral("剪切(&T)"), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_CUT]->setShortcut(QKeySequence::StandardKey::Cut);
    
    _dialogueTreeMenuActions[DTC_M_COPY] = new QAction(QStringLiteral("复制(&C)"), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_COPY]->setShortcut(QKeySequence::StandardKey::Copy);
    
    _dialogueTreeMenuActions[DTC_M_PASTE] = new QAction(QStringLiteral("粘贴(&P)"), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_PASTE]->setShortcut(QKeySequence::StandardKey::Paste);
    
    _dialogueTreeMenuActions[DTC_M_DELETE] = new QAction(QStringLiteral("删除(&D)"), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_DELETE]->setShortcut(QKeySequence::StandardKey::Delete);
    
    _dialogueTreeMenuActions[DTC_M_SELECT_ALL] = new QAction(QStringLiteral("全选(&A)"), _dialogueTreeContextMenu);
    _dialogueTreeMenuActions[DTC_M_SELECT_ALL]->setShortcut(QKeySequence::StandardKey::SelectAll);

    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_ADD_OPTION]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_EDIT_ITEM]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_RESET_CONDITION]);
    _dialogueTreeContextMenu->addSeparator();
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_MOVE_UP]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_MOVE_DOWN]);
    _dialogueTreeContextMenu->addSeparator();
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_CUT]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_COPY]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_PASTE]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_DELETE]);
    _dialogueTreeContextMenu->addAction(_dialogueTreeMenuActions[DTC_M_SELECT_ALL]);

    //加载数据
    loadNPCTreeList();
}

void NPCEditor::loadNPCTreeList()
{
    _ui.tvNpcList->clear();

    const NPCDataList& npcList = NPCConfig::getInstance().getNPCList();
    for (auto iter = npcList.begin(); iter != npcList.end(); ++iter)
    {
        const NPCData& npcData = iter->second;
        QList<QTreeWidgetItem*> items = _ui.tvNpcList->findItems(QString(npcData.category.c_str()), Qt::MatchFlag::MatchFixedString);
        QTreeWidgetItem* categoryItem;
        if (items.isEmpty())
        {
            categoryItem = new QTreeWidgetItem(_ui.tvNpcList, QStringList(npcData.category.c_str()), NPCNodeType::NPCCategory);
        }
        else
        {
            QTreeWidgetItem* categoryItem = items.first();
        }

        QTreeWidgetItem* npcItem = new QTreeWidgetItem(categoryItem, QStringList(npcData.name.c_str()), NPCNodeType::NPCItem);

        QVariant v;
        v.setValue<const NPCData*>(&npcData);
        npcItem->setData(0, Qt::UserRole, v);
    }
}

void NPCEditor::slotNPCItemClicked(QTreeWidgetItem* item, int column)
{
    _saveStateLock = true;
    if (item->type() == NPCNodeType::NPCItem)
    {
        _currentNPC = const_cast<NPCData*>(QVariant(item->data(0, Qt::UserRole)).value<const NPCData*>());
        if (_currentNPC != nullptr)
        {
            /************************************************************************/
            /* 基本数据                                                             */
            /************************************************************************/
            this->setWindowTitle(QStringLiteral("NPC编辑器 - [") + QString(_currentNPC->name.c_str()) + "]");
            _ui.txtNPCId->setText(QString::number(_currentNPC->id));
            _ui.txtNPCName->setText(QString(_currentNPC->name.c_str()));
            _ui.txtNPCTitle->setText(QString(_currentNPC->title.c_str()));
            _ui.txtNPCAvatar->setText(QString(_currentNPC->avatar.c_str()));

            /************************************************************************/
            /* 智能行为                                                             */
            /************************************************************************/
            _ui.spbLevel->setValue(_currentNPC->ai.level);
            _ui.chkAttackable->setChecked(_currentNPC->ai.attackable);
            _ui.chkFavorable->setChecked(_currentNPC->ai.favorable);
            _ui.chkMarriageable->setChecked(_currentNPC->ai.marriageable);
            _ui.chkPresentable->setChecked(_currentNPC->ai.presentable);
            _ui.chkMovealbe->setChecked(_currentNPC->ai.movealbe);
            _ui.chkSurrender->setChecked(_currentNPC->ai.surrender);

            /************************************************************************/
            /* 剧情对白                                                             */
            /************************************************************************/
            _ui.tvDialoguesTree->clear();

            //增加父节点
            QTreeWidgetItem* npcRootItem = addNPCNode(_currentNPC->id, _currentNPC->name);

            //载入随机对白
            for (const NPCData::DialogueNode& dialogueNode : _currentNPC->dialogues.dialogue_tree)
            {
                QTreeWidgetItem* rootDialogueItem = addDialogueRootNode(npcRootItem, dialogueNode.dialogue_parts);
                QTreeWidgetItem* showConditionScriptItem = addShowConditionScriptNode(rootDialogueItem, dialogueNode.show_condition_script);
                QTreeWidgetItem* eventScriptItem = addEventScriptNode(rootDialogueItem, dialogueNode.event_script);
                QTreeWidgetItem* dialoguesItem = addDialoguesNode(rootDialogueItem, dialogueNode.dialogue_parts);

                if (!dialogueNode.dialogue_options.empty())
                {
                    QTreeWidgetItem* optionsRootItem = addOptionNode(rootDialogueItem);
                
                    //rootDialogueItem->setData(0, Qt::UserRole, QVariant((const void*)&dialogueNode));
                    //dialogueTreeItem->setData(1, Qt::UserRole, QVariant((const void*)&dialogueNode.show_condition_script));
                    //dialogueTreeItem->setData(2, Qt::UserRole, QVariant((const void*)&dialogueNode.dialogueParts));

                    std::function<void(const NPCData::OptionDialogueNodeList&, QTreeWidgetItem*)> loadOptionNodeProcessFunc
                        = [&loadOptionNodeProcessFunc, this](const NPCData::OptionDialogueNodeList& optionNodeList, QTreeWidgetItem* parentNode)
                    {
                        for (const NPCData::OptionDialogueNode& optionDialogueNode : optionNodeList)
                        {
                            QTreeWidgetItem* showConditionItem = addShowConditionScriptNode(parentNode, optionDialogueNode.show_condition_script);
                            QTreeWidgetItem* executeConditionItem = addExecuteConditionScriptNode(parentNode, optionDialogueNode.execute_condition_script);
                            QTreeWidgetItem* eventScriptItem = addEventScriptNode(parentNode, optionDialogueNode.event_script);
                            QTreeWidgetItem* optionContentItem = addOptionContentNode(parentNode, optionDialogueNode.option_content);
                            QTreeWidgetItem* dialoguesItem = addDialoguesNode(parentNode, optionDialogueNode.dialogue_parts);

                            if (!optionDialogueNode.dialogue_options.empty())
                            {
                                QTreeWidgetItem* optionsRootItem = addOptionNode(parentNode);
                                loadOptionNodeProcessFunc(optionDialogueNode.dialogue_options, optionsRootItem);
                            }
                        }
                    };

                    loadOptionNodeProcessFunc(dialogueNode.dialogue_options, optionsRootItem);
                }
            }
        }
    }
    _saveStateLock = false;
}

void NPCEditor::slotOnValueChanged()
{
    qDebug() << "OnValueChanged()";
    setSaveFlagEnabled(true);
}

void NPCEditor::setSaveFlagEnabled(bool value)
{
    if (_saveStateLock == false)
    {
        _ui.btnSave->setEnabled(value);
        if (value == true)
        {
            QString saveChar = *(this->windowTitle().end() - 1);
            if (saveChar != "*")
            {
                this->setWindowTitle(this->windowTitle() + "*");
            }
        }
        else
        {
            QString saveChar = *(this->windowTitle().end() - 1);
            if (saveChar == "*")
            {
                this->setWindowTitle(this->windowTitle().left(this->windowTitle().length() - 1));
            }
        }
    }
}

void NPCEditor::slotOnSave()
{
    setSaveFlagEnabled(false);
}

void NPCEditor::slotOnListDialoguesTypeItemClicked(QListWidgetItem* item)
{
    _ui.stackedWidgetDialogueTree->setCurrentIndex(_ui.lstDialoguesType->currentRow());
}

void NPCEditor::slotOnDialoguesTreeContextMenu(const QPoint& point)
{
    QTreeWidgetItem* curItem = _ui.tvDialoguesTree->itemAt(point);
    _ui.tvDialoguesTree->setCurrentItem(curItem);

    DialogueTreeNodeType nodeType = DT_NONE;
    if (curItem != nullptr)
    {
        nodeType = (DialogueTreeNodeType)curItem->type();
    }

    updateDialogueTreeContextMenu(nodeType);
    _dialogueTreeContextMenu->exec(QCursor::pos());
}

void NPCEditor::slotOnAddDialogueAction(bool check)
{

}

void NPCEditor::slotOnAddOptionAction(bool check)
{

}

void NPCEditor::slotOnEditItemAction(bool check)
{

}

void NPCEditor::slotOnResetConditionAction(bool check)
{

}

void NPCEditor::slotOnMoveUpAction(bool check)
{

}

void NPCEditor::slotOnMoveDownAction(bool check)
{

}

void NPCEditor::slotOnCutAction(bool check)
{

}

void NPCEditor::slotOnCopyAction(bool check)
{

}

void NPCEditor::slotOnPasteAction(bool check)
{

}

void NPCEditor::slotOnDeleteAction(bool check)
{

}

void NPCEditor::slotOnSeleteAllAction(bool check)
{

}

void NPCEditor::updateDialogueTreeContextMenu(DialogueTreeNodeType nodeType)
{
    switch (nodeType)
    {
    case DialogueTreeNodeType::DT_NONE:
        _dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_ADD_OPTION]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_EDIT_ITEM]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_RESET_CONDITION]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_MOVE_UP]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_MOVE_DOWN]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_CUT]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_COPY]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_DELETE]->setEnabled(false);
        break;
    case DialogueTreeNodeType::DT_DIALOGUE_CONTENT:
        _dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_ADD_OPTION]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_EDIT_ITEM]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_RESET_CONDITION]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_UP]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_DOWN]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_CUT]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_COPY]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_DELETE]->setEnabled(true);
        break;
    /*case DialogueTreeNodeType::DT_DIALOGUE_OPTION:
        _dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_ADD_OPTION]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_EDIT_ITEM]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_RESET_CONDITION]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_UP]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_DOWN]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_CUT]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_COPY]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_DELETE]->setEnabled(true);
        break;*/
    case DialogueTreeNodeType::DT_OPTION:
        _dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_ADD_OPTION]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_EDIT_ITEM]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_RESET_CONDITION]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_UP]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_DOWN]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_CUT]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_COPY]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_DELETE]->setEnabled(true);
    default:
        break;
    }
}

QString NPCEditor::formatStringList(const std::vector<std::string>& strList)
{
    QString dialogueContents("[");
    for (auto iter = strList.begin(); iter != strList.end(); ++iter)
    {
        dialogueContents += "\"" + QString(iter->c_str()) + "\"";
        if (iter != strList.end() - 1)
        {
            dialogueContents += ",";
        }
    }
    dialogueContents += "]";

    return dialogueContents;
}

QTreeWidgetItem* NPCEditor::addNPCNode(int npcId, const std::string& name)
{
    return new QTreeWidgetItem(
        _ui.tvDialoguesTree,
        QStringList(QString(QString::number(npcId) + " : " + name.c_str())),
        DialogueTreeNodeType::DT_NPC_ROOT
    );
}

QTreeWidgetItem* NPCEditor::addDialogueRootNode(QTreeWidgetItem* parent, const DialogueParts& dialogueParts)
{
    QList<QString> strlist_rootDialogueItem;
    strlist_rootDialogueItem.append(QStringLiteral("NPC会话"));
    strlist_rootDialogueItem.append(formatStringList(dialogueParts));
    return new QTreeWidgetItem(parent, strlist_rootDialogueItem, DialogueTreeNodeType::DT_DIALOGUE_ROOT);
}

QTreeWidgetItem* NPCEditor::addShowConditionScriptNode(QTreeWidgetItem* parent, const std::string& script)
{
    QList<QString> strlist_showConditionItem;
    strlist_showConditionItem.append(QStringLiteral("显示条件脚本"));
    strlist_showConditionItem.append(script.c_str());
    return new QTreeWidgetItem(parent, strlist_showConditionItem, DialogueTreeNodeType::DT_SHOW_CONDITION);;
}

QTreeWidgetItem* NPCEditor::addExecuteConditionScriptNode(QTreeWidgetItem* parent, const std::string& script)
{
    QList<QString> strlist_executeConditionItem;
    strlist_executeConditionItem.append(QStringLiteral("执行条件脚本"));
    strlist_executeConditionItem.append(script.c_str());
    return new QTreeWidgetItem(parent, strlist_executeConditionItem, DialogueTreeNodeType::DT_EXECUTE_CONDITION);
}

QTreeWidgetItem* NPCEditor::addEventScriptNode(QTreeWidgetItem* parent, const std::string& script)
{
    QList<QString> strlist_eventScriptItem;
    strlist_eventScriptItem.append(QStringLiteral("事件脚本"));
    strlist_eventScriptItem.append(script.c_str());
    return new QTreeWidgetItem(parent, strlist_eventScriptItem, DialogueTreeNodeType::DT_EVENT_SCRIPT);
}

QTreeWidgetItem* NPCEditor::addOptionNode(QTreeWidgetItem* parent)
{
    QList<QString> strlist_optionsItem;
    strlist_optionsItem.append(QStringLiteral("[玩家选项]"));
    return new QTreeWidgetItem(parent, strlist_optionsItem, DialogueTreeNodeType::DT_OPTION);
}


QTreeWidgetItem* NPCEditor::addOptionContentNode(QTreeWidgetItem* parent, const std::string& content)
{
    QList<QString> strlist_optionCotentItem;
    strlist_optionCotentItem.append(QStringLiteral("选项内容"));
    return new QTreeWidgetItem(parent, strlist_optionCotentItem, DialogueTreeNodeType::DT_OPTION_CONTENT);
}

QTreeWidgetItem* NPCEditor::addDialoguesNode(QTreeWidgetItem* parent, const DialogueParts& dialogueParts)
{
    QList<QString> strlist_rootDialogueItem;
    strlist_rootDialogueItem.append(QStringLiteral("[情节对白]"));
    strlist_rootDialogueItem.append(formatStringList(dialogueParts));

    QTreeWidgetItem* dialoguesItem
        = new QTreeWidgetItem(
            parent, 
            strlist_rootDialogueItem,
            DialogueTreeNodeType::DT_DIALOGUE_ROOT);

    for (size_t i = 0; i < dialogueParts.size(); ++i)
    {
        QList<QString> strlist_dialogueItem;
        strlist_dialogueItem.append("[" + QString::number(i) + "]");
        strlist_dialogueItem.append(dialogueParts[i].c_str());
        QTreeWidgetItem* dialogueItem
            = new QTreeWidgetItem(dialoguesItem, strlist_dialogueItem, DialogueTreeNodeType::DT_DIALOGUE_CONTENT);
    }

    return dialoguesItem;
}
