/****************************************************************************
** Meta object code from reading C++ file 'qcoreapplication.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <qobject/qcoreapplication.h>
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcoreapplication.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCoreApplicationENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCoreApplicationENDCLASS = QtMocHelpers::stringData(
    "QCoreApplication",
    "aboutToQuit",
    "",
    "organizationNameChanged",
    "organizationDomainChanged",
    "applicationNameChanged",
    "applicationVersionChanged",
    "quit",
    "exit",
    "retcode",
    "applicationName",
    "applicationVersion",
    "organizationName",
    "organizationDomain",
    "quitLockEnabled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCoreApplicationENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[17];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[26];
    char stringdata5[23];
    char stringdata6[26];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[8];
    char stringdata10[16];
    char stringdata11[19];
    char stringdata12[17];
    char stringdata13[19];
    char stringdata14[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCoreApplicationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCoreApplicationENDCLASS_t qt_meta_stringdata_CLASSQCoreApplicationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QCoreApplication"
        QT_MOC_LITERAL(17, 11),  // "aboutToQuit"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 23),  // "organizationNameChanged"
        QT_MOC_LITERAL(54, 25),  // "organizationDomainChanged"
        QT_MOC_LITERAL(80, 22),  // "applicationNameChanged"
        QT_MOC_LITERAL(103, 25),  // "applicationVersionChanged"
        QT_MOC_LITERAL(129, 4),  // "quit"
        QT_MOC_LITERAL(134, 4),  // "exit"
        QT_MOC_LITERAL(139, 7),  // "retcode"
        QT_MOC_LITERAL(147, 15),  // "applicationName"
        QT_MOC_LITERAL(163, 18),  // "applicationVersion"
        QT_MOC_LITERAL(182, 16),  // "organizationName"
        QT_MOC_LITERAL(199, 18),  // "organizationDomain"
        QT_MOC_LITERAL(218, 15)   // "quitLockEnabled"
    },
    "QCoreApplication",
    "aboutToQuit",
    "",
    "organizationNameChanged",
    "organizationDomainChanged",
    "applicationNameChanged",
    "applicationVersionChanged",
    "quit",
    "exit",
    "retcode",
    "applicationName",
    "applicationVersion",
    "organizationName",
    "organizationDomain",
    "quitLockEnabled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCoreApplicationENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    6 /* Public */,
       3,    0,   63,    2, 0x06,    7 /* Public */,
       4,    0,   64,    2, 0x06,    8 /* Public */,
       5,    0,   65,    2, 0x06,    9 /* Public */,
       6,    0,   66,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   67,    2, 0x0a,   11 /* Public */,
       8,    1,   68,    2, 0x0a,   12 /* Public */,
       8,    0,   71,    2, 0x2a,   14 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015103, uint(3), 0,
      11, QMetaType::QString, 0x00015103, uint(4), 0,
      12, QMetaType::QString, 0x00015103, uint(1), 0,
      13, QMetaType::QString, 0x00015103, uint(2), 0,
      14, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCoreApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCoreApplicationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCoreApplicationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCoreApplicationENDCLASS_t,
        // property 'applicationName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'applicationVersion'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'organizationName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'organizationDomain'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'quitLockEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCoreApplication, std::true_type>,
        // method 'aboutToQuit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'organizationNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'organizationDomainChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applicationNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applicationVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QCoreApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QCoreApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToQuit(QPrivateSignal()); break;
        case 1: _t->organizationNameChanged(); break;
        case 2: _t->organizationDomainChanged(); break;
        case 3: _t->applicationNameChanged(); break;
        case 4: _t->applicationVersionChanged(); break;
        case 5: _t->quit(); break;
        case 6: _t->exit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->exit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCoreApplication::*)(QPrivateSignal);
            if (_t _q_method = &QCoreApplication::aboutToQuit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCoreApplication::*)();
            if (_t _q_method = &QCoreApplication::organizationNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCoreApplication::*)();
            if (_t _q_method = &QCoreApplication::organizationDomainChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCoreApplication::*)();
            if (_t _q_method = &QCoreApplication::applicationNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QCoreApplication::*)();
            if (_t _q_method = &QCoreApplication::applicationVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QCoreApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->applicationName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->applicationVersion(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->organizationName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->organizationDomain(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isQuitLockEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QCoreApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setApplicationName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setApplicationVersion(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setOrganizationName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setOrganizationDomain(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setQuitLockEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCoreApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCoreApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCoreApplicationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCoreApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QCoreApplication::aboutToQuit(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCoreApplication::organizationNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCoreApplication::organizationDomainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCoreApplication::applicationNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QCoreApplication::applicationVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
