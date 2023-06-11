/****************************************************************************
** Meta object code from reading C++ file 'qcryptographichash.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tools/qcryptographichash.h"
#include <qobject/qmetatype.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcryptographichash.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQCryptographicHashENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQCryptographicHashENDCLASS = QtMocHelpers::stringData(
    "QCryptographicHash",
    "Algorithm",
    "Md4",
    "Md5",
    "Sha1",
    "Sha224",
    "Sha256",
    "Sha384",
    "Sha512",
    "Keccak_224",
    "Keccak_256",
    "Keccak_384",
    "Keccak_512",
    "RealSha3_224",
    "RealSha3_256",
    "RealSha3_384",
    "RealSha3_512",
    "Sha3_224",
    "Sha3_256",
    "Sha3_384",
    "Sha3_512",
    "Blake2b_160",
    "Blake2b_256",
    "Blake2b_384",
    "Blake2b_512",
    "Blake2s_128",
    "Blake2s_160",
    "Blake2s_224",
    "Blake2s_256",
    "NumAlgorithms"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQCryptographicHashENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[19];
    char stringdata1[10];
    char stringdata2[4];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[11];
    char stringdata10[11];
    char stringdata11[11];
    char stringdata12[11];
    char stringdata13[13];
    char stringdata14[13];
    char stringdata15[13];
    char stringdata16[13];
    char stringdata17[9];
    char stringdata18[9];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[12];
    char stringdata22[12];
    char stringdata23[12];
    char stringdata24[12];
    char stringdata25[12];
    char stringdata26[12];
    char stringdata27[12];
    char stringdata28[12];
    char stringdata29[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQCryptographicHashENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQCryptographicHashENDCLASS_t qt_meta_stringdata_CLASSQCryptographicHashENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QCryptographicHash"
        QT_MOC_LITERAL(19, 9),  // "Algorithm"
        QT_MOC_LITERAL(29, 3),  // "Md4"
        QT_MOC_LITERAL(33, 3),  // "Md5"
        QT_MOC_LITERAL(37, 4),  // "Sha1"
        QT_MOC_LITERAL(42, 6),  // "Sha224"
        QT_MOC_LITERAL(49, 6),  // "Sha256"
        QT_MOC_LITERAL(56, 6),  // "Sha384"
        QT_MOC_LITERAL(63, 6),  // "Sha512"
        QT_MOC_LITERAL(70, 10),  // "Keccak_224"
        QT_MOC_LITERAL(81, 10),  // "Keccak_256"
        QT_MOC_LITERAL(92, 10),  // "Keccak_384"
        QT_MOC_LITERAL(103, 10),  // "Keccak_512"
        QT_MOC_LITERAL(114, 12),  // "RealSha3_224"
        QT_MOC_LITERAL(127, 12),  // "RealSha3_256"
        QT_MOC_LITERAL(140, 12),  // "RealSha3_384"
        QT_MOC_LITERAL(153, 12),  // "RealSha3_512"
        QT_MOC_LITERAL(166, 8),  // "Sha3_224"
        QT_MOC_LITERAL(175, 8),  // "Sha3_256"
        QT_MOC_LITERAL(184, 8),  // "Sha3_384"
        QT_MOC_LITERAL(193, 8),  // "Sha3_512"
        QT_MOC_LITERAL(202, 11),  // "Blake2b_160"
        QT_MOC_LITERAL(214, 11),  // "Blake2b_256"
        QT_MOC_LITERAL(226, 11),  // "Blake2b_384"
        QT_MOC_LITERAL(238, 11),  // "Blake2b_512"
        QT_MOC_LITERAL(250, 11),  // "Blake2s_128"
        QT_MOC_LITERAL(262, 11),  // "Blake2s_160"
        QT_MOC_LITERAL(274, 11),  // "Blake2s_224"
        QT_MOC_LITERAL(286, 11),  // "Blake2s_256"
        QT_MOC_LITERAL(298, 13)   // "NumAlgorithms"
    },
    "QCryptographicHash",
    "Algorithm",
    "Md4",
    "Md5",
    "Sha1",
    "Sha224",
    "Sha256",
    "Sha384",
    "Sha512",
    "Keccak_224",
    "Keccak_256",
    "Keccak_384",
    "Keccak_512",
    "RealSha3_224",
    "RealSha3_256",
    "RealSha3_384",
    "RealSha3_512",
    "Sha3_224",
    "Sha3_256",
    "Sha3_384",
    "Sha3_512",
    "Blake2b_160",
    "Blake2b_256",
    "Blake2b_384",
    "Blake2b_512",
    "Blake2s_128",
    "Blake2s_160",
    "Blake2s_224",
    "Blake2s_256",
    "NumAlgorithms"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCryptographicHashENDCLASS[] = {

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
       1,    1, 0x0,   28,   19,

 // enum data: key, value
       2, uint(QCryptographicHash::Md4),
       3, uint(QCryptographicHash::Md5),
       4, uint(QCryptographicHash::Sha1),
       5, uint(QCryptographicHash::Sha224),
       6, uint(QCryptographicHash::Sha256),
       7, uint(QCryptographicHash::Sha384),
       8, uint(QCryptographicHash::Sha512),
       9, uint(QCryptographicHash::Keccak_224),
      10, uint(QCryptographicHash::Keccak_256),
      11, uint(QCryptographicHash::Keccak_384),
      12, uint(QCryptographicHash::Keccak_512),
      13, uint(QCryptographicHash::RealSha3_224),
      14, uint(QCryptographicHash::RealSha3_256),
      15, uint(QCryptographicHash::RealSha3_384),
      16, uint(QCryptographicHash::RealSha3_512),
      17, uint(QCryptographicHash::Sha3_224),
      18, uint(QCryptographicHash::Sha3_256),
      19, uint(QCryptographicHash::Sha3_384),
      20, uint(QCryptographicHash::Sha3_512),
      21, uint(QCryptographicHash::Blake2b_160),
      22, uint(QCryptographicHash::Blake2b_256),
      23, uint(QCryptographicHash::Blake2b_384),
      24, uint(QCryptographicHash::Blake2b_512),
      25, uint(QCryptographicHash::Blake2s_128),
      26, uint(QCryptographicHash::Blake2s_160),
      27, uint(QCryptographicHash::Blake2s_224),
      28, uint(QCryptographicHash::Blake2s_256),
      29, uint(QCryptographicHash::NumAlgorithms),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCryptographicHash::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCryptographicHashENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCryptographicHashENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCryptographicHashENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCryptographicHash, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
