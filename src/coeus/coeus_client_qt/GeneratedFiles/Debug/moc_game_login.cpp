/****************************************************************************
** Meta object code from reading C++ file 'game_login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../game_login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameLogin_t {
    QByteArrayData data[12];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GameLogin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GameLogin_t qt_meta_stringdata_GameLogin = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 17),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 5),
QT_MOC_LITERAL(4, 35, 5),
QT_MOC_LITERAL(5, 41, 21),
QT_MOC_LITERAL(6, 63, 14),
QT_MOC_LITERAL(7, 78, 25),
QT_MOC_LITERAL(8, 104, 13),
QT_MOC_LITERAL(9, 118, 11),
QT_MOC_LITERAL(10, 130, 27),
QT_MOC_LITERAL(11, 158, 7)
    },
    "GameLogin\0changePanelSignal\0\0Panel\0"
    "panel\0slotOpenSettingDialog\0slotOnLoginBtn\0"
    "slotMoveGravatarAnimation\0slotOnBackBtn\0"
    "changePanel\0slotAutoLoginCheckedChanged\0"
    "checked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameLogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08,
       6,    0,   53,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    0,   55,    2, 0x08,
       9,    1,   56,    2, 0x08,
      10,    1,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void GameLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameLogin *_t = static_cast<GameLogin *>(_o);
        switch (_id) {
        case 0: _t->changePanelSignal((*reinterpret_cast< Panel(*)>(_a[1]))); break;
        case 1: _t->slotOpenSettingDialog(); break;
        case 2: _t->slotOnLoginBtn(); break;
        case 3: _t->slotMoveGravatarAnimation(); break;
        case 4: _t->slotOnBackBtn(); break;
        case 5: _t->changePanel((*reinterpret_cast< Panel(*)>(_a[1]))); break;
        case 6: _t->slotAutoLoginCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameLogin::*_t)(Panel );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameLogin::changePanelSignal)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GameLogin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GameLogin.data,
      qt_meta_data_GameLogin,  qt_static_metacall, 0, 0}
};


const QMetaObject *GameLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameLogin.stringdata))
        return static_cast<void*>(const_cast< GameLogin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GameLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GameLogin::changePanelSignal(Panel _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
