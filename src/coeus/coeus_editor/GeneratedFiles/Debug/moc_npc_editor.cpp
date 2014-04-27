/****************************************************************************
** Meta object code from reading C++ file 'npc_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../npc_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'npc_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NPCEditor_t {
    QByteArrayData data[16];
    char stringdata[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NPCEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NPCEditor_t qt_meta_stringdata_NPCEditor = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 18),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 16),
QT_MOC_LITERAL(4, 47, 4),
QT_MOC_LITERAL(5, 52, 6),
QT_MOC_LITERAL(6, 59, 10),
QT_MOC_LITERAL(7, 70, 22),
QT_MOC_LITERAL(8, 93, 5),
QT_MOC_LITERAL(9, 99, 23),
QT_MOC_LITERAL(10, 123, 21),
QT_MOC_LITERAL(11, 145, 18),
QT_MOC_LITERAL(12, 164, 34),
QT_MOC_LITERAL(13, 199, 16),
QT_MOC_LITERAL(14, 216, 30),
QT_MOC_LITERAL(15, 247, 5)
    },
    "NPCEditor\0slotNPCItemClicked\0\0"
    "QTreeWidgetItem*\0item\0column\0slotOnSave\0"
    "slotOnTextValueChanged\0value\0"
    "slotOnCheckValueChanged\0slotOnIntValueChanged\0"
    "slotOnValueChanged\0"
    "slotOnListDialoguesTypeItemClicked\0"
    "QListWidgetItem*\0slotOnDialoguesTreeContextMenu\0"
    "point\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NPCEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x08,
       6,    0,   59,    2, 0x08,
       7,    1,   60,    2, 0x08,
       9,    1,   63,    2, 0x08,
      10,    1,   66,    2, 0x08,
      11,    0,   69,    2, 0x08,
      12,    1,   70,    2, 0x08,
      14,    1,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::QPoint,   15,

       0        // eod
};

void NPCEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NPCEditor *_t = static_cast<NPCEditor *>(_o);
        switch (_id) {
        case 0: _t->slotNPCItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->slotOnSave(); break;
        case 2: _t->slotOnTextValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotOnCheckValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotOnIntValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotOnValueChanged(); break;
        case 6: _t->slotOnListDialoguesTypeItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->slotOnDialoguesTreeContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject NPCEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NPCEditor.data,
      qt_meta_data_NPCEditor,  qt_static_metacall, 0, 0}
};


const QMetaObject *NPCEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NPCEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NPCEditor.stringdata))
        return static_cast<void*>(const_cast< NPCEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int NPCEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
