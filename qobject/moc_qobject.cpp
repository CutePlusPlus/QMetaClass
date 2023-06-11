/****************************************************************************
** Meta object code from reading C++ file 'qobject.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <qobject/qobject.h>

#include <qobject/qmetatype.h>
#include <qobject/qproperty.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qobject.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQObjectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQObjectENDCLASS = QtMocHelpers::stringData(
    "QObject",
    "destroyed",
    "",
    "objectNameChanged",
    "objectName",
    "deleteLater",
    "_q_reregisterTimers",
    "parent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQObjectENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[11];
    char stringdata5[12];
    char stringdata6[20];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQObjectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQObjectENDCLASS_t qt_meta_stringdata_CLASSQObjectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "QObject"
        QT_MOC_LITERAL(8, 9),  // "destroyed"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 17),  // "objectNameChanged"
        QT_MOC_LITERAL(37, 10),  // "objectName"
        QT_MOC_LITERAL(48, 11),  // "deleteLater"
        QT_MOC_LITERAL(60, 19),  // "_q_reregisterTimers"
        QT_MOC_LITERAL(80, 6)   // "parent"
    },
    "QObject",
    "destroyed",
    "",
    "objectNameChanged",
    "objectName",
    "deleteLater",
    "_q_reregisterTimers",
    "parent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQObjectENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   59, // properties
       0,    0, // enums/sets
       2,   64, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    2 /* Public */,
       1,    0,   47,    2, 0x26,    4 /* Public | MethodCloned */,
       3,    1,   48,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   51,    2, 0x0a,    7 /* Public */,
       6,    1,   52,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar,    2,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    7,
    0x80000000 | 2,

 // properties: name, type, flags
       4, QMetaType::QString, 0x02015103, uint(2), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   55,    2, 0x0e,   10 /* Public */,
       0,    0,   58,    2, 0x2e,   11 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject QObject::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQObjectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQObjectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQObjectENDCLASS_t,
        // property 'objectName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QObject, std::true_type>,
        // method 'destroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'destroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'objectNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteLater'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_reregisterTimers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<void *, std::false_type>,
        // constructor 'QObject'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { QObject *_r = new QObject((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { QObject *_r = new QObject();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->destroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 1: _t->destroyed(); break;
        case 2: _t->objectNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])), QPrivateSignal()); break;
        case 3: _t->deleteLater(); break;
        case 4: _t->d_func()->_q_reregisterTimers((*reinterpret_cast< std::add_pointer_t<void*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QObject::*)(QObject * );
            if (_t _q_method = &QObject::destroyed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QObject::*)(const QString & , QPrivateSignal);
            if (_t _q_method = &QObject::objectNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->objectName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QObject *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setObjectName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableObjectName(); break;
        default: break;
        }
    }
}

const QMetaObject *QObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQObjectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return nullptr;
}

int QObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QObject::destroyed(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QObject::objectNameChanged(const QString & _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
