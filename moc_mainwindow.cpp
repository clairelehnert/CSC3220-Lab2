/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_queenRadio_toggled"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "checked"
QT_MOC_LITERAL(4, 42, 24), // "on_standardRadio_toggled"
QT_MOC_LITERAL(5, 67, 29), // "on_nightsSpinBox_valueChanged"
QT_MOC_LITERAL(6, 97, 4), // "arg1"
QT_MOC_LITERAL(7, 102, 31), // "on_parkingCheckBox_stateChanged"
QT_MOC_LITERAL(8, 134, 21), // "calculatePreviewPrice"
QT_MOC_LITERAL(9, 156, 25), // "on_nextPushButton_clicked"
QT_MOC_LITERAL(10, 182, 25), // "on_backPushButton_clicked"
QT_MOC_LITERAL(11, 208, 20), // "on_visaRadio_toggled"
QT_MOC_LITERAL(12, 229, 26), // "on_masterCardRadio_toggled"
QT_MOC_LITERAL(13, 256, 24), // "on_discoverRadio_toggled"
QT_MOC_LITERAL(14, 281, 30), // "on_americaexpressRadio_toggled"
QT_MOC_LITERAL(15, 312, 24) // "on_payPushButton_clicked"

    },
    "MainWindow\0on_queenRadio_toggled\0\0"
    "checked\0on_standardRadio_toggled\0"
    "on_nightsSpinBox_valueChanged\0arg1\0"
    "on_parkingCheckBox_stateChanged\0"
    "calculatePreviewPrice\0on_nextPushButton_clicked\0"
    "on_backPushButton_clicked\0"
    "on_visaRadio_toggled\0on_masterCardRadio_toggled\0"
    "on_discoverRadio_toggled\0"
    "on_americaexpressRadio_toggled\0"
    "on_payPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       5,    1,   80,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_queenRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_standardRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_nightsSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_parkingCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->calculatePreviewPrice(); break;
        case 5: _t->on_nextPushButton_clicked(); break;
        case 6: _t->on_backPushButton_clicked(); break;
        case 7: _t->on_visaRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_masterCardRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_discoverRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_americaexpressRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_payPushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
