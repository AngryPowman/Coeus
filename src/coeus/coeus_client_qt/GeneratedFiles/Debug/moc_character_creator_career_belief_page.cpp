/****************************************************************************
** Meta object code from reading C++ file 'character_creator_career_belief_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../character_creator_career_belief_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'character_creator_career_belief_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharacterCreator_CareerBeliefPage_t {
    QByteArrayData data[6];
    char stringdata[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CharacterCreator_CareerBeliefPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CharacterCreator_CareerBeliefPage_t qt_meta_stringdata_CharacterCreator_CareerBeliefPage = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 16),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 5),
QT_MOC_LITERAL(4, 58, 26),
QT_MOC_LITERAL(5, 85, 19)
    },
    "CharacterCreator_CareerBeliefPage\0"
    "slotBelifChanged\0\0index\0"
    "slotAvatarListIndexChanged\0"
    "slotOnGenderChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharacterCreator_CareerBeliefPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08,
       4,    1,   32,    2, 0x08,
       5,    0,   35,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void CharacterCreator_CareerBeliefPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharacterCreator_CareerBeliefPage *_t = static_cast<CharacterCreator_CareerBeliefPage *>(_o);
        switch (_id) {
        case 0: _t->slotBelifChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotAvatarListIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotOnGenderChanged(); break;
        default: ;
        }
    }
}

const QMetaObject CharacterCreator_CareerBeliefPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_CharacterCreator_CareerBeliefPage.data,
      qt_meta_data_CharacterCreator_CareerBeliefPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *CharacterCreator_CareerBeliefPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharacterCreator_CareerBeliefPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharacterCreator_CareerBeliefPage.stringdata))
        return static_cast<void*>(const_cast< CharacterCreator_CareerBeliefPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int CharacterCreator_CareerBeliefPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
