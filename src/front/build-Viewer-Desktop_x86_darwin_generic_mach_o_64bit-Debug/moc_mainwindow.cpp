/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Viewer/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[30];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 22), // "on_name_button_clicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 21), // "on_screenshot_clicked"
QT_MOC_LITERAL(57, 14), // "on_gif_clicked"
QT_MOC_LITERAL(72, 24), // "on_change_y_valueChanged"
QT_MOC_LITERAL(97, 5), // "value"
QT_MOC_LITERAL(103, 24), // "on_change_x_valueChanged"
QT_MOC_LITERAL(128, 20), // "on_zoom_valueChanged"
QT_MOC_LITERAL(149, 22), // "on_spin_x_valueChanged"
QT_MOC_LITERAL(172, 22), // "on_spin_y_valueChanged"
QT_MOC_LITERAL(195, 22), // "on_spin_z_valueChanged"
QT_MOC_LITERAL(218, 22), // "on_back_colour_clicked"
QT_MOC_LITERAL(241, 24), // "on_change_z_valueChanged"
QT_MOC_LITERAL(266, 4) // "arg1"

    },
    "MainWindow\0on_name_button_clicked\0\0"
    "on_screenshot_clicked\0on_gif_clicked\0"
    "on_change_y_valueChanged\0value\0"
    "on_change_x_valueChanged\0on_zoom_valueChanged\0"
    "on_spin_x_valueChanged\0on_spin_y_valueChanged\0"
    "on_spin_z_valueChanged\0on_back_colour_clicked\0"
    "on_change_z_valueChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    1,   83,    2, 0x08,    4 /* Private */,
       7,    1,   86,    2, 0x08,    6 /* Private */,
       8,    1,   89,    2, 0x08,    8 /* Private */,
       9,    1,   92,    2, 0x08,   10 /* Private */,
      10,    1,   95,    2, 0x08,   12 /* Private */,
      11,    1,   98,    2, 0x08,   14 /* Private */,
      12,    0,  101,    2, 0x08,   16 /* Private */,
      13,    1,  102,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_name_button_clicked(); break;
        case 1: _t->on_screenshot_clicked(); break;
        case 2: _t->on_gif_clicked(); break;
        case 3: _t->on_change_y_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_change_x_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_zoom_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spin_x_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spin_y_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spin_z_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_back_colour_clicked(); break;
        case 10: _t->on_change_z_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
