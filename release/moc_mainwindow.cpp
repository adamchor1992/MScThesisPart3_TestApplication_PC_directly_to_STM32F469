/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DiplomaThesisGUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[583];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "serialDataReceived"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 26), // "on_pushButton_Open_clicked"
QT_MOC_LITERAL(4, 58, 26), // "on_pushButton_Send_pressed"
QT_MOC_LITERAL(5, 85, 43), // "on_pushButton_InitConnectionM..."
QT_MOC_LITERAL(6, 129, 43), // "on_pushButton_InitConnectionM..."
QT_MOC_LITERAL(7, 173, 41), // "on_pushButton_StartLinear_1si..."
QT_MOC_LITERAL(8, 215, 42), // "on_pushButton_StartLinear_2si..."
QT_MOC_LITERAL(9, 258, 42), // "on_pushButton_StartLinear_3si..."
QT_MOC_LITERAL(10, 301, 42), // "on_pushButton_StartLinear_4si..."
QT_MOC_LITERAL(11, 344, 39), // "on_pushButton_StartSine_1sign..."
QT_MOC_LITERAL(12, 384, 40), // "on_pushButton_StartSine_2sign..."
QT_MOC_LITERAL(13, 425, 40), // "on_pushButton_StartSine_3sign..."
QT_MOC_LITERAL(14, 466, 40), // "on_pushButton_StartSine_4sign..."
QT_MOC_LITERAL(15, 507, 26), // "on_pushButton_Stop_clicked"
QT_MOC_LITERAL(16, 534, 48) // "on_pushButton_SimulateParamet..."

    },
    "MainWindow\0serialDataReceived\0\0"
    "on_pushButton_Open_clicked\0"
    "on_pushButton_Send_pressed\0"
    "on_pushButton_InitConnectionModule1_clicked\0"
    "on_pushButton_InitConnectionModule2_clicked\0"
    "on_pushButton_StartLinear_1signal_clicked\0"
    "on_pushButton_StartLinear_2signals_clicked\0"
    "on_pushButton_StartLinear_3signals_clicked\0"
    "on_pushButton_StartLinear_4signals_clicked\0"
    "on_pushButton_StartSine_1signal_clicked\0"
    "on_pushButton_StartSine_2signals_clicked\0"
    "on_pushButton_StartSine_3signals_clicked\0"
    "on_pushButton_StartSine_4signals_clicked\0"
    "on_pushButton_Stop_clicked\0"
    "on_pushButton_SimulateParametersSequence_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialDataReceived(); break;
        case 1: _t->on_pushButton_Open_clicked(); break;
        case 2: _t->on_pushButton_Send_pressed(); break;
        case 3: _t->on_pushButton_InitConnectionModule1_clicked(); break;
        case 4: _t->on_pushButton_InitConnectionModule2_clicked(); break;
        case 5: _t->on_pushButton_StartLinear_1signal_clicked(); break;
        case 6: _t->on_pushButton_StartLinear_2signals_clicked(); break;
        case 7: _t->on_pushButton_StartLinear_3signals_clicked(); break;
        case 8: _t->on_pushButton_StartLinear_4signals_clicked(); break;
        case 9: _t->on_pushButton_StartSine_1signal_clicked(); break;
        case 10: _t->on_pushButton_StartSine_2signals_clicked(); break;
        case 11: _t->on_pushButton_StartSine_3signals_clicked(); break;
        case 12: _t->on_pushButton_StartSine_4signals_clicked(); break;
        case 13: _t->on_pushButton_Stop_clicked(); break;
        case 14: _t->on_pushButton_SimulateParametersSequence_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE