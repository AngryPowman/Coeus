/****************************************************************************
** Meta object code from reading C++ file 'character_creator_characteristic_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../character_creator_characteristic_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'character_creator_characteristic_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CharacterCreator_CharacteristicPage_t {
    QByteArrayData data[4];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharacterCreator_CharacteristicPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharacterCreator_CharacteristicPage_t qt_meta_stringdata_CharacterCreator_CharacteristicPage = {
    {
QT_MOC_LITERAL(0, 0, 35),
QT_MOC_LITERAL(1, 36, 9),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 7)
    },
    "CharacterCreator_CharacteristicPage\0"
    "onChecked\0\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharacterCreator_CharacteristicPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void CharacterCreator_CharacteristicPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CharacterCreator_CharacteristicPage *_t = static_cast<CharacterCreator_CharacteristicPage *>(_o);
        switch (_id) {
        case 0: _t->onChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CharacterCreator_CharacteristicPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_CharacterCreator_CharacteristicPage.data,
      qt_meta_data_CharacterCreator_CharacteristicPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *CharacterCreator_CharacteristicPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharacterCreator_CharacteristicPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharacterCreator_CharacteristicPage.stringdata))
        return static_cast<void*>(const_cast< CharacterCreator_CharacteristicPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int CharacterCreator_CharacteristicPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
