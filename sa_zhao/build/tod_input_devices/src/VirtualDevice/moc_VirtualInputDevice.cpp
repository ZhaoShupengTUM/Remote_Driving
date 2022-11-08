/****************************************************************************
** Meta object code from reading C++ file 'VirtualInputDevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/tod_input_devices/src/VirtualDevice/VirtualInputDevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VirtualInputDevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VirtualInputDevice_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualInputDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualInputDevice_t qt_meta_stringdata_VirtualInputDevice = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VirtualInputDevice"
QT_MOC_LITERAL(1, 19, 14), // "activateSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "deactivateSignal"
QT_MOC_LITERAL(4, 52, 15), // "terminateSignal"
QT_MOC_LITERAL(5, 68, 12), // "on_userInput"
QT_MOC_LITERAL(6, 81, 1), // "x"
QT_MOC_LITERAL(7, 83, 1), // "y"
QT_MOC_LITERAL(8, 85, 11), // "on_activate"
QT_MOC_LITERAL(9, 97, 13), // "on_deactivate"
QT_MOC_LITERAL(10, 111, 12) // "on_terminate"

    },
    "VirtualInputDevice\0activateSignal\0\0"
    "deactivateSignal\0terminateSignal\0"
    "on_userInput\0x\0y\0on_activate\0on_deactivate\0"
    "on_terminate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualInputDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   52,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VirtualInputDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualInputDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateSignal(); break;
        case 1: _t->deactivateSignal(); break;
        case 2: _t->terminateSignal(); break;
        case 3: _t->on_userInput((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->on_activate(); break;
        case 5: _t->on_deactivate(); break;
        case 6: _t->on_terminate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VirtualInputDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualInputDevice::activateSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VirtualInputDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualInputDevice::deactivateSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VirtualInputDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualInputDevice::terminateSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VirtualInputDevice::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_VirtualInputDevice.data,
    qt_meta_data_VirtualInputDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualInputDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualInputDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualInputDevice.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MyInputDevice"))
        return static_cast< MyInputDevice*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VirtualInputDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VirtualInputDevice::activateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VirtualInputDevice::deactivateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VirtualInputDevice::terminateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
