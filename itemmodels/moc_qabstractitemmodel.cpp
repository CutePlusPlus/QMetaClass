/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "itemmodels/qabstractitemmodel.h"
#include <qobject/qmetatype.h>
#include <tools/qlist.h>

#if __has_include(<qobject/qtmochelpers.h>)
#include <qobject/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS = QtMocHelpers::stringData(
    "QAbstractItemModel",
    "dataChanged",
    "",
    "QModelIndex",
    "topLeft",
    "bottomRight",
    "QList<int>",
    "roles",
    "headerDataChanged",
    "Qt::Orientation",
    "orientation",
    "first",
    "last",
    "layoutChanged",
    "QList<QPersistentModelIndex>",
    "parents",
    "QAbstractItemModel::LayoutChangeHint",
    "hint",
    "layoutAboutToBeChanged",
    "rowsAboutToBeInserted",
    "parent",
    "rowsInserted",
    "rowsAboutToBeRemoved",
    "rowsRemoved",
    "columnsAboutToBeInserted",
    "columnsInserted",
    "columnsAboutToBeRemoved",
    "columnsRemoved",
    "modelAboutToBeReset",
    "modelReset",
    "rowsAboutToBeMoved",
    "sourceParent",
    "sourceStart",
    "sourceEnd",
    "destinationParent",
    "destinationRow",
    "rowsMoved",
    "columnsAboutToBeMoved",
    "destinationColumn",
    "columnsMoved",
    "submit",
    "revert",
    "resetInternalData",
    "hasIndex",
    "row",
    "column",
    "index",
    "child",
    "sibling",
    "idx",
    "rowCount",
    "columnCount",
    "hasChildren",
    "data",
    "role",
    "setData",
    "value",
    "headerData",
    "section",
    "insertRows",
    "count",
    "insertColumns",
    "removeRows",
    "removeColumns",
    "moveRows",
    "sourceRow",
    "destinationChild",
    "moveColumns",
    "sourceColumn",
    "insertRow",
    "insertColumn",
    "removeRow",
    "removeColumn",
    "moveRow",
    "moveColumn",
    "fetchMore",
    "canFetchMore",
    "flags",
    "Qt::ItemFlags",
    "sort",
    "Qt::SortOrder",
    "order",
    "match",
    "QModelIndexList",
    "start",
    "hits",
    "Qt::MatchFlags",
    "LayoutChangeHint",
    "NoLayoutChangeHint",
    "VerticalSortHint",
    "HorizontalSortHint",
    "CheckIndexOption",
    "NoOption",
    "IndexIsValid",
    "DoNotUseParent",
    "ParentIsInvalid"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS_t {
    uint offsetsAndSizes[192];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[11];
    char stringdata7[6];
    char stringdata8[18];
    char stringdata9[16];
    char stringdata10[12];
    char stringdata11[6];
    char stringdata12[5];
    char stringdata13[14];
    char stringdata14[29];
    char stringdata15[8];
    char stringdata16[37];
    char stringdata17[5];
    char stringdata18[23];
    char stringdata19[22];
    char stringdata20[7];
    char stringdata21[13];
    char stringdata22[21];
    char stringdata23[12];
    char stringdata24[25];
    char stringdata25[16];
    char stringdata26[24];
    char stringdata27[15];
    char stringdata28[20];
    char stringdata29[11];
    char stringdata30[19];
    char stringdata31[13];
    char stringdata32[12];
    char stringdata33[10];
    char stringdata34[18];
    char stringdata35[15];
    char stringdata36[10];
    char stringdata37[22];
    char stringdata38[18];
    char stringdata39[13];
    char stringdata40[7];
    char stringdata41[7];
    char stringdata42[18];
    char stringdata43[9];
    char stringdata44[4];
    char stringdata45[7];
    char stringdata46[6];
    char stringdata47[6];
    char stringdata48[8];
    char stringdata49[4];
    char stringdata50[9];
    char stringdata51[12];
    char stringdata52[12];
    char stringdata53[5];
    char stringdata54[5];
    char stringdata55[8];
    char stringdata56[6];
    char stringdata57[11];
    char stringdata58[8];
    char stringdata59[11];
    char stringdata60[6];
    char stringdata61[14];
    char stringdata62[11];
    char stringdata63[14];
    char stringdata64[9];
    char stringdata65[10];
    char stringdata66[17];
    char stringdata67[12];
    char stringdata68[13];
    char stringdata69[10];
    char stringdata70[13];
    char stringdata71[10];
    char stringdata72[13];
    char stringdata73[8];
    char stringdata74[11];
    char stringdata75[10];
    char stringdata76[13];
    char stringdata77[6];
    char stringdata78[14];
    char stringdata79[5];
    char stringdata80[14];
    char stringdata81[6];
    char stringdata82[6];
    char stringdata83[16];
    char stringdata84[6];
    char stringdata85[5];
    char stringdata86[15];
    char stringdata87[17];
    char stringdata88[19];
    char stringdata89[17];
    char stringdata90[19];
    char stringdata91[17];
    char stringdata92[9];
    char stringdata93[13];
    char stringdata94[15];
    char stringdata95[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS_t qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QAbstractItemModel"
        QT_MOC_LITERAL(19, 11),  // "dataChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 11),  // "QModelIndex"
        QT_MOC_LITERAL(44, 7),  // "topLeft"
        QT_MOC_LITERAL(52, 11),  // "bottomRight"
        QT_MOC_LITERAL(64, 10),  // "QList<int>"
        QT_MOC_LITERAL(75, 5),  // "roles"
        QT_MOC_LITERAL(81, 17),  // "headerDataChanged"
        QT_MOC_LITERAL(99, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(115, 11),  // "orientation"
        QT_MOC_LITERAL(127, 5),  // "first"
        QT_MOC_LITERAL(133, 4),  // "last"
        QT_MOC_LITERAL(138, 13),  // "layoutChanged"
        QT_MOC_LITERAL(152, 28),  // "QList<QPersistentModelIndex>"
        QT_MOC_LITERAL(181, 7),  // "parents"
        QT_MOC_LITERAL(189, 36),  // "QAbstractItemModel::LayoutCha..."
        QT_MOC_LITERAL(226, 4),  // "hint"
        QT_MOC_LITERAL(231, 22),  // "layoutAboutToBeChanged"
        QT_MOC_LITERAL(254, 21),  // "rowsAboutToBeInserted"
        QT_MOC_LITERAL(276, 6),  // "parent"
        QT_MOC_LITERAL(283, 12),  // "rowsInserted"
        QT_MOC_LITERAL(296, 20),  // "rowsAboutToBeRemoved"
        QT_MOC_LITERAL(317, 11),  // "rowsRemoved"
        QT_MOC_LITERAL(329, 24),  // "columnsAboutToBeInserted"
        QT_MOC_LITERAL(354, 15),  // "columnsInserted"
        QT_MOC_LITERAL(370, 23),  // "columnsAboutToBeRemoved"
        QT_MOC_LITERAL(394, 14),  // "columnsRemoved"
        QT_MOC_LITERAL(409, 19),  // "modelAboutToBeReset"
        QT_MOC_LITERAL(429, 10),  // "modelReset"
        QT_MOC_LITERAL(440, 18),  // "rowsAboutToBeMoved"
        QT_MOC_LITERAL(459, 12),  // "sourceParent"
        QT_MOC_LITERAL(472, 11),  // "sourceStart"
        QT_MOC_LITERAL(484, 9),  // "sourceEnd"
        QT_MOC_LITERAL(494, 17),  // "destinationParent"
        QT_MOC_LITERAL(512, 14),  // "destinationRow"
        QT_MOC_LITERAL(527, 9),  // "rowsMoved"
        QT_MOC_LITERAL(537, 21),  // "columnsAboutToBeMoved"
        QT_MOC_LITERAL(559, 17),  // "destinationColumn"
        QT_MOC_LITERAL(577, 12),  // "columnsMoved"
        QT_MOC_LITERAL(590, 6),  // "submit"
        QT_MOC_LITERAL(597, 6),  // "revert"
        QT_MOC_LITERAL(604, 17),  // "resetInternalData"
        QT_MOC_LITERAL(622, 8),  // "hasIndex"
        QT_MOC_LITERAL(631, 3),  // "row"
        QT_MOC_LITERAL(635, 6),  // "column"
        QT_MOC_LITERAL(642, 5),  // "index"
        QT_MOC_LITERAL(648, 5),  // "child"
        QT_MOC_LITERAL(654, 7),  // "sibling"
        QT_MOC_LITERAL(662, 3),  // "idx"
        QT_MOC_LITERAL(666, 8),  // "rowCount"
        QT_MOC_LITERAL(675, 11),  // "columnCount"
        QT_MOC_LITERAL(687, 11),  // "hasChildren"
        QT_MOC_LITERAL(699, 4),  // "data"
        QT_MOC_LITERAL(704, 4),  // "role"
        QT_MOC_LITERAL(709, 7),  // "setData"
        QT_MOC_LITERAL(717, 5),  // "value"
        QT_MOC_LITERAL(723, 10),  // "headerData"
        QT_MOC_LITERAL(734, 7),  // "section"
        QT_MOC_LITERAL(742, 10),  // "insertRows"
        QT_MOC_LITERAL(753, 5),  // "count"
        QT_MOC_LITERAL(759, 13),  // "insertColumns"
        QT_MOC_LITERAL(773, 10),  // "removeRows"
        QT_MOC_LITERAL(784, 13),  // "removeColumns"
        QT_MOC_LITERAL(798, 8),  // "moveRows"
        QT_MOC_LITERAL(807, 9),  // "sourceRow"
        QT_MOC_LITERAL(817, 16),  // "destinationChild"
        QT_MOC_LITERAL(834, 11),  // "moveColumns"
        QT_MOC_LITERAL(846, 12),  // "sourceColumn"
        QT_MOC_LITERAL(859, 9),  // "insertRow"
        QT_MOC_LITERAL(869, 12),  // "insertColumn"
        QT_MOC_LITERAL(882, 9),  // "removeRow"
        QT_MOC_LITERAL(892, 12),  // "removeColumn"
        QT_MOC_LITERAL(905, 7),  // "moveRow"
        QT_MOC_LITERAL(913, 10),  // "moveColumn"
        QT_MOC_LITERAL(924, 9),  // "fetchMore"
        QT_MOC_LITERAL(934, 12),  // "canFetchMore"
        QT_MOC_LITERAL(947, 5),  // "flags"
        QT_MOC_LITERAL(953, 13),  // "Qt::ItemFlags"
        QT_MOC_LITERAL(967, 4),  // "sort"
        QT_MOC_LITERAL(972, 13),  // "Qt::SortOrder"
        QT_MOC_LITERAL(986, 5),  // "order"
        QT_MOC_LITERAL(992, 5),  // "match"
        QT_MOC_LITERAL(998, 15),  // "QModelIndexList"
        QT_MOC_LITERAL(1014, 5),  // "start"
        QT_MOC_LITERAL(1020, 4),  // "hits"
        QT_MOC_LITERAL(1025, 14),  // "Qt::MatchFlags"
        QT_MOC_LITERAL(1040, 16),  // "LayoutChangeHint"
        QT_MOC_LITERAL(1057, 18),  // "NoLayoutChangeHint"
        QT_MOC_LITERAL(1076, 16),  // "VerticalSortHint"
        QT_MOC_LITERAL(1093, 18),  // "HorizontalSortHint"
        QT_MOC_LITERAL(1112, 16),  // "CheckIndexOption"
        QT_MOC_LITERAL(1129, 8),  // "NoOption"
        QT_MOC_LITERAL(1138, 12),  // "IndexIsValid"
        QT_MOC_LITERAL(1151, 14),  // "DoNotUseParent"
        QT_MOC_LITERAL(1166, 15)   // "ParentIsInvalid"
    },
    "QAbstractItemModel",
    "dataChanged",
    "",
    "QModelIndex",
    "topLeft",
    "bottomRight",
    "QList<int>",
    "roles",
    "headerDataChanged",
    "Qt::Orientation",
    "orientation",
    "first",
    "last",
    "layoutChanged",
    "QList<QPersistentModelIndex>",
    "parents",
    "QAbstractItemModel::LayoutChangeHint",
    "hint",
    "layoutAboutToBeChanged",
    "rowsAboutToBeInserted",
    "parent",
    "rowsInserted",
    "rowsAboutToBeRemoved",
    "rowsRemoved",
    "columnsAboutToBeInserted",
    "columnsInserted",
    "columnsAboutToBeRemoved",
    "columnsRemoved",
    "modelAboutToBeReset",
    "modelReset",
    "rowsAboutToBeMoved",
    "sourceParent",
    "sourceStart",
    "sourceEnd",
    "destinationParent",
    "destinationRow",
    "rowsMoved",
    "columnsAboutToBeMoved",
    "destinationColumn",
    "columnsMoved",
    "submit",
    "revert",
    "resetInternalData",
    "hasIndex",
    "row",
    "column",
    "index",
    "child",
    "sibling",
    "idx",
    "rowCount",
    "columnCount",
    "hasChildren",
    "data",
    "role",
    "setData",
    "value",
    "headerData",
    "section",
    "insertRows",
    "count",
    "insertColumns",
    "removeRows",
    "removeColumns",
    "moveRows",
    "sourceRow",
    "destinationChild",
    "moveColumns",
    "sourceColumn",
    "insertRow",
    "insertColumn",
    "removeRow",
    "removeColumn",
    "moveRow",
    "moveColumn",
    "fetchMore",
    "canFetchMore",
    "flags",
    "Qt::ItemFlags",
    "sort",
    "Qt::SortOrder",
    "order",
    "match",
    "QModelIndexList",
    "start",
    "hits",
    "Qt::MatchFlags",
    "LayoutChangeHint",
    "NoLayoutChangeHint",
    "VerticalSortHint",
    "HorizontalSortHint",
    "CheckIndexOption",
    "NoOption",
    "IndexIsValid",
    "DoNotUseParent",
    "ParentIsInvalid"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQAbstractItemModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
       0,    0, // properties
       2,  902, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,  518,    2, 0x06,    1 /* Public */,
       1,    2,  525,    2, 0x26,    5 /* Public | MethodCloned */,
       8,    3,  530,    2, 0x06,    8 /* Public */,
      13,    2,  537,    2, 0x06,   12 /* Public */,
      13,    1,  542,    2, 0x26,   15 /* Public | MethodCloned */,
      13,    0,  545,    2, 0x26,   17 /* Public | MethodCloned */,
      18,    2,  546,    2, 0x06,   18 /* Public */,
      18,    1,  551,    2, 0x26,   21 /* Public | MethodCloned */,
      18,    0,  554,    2, 0x26,   23 /* Public | MethodCloned */,
      19,    3,  555,    2, 0x06,   24 /* Public */,
      21,    3,  562,    2, 0x06,   28 /* Public */,
      22,    3,  569,    2, 0x06,   32 /* Public */,
      23,    3,  576,    2, 0x06,   36 /* Public */,
      24,    3,  583,    2, 0x06,   40 /* Public */,
      25,    3,  590,    2, 0x06,   44 /* Public */,
      26,    3,  597,    2, 0x06,   48 /* Public */,
      27,    3,  604,    2, 0x06,   52 /* Public */,
      28,    0,  611,    2, 0x06,   56 /* Public */,
      29,    0,  612,    2, 0x06,   57 /* Public */,
      30,    5,  613,    2, 0x06,   58 /* Public */,
      36,    5,  624,    2, 0x06,   64 /* Public */,
      37,    5,  635,    2, 0x06,   70 /* Public */,
      39,    5,  646,    2, 0x06,   76 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      40,    0,  657,    2, 0x0a,   82 /* Public */,
      41,    0,  658,    2, 0x0a,   83 /* Public */,
      42,    0,  659,    2, 0x09,   84 /* Protected */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      43,    3,  660,    2, 0x102,   85 /* Public | MethodIsConst  */,
      43,    2,  667,    2, 0x122,   89 /* Public | MethodCloned | MethodIsConst  */,
      46,    3,  672,    2, 0x102,   92 /* Public | MethodIsConst  */,
      46,    2,  679,    2, 0x122,   96 /* Public | MethodCloned | MethodIsConst  */,
      20,    1,  684,    2, 0x102,   99 /* Public | MethodIsConst  */,
      48,    3,  687,    2, 0x102,  101 /* Public | MethodIsConst  */,
      50,    1,  694,    2, 0x102,  105 /* Public | MethodIsConst  */,
      50,    0,  697,    2, 0x122,  107 /* Public | MethodCloned | MethodIsConst  */,
      51,    1,  698,    2, 0x102,  108 /* Public | MethodIsConst  */,
      51,    0,  701,    2, 0x122,  110 /* Public | MethodCloned | MethodIsConst  */,
      52,    1,  702,    2, 0x102,  111 /* Public | MethodIsConst  */,
      52,    0,  705,    2, 0x122,  113 /* Public | MethodCloned | MethodIsConst  */,
      53,    2,  706,    2, 0x102,  114 /* Public | MethodIsConst  */,
      53,    1,  711,    2, 0x122,  117 /* Public | MethodCloned | MethodIsConst  */,
      55,    3,  714,    2, 0x02,  119 /* Public */,
      55,    2,  721,    2, 0x22,  123 /* Public | MethodCloned */,
      57,    3,  726,    2, 0x102,  126 /* Public | MethodIsConst  */,
      57,    2,  733,    2, 0x122,  130 /* Public | MethodCloned | MethodIsConst  */,
      59,    3,  738,    2, 0x82,  133 /* Public | MethodRevisioned */,
      59,    2,  745,    2, 0xa2,  137 /* Public | MethodCloned | MethodRevisioned */,
      61,    3,  750,    2, 0x82,  140 /* Public | MethodRevisioned */,
      61,    2,  757,    2, 0xa2,  144 /* Public | MethodCloned | MethodRevisioned */,
      62,    3,  762,    2, 0x82,  147 /* Public | MethodRevisioned */,
      62,    2,  769,    2, 0xa2,  151 /* Public | MethodCloned | MethodRevisioned */,
      63,    3,  774,    2, 0x82,  154 /* Public | MethodRevisioned */,
      63,    2,  781,    2, 0xa2,  158 /* Public | MethodCloned | MethodRevisioned */,
      64,    5,  786,    2, 0x82,  161 /* Public | MethodRevisioned */,
      67,    5,  797,    2, 0x82,  167 /* Public | MethodRevisioned */,
      69,    2,  808,    2, 0x82,  173 /* Public | MethodRevisioned */,
      69,    1,  813,    2, 0xa2,  176 /* Public | MethodCloned | MethodRevisioned */,
      70,    2,  816,    2, 0x82,  178 /* Public | MethodRevisioned */,
      70,    1,  821,    2, 0xa2,  181 /* Public | MethodCloned | MethodRevisioned */,
      71,    2,  824,    2, 0x82,  183 /* Public | MethodRevisioned */,
      71,    1,  829,    2, 0xa2,  186 /* Public | MethodCloned | MethodRevisioned */,
      72,    2,  832,    2, 0x82,  188 /* Public | MethodRevisioned */,
      72,    1,  837,    2, 0xa2,  191 /* Public | MethodCloned | MethodRevisioned */,
      73,    4,  840,    2, 0x82,  193 /* Public | MethodRevisioned */,
      74,    4,  849,    2, 0x82,  198 /* Public | MethodRevisioned */,
      75,    1,  858,    2, 0x02,  203 /* Public */,
      76,    1,  861,    2, 0x102,  205 /* Public | MethodIsConst  */,
      77,    1,  864,    2, 0x102,  207 /* Public | MethodIsConst  */,
      79,    2,  867,    2, 0x82,  209 /* Public | MethodRevisioned */,
      79,    1,  872,    2, 0xa2,  212 /* Public | MethodCloned | MethodRevisioned */,
      82,    5,  875,    2, 0x102,  214 /* Public | MethodIsConst  */,
      82,    4,  886,    2, 0x122,  220 /* Public | MethodCloned | MethodIsConst  */,
      82,    3,  895,    2, 0x122,  225 /* Public | MethodCloned | MethodIsConst  */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       0,
       0,

 // methods: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
    1540,
       0,
       0,
       0,
    1540,
    1540,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   20,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   32,   33,   34,   35,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   32,   33,   34,   35,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   32,   33,   34,   38,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   32,   33,   34,   38,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   44,   45,   20,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   44,   45,
    0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   44,   45,   20,
    0x80000000 | 3, QMetaType::Int, QMetaType::Int,   44,   45,
    0x80000000 | 3, 0x80000000 | 3,   47,
    0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   44,   45,   49,
    QMetaType::Int, 0x80000000 | 3,   20,
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 3,   20,
    QMetaType::Int,
    QMetaType::Bool, 0x80000000 | 3,   20,
    QMetaType::Bool,
    QMetaType::QVariant, 0x80000000 | 3, QMetaType::Int,   46,   54,
    QMetaType::QVariant, 0x80000000 | 3,   46,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QVariant, QMetaType::Int,   46,   56,   54,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QVariant,   46,   56,
    QMetaType::QVariant, QMetaType::Int, 0x80000000 | 9, QMetaType::Int,   58,   10,   54,
    QMetaType::QVariant, QMetaType::Int, 0x80000000 | 9,   58,   10,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   44,   60,   20,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   44,   60,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   45,   60,   20,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   45,   60,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   44,   60,   20,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   44,   60,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, 0x80000000 | 3,   45,   60,   20,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   45,   60,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   65,   60,   34,   66,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   68,   60,   34,   66,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 3,   44,   20,
    QMetaType::Bool, QMetaType::Int,   44,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 3,   45,   20,
    QMetaType::Bool, QMetaType::Int,   45,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 3,   44,   20,
    QMetaType::Bool, QMetaType::Int,   44,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 3,   45,   20,
    QMetaType::Bool, QMetaType::Int,   45,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   65,   34,   66,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   31,   68,   34,   66,
    QMetaType::Void, 0x80000000 | 3,   20,
    QMetaType::Bool, 0x80000000 | 3,   20,
    0x80000000 | 78, 0x80000000 | 3,   46,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 80,   45,   81,
    QMetaType::Void, QMetaType::Int,   45,
    0x80000000 | 83, 0x80000000 | 3, QMetaType::Int, QMetaType::QVariant, QMetaType::Int, 0x80000000 | 86,   84,   54,   56,   85,   77,
    0x80000000 | 83, 0x80000000 | 3, QMetaType::Int, QMetaType::QVariant, QMetaType::Int,   84,   54,   56,   85,
    0x80000000 | 83, 0x80000000 | 3, QMetaType::Int, QMetaType::QVariant,   84,   54,   56,

 // enums: name, alias, flags, count, data
      87,   87, 0x0,    3,  912,
      91,   91, 0x2,    4,  918,

 // enum data: key, value
      88, uint(QAbstractItemModel::NoLayoutChangeHint),
      89, uint(QAbstractItemModel::VerticalSortHint),
      90, uint(QAbstractItemModel::HorizontalSortHint),
      92, uint(QAbstractItemModel::CheckIndexOption::NoOption),
      93, uint(QAbstractItemModel::CheckIndexOption::IndexIsValid),
      94, uint(QAbstractItemModel::CheckIndexOption::DoNotUseParent),
      95, uint(QAbstractItemModel::CheckIndexOption::ParentIsInvalid),

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractItemModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQAbstractItemModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractItemModel, std::true_type>,
        // method 'dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'headerDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'layoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPersistentModelIndex> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemModel::LayoutChangeHint, std::false_type>,
        // method 'layoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPersistentModelIndex> &, std::false_type>,
        // method 'layoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'layoutAboutToBeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPersistentModelIndex> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractItemModel::LayoutChangeHint, std::false_type>,
        // method 'layoutAboutToBeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPersistentModelIndex> &, std::false_type>,
        // method 'layoutAboutToBeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rowsAboutToBeInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowsAboutToBeRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnsAboutToBeInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnsAboutToBeRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'modelAboutToBeReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modelReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rowsAboutToBeMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowsMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnsAboutToBeMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnsMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'submit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'revert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetInternalData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hasIndex'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'hasIndex'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'index'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'index'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'parent'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'sibling'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'rowCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'rowCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'columnCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hasChildren'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'hasChildren'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'data'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'data'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'setData'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setData'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'headerData'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'headerData'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::false_type>,
        // method 'insertRows'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'insertRows'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertColumns'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'insertColumns'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeRows'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'removeRows'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeColumns'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'removeColumns'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'moveRows'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'moveColumns'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertRow'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'insertRow'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insertColumn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'insertColumn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeRow'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'removeRow'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeColumn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'removeColumn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'moveRow'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'moveColumn'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fetchMore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'canFetchMore'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'flags'
        QtPrivate::TypeAndForceComplete<Qt::ItemFlags, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'sort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>,
        // method 'sort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'match'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::MatchFlags, std::false_type>,
        // method 'match'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'match'
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void QAbstractItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        auto *_t = static_cast<QAbstractItemModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 1: _t->dataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 2: _t->headerDataChanged((*reinterpret_cast< std::add_pointer_t<Qt::Orientation>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->layoutChanged((*reinterpret_cast< std::add_pointer_t<QList<QPersistentModelIndex>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemModel::LayoutChangeHint>>(_a[2]))); break;
        case 4: _t->layoutChanged((*reinterpret_cast< std::add_pointer_t<QList<QPersistentModelIndex>>>(_a[1]))); break;
        case 5: _t->layoutChanged(); break;
        case 6: _t->layoutAboutToBeChanged((*reinterpret_cast< std::add_pointer_t<QList<QPersistentModelIndex>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractItemModel::LayoutChangeHint>>(_a[2]))); break;
        case 7: _t->layoutAboutToBeChanged((*reinterpret_cast< std::add_pointer_t<QList<QPersistentModelIndex>>>(_a[1]))); break;
        case 8: _t->layoutAboutToBeChanged(); break;
        case 9: _t->rowsAboutToBeInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 10: _t->rowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 11: _t->rowsAboutToBeRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 12: _t->rowsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 13: _t->columnsAboutToBeInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 14: _t->columnsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 15: _t->columnsAboutToBeRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 16: _t->columnsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])), QPrivateSignal()); break;
        case 17: _t->modelAboutToBeReset(QPrivateSignal()); break;
        case 18: _t->modelReset(QPrivateSignal()); break;
        case 19: _t->rowsAboutToBeMoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])), QPrivateSignal()); break;
        case 20: _t->rowsMoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])), QPrivateSignal()); break;
        case 21: _t->columnsAboutToBeMoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])), QPrivateSignal()); break;
        case 22: _t->columnsMoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])), QPrivateSignal()); break;
        case 23: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->revert(); break;
        case 25: _t->resetInternalData(); break;
        case 26: { bool _r = _t->hasIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->hasIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { QModelIndex _r = _t->index((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 29: { QModelIndex _r = _t->index((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 30: { QModelIndex _r = _t->parent((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 31: { QModelIndex _r = _t->sibling((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 32: { int _r = _t->rowCount((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 33: { int _r = _t->rowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: { int _r = _t->columnCount((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->columnCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->hasChildren((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->hasChildren();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { QVariant _r = _t->data((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 39: { QVariant _r = _t->data((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->setData((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->setData((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { QVariant _r = _t->headerData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::Orientation>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 43: { QVariant _r = _t->headerData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::Orientation>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->insertRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->insertRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->insertColumns((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->insertColumns((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->removeRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { bool _r = _t->removeRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 50: { bool _r = _t->removeColumns((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: { bool _r = _t->removeColumns((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->moveRows((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: { bool _r = _t->moveColumns((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: { bool _r = _t->insertRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: { bool _r = _t->insertRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: { bool _r = _t->insertColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 57: { bool _r = _t->insertColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: { bool _r = _t->removeRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: { bool _r = _t->removeRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: { bool _r = _t->removeColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 61: { bool _r = _t->removeColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 62: { bool _r = _t->moveRow((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: { bool _r = _t->moveColumn((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->fetchMore((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 65: { bool _r = _t->canFetchMore((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 66: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->sort((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 68: _t->sort((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 69: { QModelIndexList _r = _t->match((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<Qt::MatchFlags>>(_a[5])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 70: { QModelIndexList _r = _t->match((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 71: { QModelIndexList _r = _t->match((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , const QModelIndex & , const QList<int> & );
            if (_t _q_method = &QAbstractItemModel::dataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(Qt::Orientation , int , int );
            if (_t _q_method = &QAbstractItemModel::headerDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QList<QPersistentModelIndex> & , QAbstractItemModel::LayoutChangeHint );
            if (_t _q_method = &QAbstractItemModel::layoutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QList<QPersistentModelIndex> & , QAbstractItemModel::LayoutChangeHint );
            if (_t _q_method = &QAbstractItemModel::layoutAboutToBeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::rowsAboutToBeInserted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::rowsInserted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::rowsAboutToBeRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::rowsRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::columnsAboutToBeInserted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::columnsInserted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::columnsAboutToBeRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::columnsRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::modelAboutToBeReset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::modelReset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::rowsAboutToBeMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::rowsMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::columnsAboutToBeMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QAbstractItemModel::*)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (_t _q_method = &QAbstractItemModel::columnsMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
    }
}

const QMetaObject *QAbstractItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQAbstractItemModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    }
    return _id;
}

// SIGNAL 0
void QAbstractItemModel::dataChanged(const QModelIndex & _t1, const QModelIndex & _t2, const QList<int> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QAbstractItemModel::headerDataChanged(Qt::Orientation _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractItemModel::layoutChanged(const QList<QPersistentModelIndex> & _t1, QAbstractItemModel::LayoutChangeHint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 6
void QAbstractItemModel::layoutAboutToBeChanged(const QList<QPersistentModelIndex> & _t1, QAbstractItemModel::LayoutChangeHint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 9
void QAbstractItemModel::rowsAboutToBeInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QAbstractItemModel::rowsInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QAbstractItemModel::rowsAboutToBeRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QAbstractItemModel::rowsRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QAbstractItemModel::columnsAboutToBeInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QAbstractItemModel::columnsInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QAbstractItemModel::columnsAboutToBeRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QAbstractItemModel::columnsRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QAbstractItemModel::modelAboutToBeReset(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QAbstractItemModel::modelReset(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QAbstractItemModel::rowsAboutToBeMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QAbstractItemModel::rowsMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QAbstractItemModel::columnsAboutToBeMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QAbstractItemModel::columnsMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS = QtMocHelpers::stringData(
    "QAbstractTableModel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS_t qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19)   // "QAbstractTableModel"
    },
    "QAbstractTableModel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQAbstractTableModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQAbstractTableModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractTableModel, std::true_type>
    >,
    nullptr
} };

void QAbstractTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QAbstractTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQAbstractTableModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QAbstractTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQAbstractListModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQAbstractListModelENDCLASS = QtMocHelpers::stringData(
    "QAbstractListModel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQAbstractListModelENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQAbstractListModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQAbstractListModelENDCLASS_t qt_meta_stringdata_CLASSQAbstractListModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18)   // "QAbstractListModel"
    },
    "QAbstractListModel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQAbstractListModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSQAbstractListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQAbstractListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQAbstractListModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractListModel, std::true_type>
    >,
    nullptr
} };

void QAbstractListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QAbstractListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQAbstractListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QAbstractListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
