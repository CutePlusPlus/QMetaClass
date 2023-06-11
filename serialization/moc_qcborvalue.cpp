/****************************************************************************
** Meta object code from reading C++ file 'qcborvalue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serialization/qcborvalue.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcborvalue.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCborValueENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCborValueENDCLASS = QtMocHelpers::stringData(
    "QCborValue",
    "Type",
    "Integer",
    "ByteArray",
    "String",
    "Array",
    "Map",
    "Tag",
    "SimpleType",
    "False",
    "True",
    "Null",
    "Undefined",
    "Double",
    "DateTime",
    "Url",
    "RegularExpression",
    "Uuid",
    "Invalid"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCborValueENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[5];
    char stringdata2[8];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[4];
    char stringdata7[4];
    char stringdata8[11];
    char stringdata9[6];
    char stringdata10[5];
    char stringdata11[5];
    char stringdata12[10];
    char stringdata13[7];
    char stringdata14[9];
    char stringdata15[4];
    char stringdata16[18];
    char stringdata17[5];
    char stringdata18[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCborValueENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCborValueENDCLASS_t qt_meta_stringdata_CLASSQCborValueENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QCborValue"
        QT_MOC_LITERAL(11, 4),  // "Type"
        QT_MOC_LITERAL(16, 7),  // "Integer"
        QT_MOC_LITERAL(24, 9),  // "ByteArray"
        QT_MOC_LITERAL(34, 6),  // "String"
        QT_MOC_LITERAL(41, 5),  // "Array"
        QT_MOC_LITERAL(47, 3),  // "Map"
        QT_MOC_LITERAL(51, 3),  // "Tag"
        QT_MOC_LITERAL(55, 10),  // "SimpleType"
        QT_MOC_LITERAL(66, 5),  // "False"
        QT_MOC_LITERAL(72, 4),  // "True"
        QT_MOC_LITERAL(77, 4),  // "Null"
        QT_MOC_LITERAL(82, 9),  // "Undefined"
        QT_MOC_LITERAL(92, 6),  // "Double"
        QT_MOC_LITERAL(99, 8),  // "DateTime"
        QT_MOC_LITERAL(108, 3),  // "Url"
        QT_MOC_LITERAL(112, 17),  // "RegularExpression"
        QT_MOC_LITERAL(130, 4),  // "Uuid"
        QT_MOC_LITERAL(135, 7)   // "Invalid"
    },
    "QCborValue",
    "Type",
    "Integer",
    "ByteArray",
    "String",
    "Array",
    "Map",
    "Tag",
    "SimpleType",
    "False",
    "True",
    "Null",
    "Undefined",
    "Double",
    "DateTime",
    "Url",
    "RegularExpression",
    "Uuid",
    "Invalid"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCborValueENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   17,   19,

 // enum data: key, value
       2, uint(QCborValue::Integer),
       3, uint(QCborValue::ByteArray),
       4, uint(QCborValue::String),
       5, uint(QCborValue::Array),
       6, uint(QCborValue::Map),
       7, uint(QCborValue::Tag),
       8, uint(QCborValue::SimpleType),
       9, uint(QCborValue::False),
      10, uint(QCborValue::True),
      11, uint(QCborValue::Null),
      12, uint(QCborValue::Undefined),
      13, uint(QCborValue::Double),
      14, uint(QCborValue::DateTime),
      15, uint(QCborValue::Url),
      16, uint(QCborValue::RegularExpression),
      17, uint(QCborValue::Uuid),
      18, uint(QCborValue::Invalid),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCborValue::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCborValueENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCborValueENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCborValueENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCborValue, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
