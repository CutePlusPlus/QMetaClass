/****************************************************************************
** Meta object code from reading C++ file 'qthreadpool.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "thread/qthreadpool.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qthreadpool.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQThreadPoolENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQThreadPoolENDCLASS = QtMocHelpers::stringData(
    "QThreadPool",
    "expiryTimeout",
    "maxThreadCount",
    "activeThreadCount",
    "stackSize",
    "threadPriority",
    "QThread::Priority"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQThreadPoolENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[15];
    char stringdata3[18];
    char stringdata4[10];
    char stringdata5[15];
    char stringdata6[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQThreadPoolENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQThreadPoolENDCLASS_t qt_meta_stringdata_CLASSQThreadPoolENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QThreadPool"
        QT_MOC_LITERAL(12, 13),  // "expiryTimeout"
        QT_MOC_LITERAL(26, 14),  // "maxThreadCount"
        QT_MOC_LITERAL(41, 17),  // "activeThreadCount"
        QT_MOC_LITERAL(59, 9),  // "stackSize"
        QT_MOC_LITERAL(69, 14),  // "threadPriority"
        QT_MOC_LITERAL(84, 17)   // "QThread::Priority"
    },
    "QThreadPool",
    "expiryTimeout",
    "maxThreadCount",
    "activeThreadCount",
    "stackSize",
    "threadPriority",
    "QThread::Priority"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQThreadPoolENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015103, uint(-1), 0,
       2, QMetaType::Int, 0x00015103, uint(-1), 0,
       3, QMetaType::Int, 0x00015001, uint(-1), 0,
       4, QMetaType::UInt, 0x00015103, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSQThreadPoolENDCLASS[] = {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QThreadPool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQThreadPoolENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQThreadPoolENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSQThreadPoolENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQThreadPoolENDCLASS_t,
        // property 'expiryTimeout'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxThreadCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'activeThreadCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'stackSize'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'threadPriority'
        QtPrivate::TypeAndForceComplete<QThread::Priority, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QThreadPool, std::true_type>
    >,
    nullptr
} };

void QThreadPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QThreadPool *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->expiryTimeout(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maxThreadCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->activeThreadCount(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->stackSize(); break;
        case 4: *reinterpret_cast< QThread::Priority*>(_v) = _t->threadPriority(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QThreadPool *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpiryTimeout(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaxThreadCount(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setStackSize(*reinterpret_cast< uint*>(_v)); break;
        case 4: _t->setThreadPriority(*reinterpret_cast< QThread::Priority*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QThreadPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QThreadPool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQThreadPoolENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QThreadPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
