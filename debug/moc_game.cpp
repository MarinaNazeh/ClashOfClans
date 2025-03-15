/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../game.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSGameENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGameENDCLASS = QtMocHelpers::stringData(
    "Game",
    "updateMoney",
    "",
    "newMoney",
    "updateimagehealth",
    "type",
    "image",
    "health2",
    "handleStartButton",
    "handleSoundSettingsButton",
    "handlePauseButton",
    "handleQuitButton",
    "handleHelpButton",
    "formTroops",
    "moveTroops",
    "updateTimer",
    "showShopWindow",
    "showPauseMenu",
    "spawnBoosters",
    "removeMarkedItems"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[5];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[5];
    char stringdata6[6];
    char stringdata7[8];
    char stringdata8[18];
    char stringdata9[26];
    char stringdata10[18];
    char stringdata11[17];
    char stringdata12[17];
    char stringdata13[11];
    char stringdata14[11];
    char stringdata15[12];
    char stringdata16[15];
    char stringdata17[14];
    char stringdata18[14];
    char stringdata19[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameENDCLASS_t qt_meta_stringdata_CLASSGameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Game"
        QT_MOC_LITERAL(5, 11),  // "updateMoney"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 8),  // "newMoney"
        QT_MOC_LITERAL(27, 17),  // "updateimagehealth"
        QT_MOC_LITERAL(45, 4),  // "type"
        QT_MOC_LITERAL(50, 5),  // "image"
        QT_MOC_LITERAL(56, 7),  // "health2"
        QT_MOC_LITERAL(64, 17),  // "handleStartButton"
        QT_MOC_LITERAL(82, 25),  // "handleSoundSettingsButton"
        QT_MOC_LITERAL(108, 17),  // "handlePauseButton"
        QT_MOC_LITERAL(126, 16),  // "handleQuitButton"
        QT_MOC_LITERAL(143, 16),  // "handleHelpButton"
        QT_MOC_LITERAL(160, 10),  // "formTroops"
        QT_MOC_LITERAL(171, 10),  // "moveTroops"
        QT_MOC_LITERAL(182, 11),  // "updateTimer"
        QT_MOC_LITERAL(194, 14),  // "showShopWindow"
        QT_MOC_LITERAL(209, 13),  // "showPauseMenu"
        QT_MOC_LITERAL(223, 13),  // "spawnBoosters"
        QT_MOC_LITERAL(237, 17)   // "removeMarkedItems"
    },
    "Game",
    "updateMoney",
    "",
    "newMoney",
    "updateimagehealth",
    "type",
    "image",
    "health2",
    "handleStartButton",
    "handleSoundSettingsButton",
    "handlePauseButton",
    "handleQuitButton",
    "handleHelpButton",
    "formTroops",
    "moveTroops",
    "updateTimer",
    "showShopWindow",
    "showPauseMenu",
    "spawnBoosters",
    "removeMarkedItems"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x0a,    1 /* Public */,
       4,    3,  101,    2, 0x0a,    3 /* Public */,
       8,    0,  108,    2, 0x08,    7 /* Private */,
       9,    0,  109,    2, 0x08,    8 /* Private */,
      10,    0,  110,    2, 0x08,    9 /* Private */,
      11,    0,  111,    2, 0x08,   10 /* Private */,
      12,    0,  112,    2, 0x08,   11 /* Private */,
      13,    0,  113,    2, 0x08,   12 /* Private */,
      14,    0,  114,    2, 0x08,   13 /* Private */,
      15,    0,  115,    2, 0x08,   14 /* Private */,
      16,    0,  116,    2, 0x08,   15 /* Private */,
      17,    0,  117,    2, 0x08,   16 /* Private */,
      18,    0,  118,    2, 0x08,   17 /* Private */,
      19,    0,  119,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QPixmap, QMetaType::Int,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Game, std::true_type>,
        // method 'updateMoney'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateimagehealth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleStartButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSoundSettingsButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handlePauseButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleQuitButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleHelpButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'formTroops'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveTroops'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showShopWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPauseMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'spawnBoosters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeMarkedItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateMoney((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->updateimagehealth((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->handleStartButton(); break;
        case 3: _t->handleSoundSettingsButton(); break;
        case 4: _t->handlePauseButton(); break;
        case 5: _t->handleQuitButton(); break;
        case 6: _t->handleHelpButton(); break;
        case 7: _t->formTroops(); break;
        case 8: _t->moveTroops(); break;
        case 9: _t->updateTimer(); break;
        case 10: _t->showShopWindow(); break;
        case 11: _t->showPauseMenu(); break;
        case 12: _t->spawnBoosters(); break;
        case 13: _t->removeMarkedItems(); break;
        default: ;
        }
    }
}

const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
