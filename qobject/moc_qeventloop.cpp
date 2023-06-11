/****************************************************************************
** Meta object code from reading C++ file 'qeventloop.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qobject/qeventloop.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qeventloop.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQEventLoopENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQEventLoopENDCLASS = QtMocHelpers::stringData(
    "QEventLoop",
    "exit",
    "",
    "returnCode",
    "quit",
    "ProcessEventsFlags",
    "ProcessEventsFlag",
    "AllEvents",
    "ExcludeUserInputEvents",
    "ExcludeSocketNotifiers",
    "WaitForMoreEvents",
    "X11ExcludeTimers",
    "EventLoopExec",
    "DialogExec",
    "ApplicationExec"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQEventLoopENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[5];
    char stringdata5[19];
    char stringdata6[18];
    char stringdata7[10];
    char stringdata8[23];
    char stringdata9[23];
    char stringdata10[18];
    char stringdata11[17];
    char stringdata12[14];
    char stringdata13[11];
    char stringdata14[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQEventLoopENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQEventLoopENDCLASS_t qt_meta_stringdata_CLASSQEventLoopENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QEventLoop"
        QT_MOC_LITERAL(11, 4),  // "exit"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 10),  // "returnCode"
        QT_MOC_LITERAL(28, 4),  // "quit"
        QT_MOC_LITERAL(33, 18),  // "ProcessEventsFlags"
        QT_MOC_LITERAL(52, 17),  // "ProcessEventsFlag"
        QT_MOC_LITERAL(70, 9),  // "AllEvents"
        QT_MOC_LITERAL(80, 22),  // "ExcludeUserInputEvents"
        QT_MOC_LITERAL(103, 22),  // "ExcludeSocketNotifiers"
        QT_MOC_LITERAL(126, 17),  // "WaitForMoreEvents"
        QT_MOC_LITERAL(144, 16),  // "X11ExcludeTimers"
        QT_MOC_LITERAL(161, 13),  // "EventLoopExec"
        QT_MOC_LITERAL(175, 10),  // "DialogExec"
        QT_MOC_LITERAL(186, 15)   // "ApplicationExec"
    },
    "QEventLoop",
    "exit",
    "",
    "returnCode",
    "quit",
    "ProcessEventsFlags",
    "ProcessEventsFlag",
    "AllEvents",
    "ExcludeUserInputEvents",
    "ExcludeSocketNotifiers",
    "WaitForMoreEvents",
    "X11ExcludeTimers",
    "EventLoopExec",
    "DialogExec",
    "ApplicationExec"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQEventLoopENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   37, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       1,    0,   35,    2, 0x2a,    3 /* Public | MethodCloned */,
       4,    0,   36,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       5,    6, 0x1,    8,   42,

 // enum data: key, value
       7, uint(QEventLoop::AllEvents),
       8, uint(QEventLoop::ExcludeUserInputEvents),
       9, uint(QEventLoop::ExcludeSocketNotifiers),
      10, uint(QEventLoop::WaitForMoreEvents),
      11, uint(QEventLoop::X11ExcludeTimers),
      12, uint(QEventLoop::EventLoopExec),
      13, uint(QEventLoop::DialogExec),
      14, uint(QEventLoop::ApplicationExec),

       0        // eod
};

Q_CONSTINIT const QMetaObject QEventLoop::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQEventLoopENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQEventLoopENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQEventLoopENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QEventLoop, std::true_type>,
        // method 'exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QEventLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QEventLoop *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->exit(); break;
        case 2: _t->quit(); break;
        default: ;
        }
    }
}

const QMetaObject *QEventLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEventLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQEventLoopENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QEventLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
