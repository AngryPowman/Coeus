#include "stdafx.h"
#include "npc_editor.h"
#include "game_common/config/npc_config.h"

NPCEditor::NPCEditor(QWidget *parent)
    : QWidget(parent)
{
    _ui.setupUi(this);
    loadNPCTreeList();

    memset(_dialogueTreeMenuActions, 0, DTC_M_MAX);
    init();
}

NPCEditor::~NPCEditor()
{

}

void NPCEditor::init()
{
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
}

void NPCEditor::loadNPCTreeList()
{
    ConfigManager manager;
    NPCConfig::getInstance().initialize(&manager);
    manager.start();
    manager.wait();

    const NPCDataList& npcList = NPCConfig::getInstance().getNPCList();
    _ui.tvNpcList->clear();
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
        const NPCData* npcData = QVariant(item->data(0, Qt::UserRole)).value<const NPCData*>();
        if (npcData != nullptr)
        {
            this->setWindowTitle(QStringLiteral("NPC编辑器 - [") + QString(npcData->name.c_str()) + "]");
            _ui.txtNPCId->setText(QString::number(npcData->id));
            _ui.txtNPCName->setText(QString(npcData->name.c_str()));
            _ui.txtNPCTitle->setText(QString(npcData->title.c_str()));
            _ui.txtNPCAvatar->setText(QString(npcData->avatar.c_str()));
            _ui.spbLevel->setValue(npcData->ai.level);
            _ui.chkAttackable->setChecked(npcData->ai.attackable);
            _ui.chkFavorable->setChecked(npcData->ai.favorable);
            _ui.chkMarriageable->setChecked(npcData->ai.marriageable);
            _ui.chkPresentable->setChecked(npcData->ai.presentable);
            _ui.chkMovealbe->setChecked(npcData->ai.movealbe);
            _ui.chkSurrender->setChecked(npcData->ai.surrender);
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
    if (curItem == nullptr)
    {
        _ui.tvDialoguesTree->setCurrentItem(nullptr);
        updateDialogueTreeContextMenu(DT_NONE);
    }
    else
    {

    }

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
    case NPCEditor::DT_NONE:
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
    case NPCEditor::DT_DIALOGUE:
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
    case NPCEditor::DT_DIALOGUE_OPTION:
        _dialogueTreeMenuActions[DTC_M_ADD_DIALOGUE]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_ADD_OPTION]->setEnabled(false);
        _dialogueTreeMenuActions[DTC_M_EDIT_ITEM]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_RESET_CONDITION]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_UP]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_MOVE_DOWN]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_CUT]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_COPY]->setEnabled(true);
        _dialogueTreeMenuActions[DTC_M_DELETE]->setEnabled(true);
        break;
    default:
        break;
    }
}
