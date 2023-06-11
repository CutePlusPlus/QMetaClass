/****************************************************************************
** Meta object code from reading C++ file 'qpluginloader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plugin/qpluginloader.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpluginloader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQPluginLoaderENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQPluginLoaderENDCLASS = QtMocHelpers::stringData(
    "QPluginLoader",
    "fileName",
    "loadHints",
    "QLibrary::LoadHints"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQPluginLoaderENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[14];
    char stringdata1[9];
    char stringdata2[10];
    char stringdata3[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQPluginLoaderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQPluginLoaderENDCLASS_t qt_meta_stringdata_CLASSQPluginLoaderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QPluginLoader"
        QT_MOC_LITERAL(14, 8),  // "fileName"
        QT_MOC_LITERAL(23, 9),  // "loadHints"
        QT_MOC_LITERAL(33, 19)   // "QLibrary::LoadHints"
    },
    "QPluginLoader",
    "fileName",
    "loadHints",
    "QLibrary::LoadHints"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQPluginLoaderENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSQPluginLoaderENDCLASS[] = {
    QMetaObject::SuperData::link<QLibrary::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QPluginLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQPluginLoaderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQPluginLoaderENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSQPluginLoaderENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQPluginLoaderENDCLASS_t,
        // property 'fileName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'loadHints'
        QtPrivate::TypeAndForceComplete<QLibrary::LoadHints, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPluginLoader, std::true_type>
    >,
    nullptr
} };

void QPluginLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QPluginLoader *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast< QLibrary::LoadHints*>(_v) = _t->loadHints(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QPluginLoader *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLoadHints(*reinterpret_cast< QLibrary::LoadHints*>(_v)); break;
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

const QMetaObject *QPluginLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPluginLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQPluginLoaderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPluginLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
