/****************************************************************************
** Meta object code from reading C++ file 'qcborstreamreader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serialization/qcborstreamreader.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcborstreamreader.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS = QtMocHelpers::stringData(
    "QCborStreamReader",
    "Type",
    "UnsignedInteger",
    "NegativeInteger",
    "ByteString",
    "ByteArray",
    "TextString",
    "String",
    "Array",
    "Map",
    "Tag",
    "SimpleType",
    "HalfFloat",
    "Float16",
    "Float",
    "Double",
    "Invalid",
    "StringResultCode",
    "EndOfString",
    "Ok",
    "Error"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[18];
    char stringdata1[5];
    char stringdata2[16];
    char stringdata3[16];
    char stringdata4[11];
    char stringdata5[10];
    char stringdata6[11];
    char stringdata7[7];
    char stringdata8[6];
    char stringdata9[4];
    char stringdata10[4];
    char stringdata11[11];
    char stringdata12[10];
    char stringdata13[8];
    char stringdata14[6];
    char stringdata15[7];
    char stringdata16[8];
    char stringdata17[17];
    char stringdata18[12];
    char stringdata19[3];
    char stringdata20[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS_t qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QCborStreamReader"
        QT_MOC_LITERAL(18, 4),  // "Type"
        QT_MOC_LITERAL(23, 15),  // "UnsignedInteger"
        QT_MOC_LITERAL(39, 15),  // "NegativeInteger"
        QT_MOC_LITERAL(55, 10),  // "ByteString"
        QT_MOC_LITERAL(66, 9),  // "ByteArray"
        QT_MOC_LITERAL(76, 10),  // "TextString"
        QT_MOC_LITERAL(87, 6),  // "String"
        QT_MOC_LITERAL(94, 5),  // "Array"
        QT_MOC_LITERAL(100, 3),  // "Map"
        QT_MOC_LITERAL(104, 3),  // "Tag"
        QT_MOC_LITERAL(108, 10),  // "SimpleType"
        QT_MOC_LITERAL(119, 9),  // "HalfFloat"
        QT_MOC_LITERAL(129, 7),  // "Float16"
        QT_MOC_LITERAL(137, 5),  // "Float"
        QT_MOC_LITERAL(143, 6),  // "Double"
        QT_MOC_LITERAL(150, 7),  // "Invalid"
        QT_MOC_LITERAL(158, 16),  // "StringResultCode"
        QT_MOC_LITERAL(175, 11),  // "EndOfString"
        QT_MOC_LITERAL(187, 2),  // "Ok"
        QT_MOC_LITERAL(190, 5)   // "Error"
    },
    "QCborStreamReader",
    "Type",
    "UnsignedInteger",
    "NegativeInteger",
    "ByteString",
    "ByteArray",
    "TextString",
    "String",
    "Array",
    "Map",
    "Tag",
    "SimpleType",
    "HalfFloat",
    "Float16",
    "Float",
    "Double",
    "Invalid",
    "StringResultCode",
    "EndOfString",
    "Ok",
    "Error"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCborStreamReaderENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   15,   24,
      17,   17, 0x0,    3,   54,

 // enum data: key, value
       2, uint(QCborStreamReader::UnsignedInteger),
       3, uint(QCborStreamReader::NegativeInteger),
       4, uint(QCborStreamReader::ByteString),
       5, uint(QCborStreamReader::ByteArray),
       6, uint(QCborStreamReader::TextString),
       7, uint(QCborStreamReader::String),
       8, uint(QCborStreamReader::Array),
       9, uint(QCborStreamReader::Map),
      10, uint(QCborStreamReader::Tag),
      11, uint(QCborStreamReader::SimpleType),
      12, uint(QCborStreamReader::HalfFloat),
      13, uint(QCborStreamReader::Float16),
      14, uint(QCborStreamReader::Float),
      15, uint(QCborStreamReader::Double),
      16, uint(QCborStreamReader::Invalid),
      18, uint(QCborStreamReader::EndOfString),
      19, uint(QCborStreamReader::Ok),
      20, uint(QCborStreamReader::Error),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCborStreamReader::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCborStreamReaderENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCborStreamReaderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCborStreamReader, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
