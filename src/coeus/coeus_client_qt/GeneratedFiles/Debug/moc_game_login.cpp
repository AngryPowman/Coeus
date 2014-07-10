/****************************************************************************
** Meta object code from reading C++ file 'game_login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../game_login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameLogin_t {
    QByteArrayData data[18];
    char stringdata[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameLogin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
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
QT_MOC_LITERAL(9, 118, 27),
QT_MOC_LITERAL(10, 146, 7),
QT_MOC_LITERAL(11, 154, 18),
QT_MOC_LITERAL(12, 173, 17),
QT_MOC_LITERAL(13, 191, 22),
QT_MOC_LITERAL(14, 214, 14),
QT_MOC_LITERAL(15, 229, 15),
QT_MOC_LITERAL(16, 245, 18),
QT_MOC_LITERAL(17, 264, 14)
    },
    "GameLogin\0changePanelSignal\0\0Panel\0"
    "panel\0slotOpenSettingDialog\0slotOnLoginBtn\0"
    "slotMoveGravatarAnimation\0slotOnBackBtn\0"
    "slotAutoLoginCheckedChanged\0checked\0"
    "slotPasswordEdited\0slotAccountEdited\0"
    "slotOpenHomepageAction\0slotHelpAction\0"
    "slotAboutAction\0slotRegisterAction\0"
    "slotExitAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameLogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        case 5: _t->slotAutoLoginCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotPasswordEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->slotAccountEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->slotOpenHomepageAction(); break;
        case 9: _t->slotHelpAction(); break;
        case 10: _t->slotAboutAction(); break;
        case 11: _t->slotRegisterAction(); break;
        case 12: _t->slotExitAction(); break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
