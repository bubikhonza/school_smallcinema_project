/****************************************************************************
** Meta object code from reading C++ file 'cashierwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SmallCinema/ui/cashierwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cashierwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CashierWindow_t {
    QByteArrayData data[12];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CashierWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CashierWindow_t qt_meta_stringdata_CashierWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CashierWindow"
QT_MOC_LITERAL(1, 14, 23), // "on_show_combo_activated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 22), // "on_process_btn_clicked"
QT_MOC_LITERAL(5, 68, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 90, 21), // "on_add_ticket_clicked"
QT_MOC_LITERAL(7, 112, 30), // "on_nochildren_input_textEdited"
QT_MOC_LITERAL(8, 143, 4), // "arg1"
QT_MOC_LITERAL(9, 148, 28), // "on_noadults_input_textEdited"
QT_MOC_LITERAL(10, 177, 30), // "on_nostudents_input_textEdited"
QT_MOC_LITERAL(11, 208, 26) // "on_tabWidget_tabBarClicked"

    },
    "CashierWindow\0on_show_combo_activated\0"
    "\0index\0on_process_btn_clicked\0"
    "on_pushButton_clicked\0on_add_ticket_clicked\0"
    "on_nochildren_input_textEdited\0arg1\0"
    "on_noadults_input_textEdited\0"
    "on_nostudents_input_textEdited\0"
    "on_tabWidget_tabBarClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CashierWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CashierWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CashierWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_show_combo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_process_btn_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_add_ticket_clicked(); break;
        case 4: _t->on_nochildren_input_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_noadults_input_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_nostudents_input_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CashierWindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CashierWindow.data,
    qt_meta_data_CashierWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CashierWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CashierWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CashierWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CashierWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
