/****************************************************************************
** Meta object code from reading C++ file 'initdept.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../faceRecognize/initdept.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initdept.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_initDept_t {
    QByteArrayData data[13];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_initDept_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_initDept_t qt_meta_stringdata_initDept = {
    {
QT_MOC_LITERAL(0, 0, 8), // "initDept"
QT_MOC_LITERAL(1, 9, 12), // "popMenu_dept"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "deleteItem_dept"
QT_MOC_LITERAL(4, 39, 15), // "renameItem_dept"
QT_MOC_LITERAL(5, 55, 12), // "addItem_dept"
QT_MOC_LITERAL(6, 68, 11), // "deptChanged"
QT_MOC_LITERAL(7, 80, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 97, 7), // "popMenu"
QT_MOC_LITERAL(9, 105, 10), // "deleteItem"
QT_MOC_LITERAL(10, 116, 10), // "renameItem"
QT_MOC_LITERAL(11, 127, 7), // "addItem"
QT_MOC_LITERAL(12, 135, 10) // "posChanged"

    },
    "initDept\0popMenu_dept\0\0deleteItem_dept\0"
    "renameItem_dept\0addItem_dept\0deptChanged\0"
    "QListWidgetItem*\0popMenu\0deleteItem\0"
    "renameItem\0addItem\0posChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_initDept[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       3,    0,   67,    2, 0x08 /* Private */,
       4,    0,   68,    2, 0x08 /* Private */,
       5,    0,   69,    2, 0x08 /* Private */,
       6,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void initDept::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        initDept *_t = static_cast<initDept *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->popMenu_dept((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->deleteItem_dept(); break;
        case 2: _t->renameItem_dept(); break;
        case 3: _t->addItem_dept(); break;
        case 4: _t->deptChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->popMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->deleteItem(); break;
        case 7: _t->renameItem(); break;
        case 8: _t->addItem(); break;
        case 9: _t->posChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject initDept::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_initDept.data,
      qt_meta_data_initDept,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *initDept::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *initDept::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_initDept.stringdata0))
        return static_cast<void*>(const_cast< initDept*>(this));
    return QDialog::qt_metacast(_clname);
}

int initDept::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
