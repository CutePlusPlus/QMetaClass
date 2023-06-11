/****************************************************************************
** Meta object code from reading C++ file 'qiodevice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "io/qiodevice.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qiodevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQIODeviceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQIODeviceENDCLASS = QtMocHelpers::stringData(
    "QIODevice",
    "readyRead",
    "",
    "channelReadyRead",
    "channel",
    "bytesWritten",
    "bytes",
    "channelBytesWritten",
    "aboutToClose",
    "readChannelFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQIODeviceENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[20];
    char stringdata8[13];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQIODeviceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQIODeviceENDCLASS_t qt_meta_stringdata_CLASSQIODeviceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "QIODevice"
        QT_MOC_LITERAL(10, 9),  // "readyRead"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 16),  // "channelReadyRead"
        QT_MOC_LITERAL(38, 7),  // "channel"
        QT_MOC_LITERAL(46, 12),  // "bytesWritten"
        QT_MOC_LITERAL(59, 5),  // "bytes"
        QT_MOC_LITERAL(65, 19),  // "channelBytesWritten"
        QT_MOC_LITERAL(85, 12),  // "aboutToClose"
        QT_MOC_LITERAL(98, 19)   // "readChannelFinished"
    },
    "QIODevice",
    "readyRead",
    "",
    "channelReadyRead",
    "channel",
    "bytesWritten",
    "bytes",
    "channelBytesWritten",
    "aboutToClose",
    "readChannelFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQIODeviceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    1,   51,    2, 0x06,    2 /* Public */,
       5,    1,   54,    2, 0x06,    4 /* Public */,
       7,    2,   57,    2, 0x06,    6 /* Public */,
       8,    0,   62,    2, 0x06,    9 /* Public */,
       9,    0,   63,    2, 0x06,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    4,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QIODevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQIODeviceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQIODeviceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQIODeviceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QIODevice, std::true_type>,
        // method 'readyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'channelReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'bytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'channelBytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'aboutToClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readChannelFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QIODevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QIODevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->channelReadyRead((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->bytesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->channelBytesWritten((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 4: _t->aboutToClose(); break;
        case 5: _t->readChannelFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QIODevice::*)();
            if (_t _q_method = &QIODevice::readyRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QIODevice::*)(int );
            if (_t _q_method = &QIODevice::channelReadyRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QIODevice::*)(qint64 );
            if (_t _q_method = &QIODevice::bytesWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QIODevice::*)(int , qint64 );
            if (_t _q_method = &QIODevice::channelBytesWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QIODevice::*)();
            if (_t _q_method = &QIODevice::aboutToClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QIODevice::*)();
            if (_t _q_method = &QIODevice::readChannelFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *QIODevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIODevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQIODeviceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QIODeviceBase"))
        return static_cast< QIODeviceBase*>(this);
    return QObject::qt_metacast(_clname);
}

int QIODevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QIODevice::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QIODevice::channelReadyRead(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QIODevice::bytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QIODevice::channelBytesWritten(int _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QIODevice::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QIODevice::readChannelFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
