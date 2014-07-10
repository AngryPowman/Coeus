/****************************************************************************
** Meta object code from reading C++ file 'dialogue_box_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogue_box_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogue_box_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogueBoxWidget_t {
    QByteArrayData data[8];
    char stringdata[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogueBoxWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogueBoxWidget_t qt_meta_stringdata_DialogueBoxWidget = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 17),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 17),
QT_MOC_LITERAL(4, 55, 16),
QT_MOC_LITERAL(5, 72, 13),
QT_MOC_LITERAL(6, 86, 14),
QT_MOC_LITERAL(7, 101, 4)
    },
    "DialogueBoxWidget\0slotOnPrevClicked\0"
    "\0slotOnNextClicked\0slotOnEndClicked\0"
    "onLinkClicked\0NPCOptionLink*\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogueBoxWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void DialogueBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogueBoxWidget *_t = static_cast<DialogueBoxWidget *>(_o);
        switch (_id) {
        case 0: _t->slotOnPrevClicked(); break;
        case 1: _t->slotOnNextClicked(); break;
        case 2: _t->slotOnEndClicked(); break;
        case 3: _t->onLinkClicked((*reinterpret_cast< NPCOptionLink*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogueBoxWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DialogueBoxWidget.data,
      qt_meta_data_DialogueBoxWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *DialogueBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogueBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogueBoxWidget.stringdata))
        return static_cast<void*>(const_cast< DialogueBoxWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DialogueBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
