/****************************************************************************
** Meta object code from reading C++ file 'qcborcommon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serialization/qcborcommon.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcborcommon.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCborErrorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCborErrorENDCLASS = QtMocHelpers::stringData(
    "QCborError",
    "Code",
    "UnknownError",
    "AdvancePastEnd",
    "InputOutputError",
    "GarbageAtEnd",
    "EndOfFile",
    "UnexpectedBreak",
    "UnknownType",
    "IllegalType",
    "IllegalNumber",
    "IllegalSimpleType",
    "InvalidUtf8String",
    "DataTooLarge",
    "NestingTooDeep",
    "UnsupportedType",
    "NoError"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCborErrorENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[5];
    char stringdata2[13];
    char stringdata3[15];
    char stringdata4[17];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[16];
    char stringdata8[12];
    char stringdata9[12];
    char stringdata10[14];
    char stringdata11[18];
    char stringdata12[18];
    char stringdata13[13];
    char stringdata14[15];
    char stringdata15[16];
    char stringdata16[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCborErrorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCborErrorENDCLASS_t qt_meta_stringdata_CLASSQCborErrorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QCborError"
        QT_MOC_LITERAL(11, 4),  // "Code"
        QT_MOC_LITERAL(16, 12),  // "UnknownError"
        QT_MOC_LITERAL(29, 14),  // "AdvancePastEnd"
        QT_MOC_LITERAL(44, 16),  // "InputOutputError"
        QT_MOC_LITERAL(61, 12),  // "GarbageAtEnd"
        QT_MOC_LITERAL(74, 9),  // "EndOfFile"
        QT_MOC_LITERAL(84, 15),  // "UnexpectedBreak"
        QT_MOC_LITERAL(100, 11),  // "UnknownType"
        QT_MOC_LITERAL(112, 11),  // "IllegalType"
        QT_MOC_LITERAL(124, 13),  // "IllegalNumber"
        QT_MOC_LITERAL(138, 17),  // "IllegalSimpleType"
        QT_MOC_LITERAL(156, 17),  // "InvalidUtf8String"
        QT_MOC_LITERAL(174, 12),  // "DataTooLarge"
        QT_MOC_LITERAL(187, 14),  // "NestingTooDeep"
        QT_MOC_LITERAL(202, 15),  // "UnsupportedType"
        QT_MOC_LITERAL(218, 7)   // "NoError"
    },
    "QCborError",
    "Code",
    "UnknownError",
    "AdvancePastEnd",
    "InputOutputError",
    "GarbageAtEnd",
    "EndOfFile",
    "UnexpectedBreak",
    "UnknownType",
    "IllegalType",
    "IllegalNumber",
    "IllegalSimpleType",
    "InvalidUtf8String",
    "DataTooLarge",
    "NestingTooDeep",
    "UnsupportedType",
    "NoError"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCborErrorENDCLASS[] = {

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
       1,    1, 0x0,   15,   19,

 // enum data: key, value
       2, uint(QCborError::UnknownError),
       3, uint(QCborError::AdvancePastEnd),
       4, uint(QCborError::InputOutputError),
       5, uint(QCborError::GarbageAtEnd),
       6, uint(QCborError::EndOfFile),
       7, uint(QCborError::UnexpectedBreak),
       8, uint(QCborError::UnknownType),
       9, uint(QCborError::IllegalType),
      10, uint(QCborError::IllegalNumber),
      11, uint(QCborError::IllegalSimpleType),
      12, uint(QCborError::InvalidUtf8String),
      13, uint(QCborError::DataTooLarge),
      14, uint(QCborError::NestingTooDeep),
      15, uint(QCborError::UnsupportedType),
      16, uint(QCborError::NoError),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCborError::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCborErrorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCborErrorENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCborErrorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCborError, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
