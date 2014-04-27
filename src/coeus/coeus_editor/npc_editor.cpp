#include "stdafx.h"
#include "npc_editor.h"
#include "game_common/config/npc_config.h"

NPCEditor::NPCEditor(QWidget *parent)
    : QWidget(parent)
{
    _ui.setupUi(this);
    loadNPCTreeList();

    QSignalMapper* signalMapper = new QSignalMapper(this);
    const QObjectList& list = this->children();

    std::function<void (QObject*)> func = [&func, this](QObject* parentObject)
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
}

NPCEditor::~NPCEditor()
{

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
        return;
    }

    QMenu popMenu(this);


    QAction* newDialogue = new QAction(QStringLiteral("添加对话"), &popMenu);
    QAction* insertOption = new QAction(QStringLiteral("添加选项"), &popMenu);
    // ---
    QAction* editCondition = new QAction(QStringLiteral("编辑触发条件(&C)..."), &popMenu);
    QAction* resetCondition = new QAction(QStringLiteral("重置条件"), &popMenu);
    // ---
    QAction* delCurrent = new QAction(QStringLiteral("删除(&D)"), &popMenu);

    popMenu.addAction(newDialogue);
    popMenu.addAction(insertOption);
    popMenu.addSeparator();
    popMenu.addAction(editCondition);
    popMenu.addAction(resetCondition);
    popMenu.addSeparator();
    popMenu.addAction(delCurrent);
    popMenu.addAction(newDialogue);
    popMenu.addAction(newDialogue);


    popMenu.exec(QCursor::pos());
    
}
