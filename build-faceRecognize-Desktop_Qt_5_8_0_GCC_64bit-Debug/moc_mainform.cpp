/****************************************************************************
** Meta object code from reading C++ file 'mainform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../faceRecognize/mainform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainform_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainform_t qt_meta_stringdata_mainform = {
    {
QT_MOC_LITERAL(0, 0, 8), // "mainform"
QT_MOC_LITERAL(1, 9, 17), // "slotCurrentWidget"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 45, 4), // "item"
QT_MOC_LITERAL(5, 50, 6), // "column"
QT_MOC_LITERAL(6, 57, 12), // "selectVacate"
QT_MOC_LITERAL(7, 70, 10), // "Staffinfo&"
QT_MOC_LITERAL(8, 81, 5), // "staff"
QT_MOC_LITERAL(9, 87, 14), // "selectEvection"
QT_MOC_LITERAL(10, 102, 10), // "selectTime"
QT_MOC_LITERAL(11, 113, 30) // "on_pushButton_renovate_clicked"

    },
    "mainform\0slotCurrentWidget\0\0"
    "QTreeWidgetItem*\0item\0column\0selectVacate\0"
    "Staffinfo&\0staff\0selectEvection\0"
    "selectTime\0on_pushButton_renovate_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,
      10,    0,   50,    2, 0x08 /* Private */,
      11,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Int, 0x80000000 | 7,    8,
    QMetaType::Int, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainform *_t = static_cast<mainform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotCurrentWidget((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: { int _r = _t->selectVacate((*reinterpret_cast< Staffinfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->selectEvection((*reinterpret_cast< Staffinfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->selectTime(); break;
        case 4: _t->on_pushButton_renovate_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject mainform::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mainform.data,
      qt_meta_data_mainform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mainform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mainform.stringdata0))
        return static_cast<void*>(const_cast< mainform*>(this));
    return QWidget::qt_metacast(_clname);
}

int mainform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
