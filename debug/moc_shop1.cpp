/****************************************************************************
** Meta object code from reading C++ file 'shop1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shop1.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shop1.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSShop1ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSShop1ENDCLASS = QtMocHelpers::stringData(
    "Shop1",
    "moneyChanged",
    "",
    "newMoney",
    "imagehealthChanges",
    "type",
    "newImage",
    "newHealth",
    "on_townHall_clicked",
    "onUpgradeApplied",
    "on_fence_clicked",
    "on_cannon_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSShop1ENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[6];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[19];
    char stringdata5[5];
    char stringdata6[9];
    char stringdata7[10];
    char stringdata8[20];
    char stringdata9[17];
    char stringdata10[17];
    char stringdata11[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSShop1ENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSShop1ENDCLASS_t qt_meta_stringdata_CLASSShop1ENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Shop1"
        QT_MOC_LITERAL(6, 12),  // "moneyChanged"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 8),  // "newMoney"
        QT_MOC_LITERAL(29, 18),  // "imagehealthChanges"
        QT_MOC_LITERAL(48, 4),  // "type"
        QT_MOC_LITERAL(53, 8),  // "newImage"
        QT_MOC_LITERAL(62, 9),  // "newHealth"
        QT_MOC_LITERAL(72, 19),  // "on_townHall_clicked"
        QT_MOC_LITERAL(92, 16),  // "onUpgradeApplied"
        QT_MOC_LITERAL(109, 16),  // "on_fence_clicked"
        QT_MOC_LITERAL(126, 17)   // "on_cannon_clicked"
    },
    "Shop1",
    "moneyChanged",
    "",
    "newMoney",
    "imagehealthChanges",
    "type",
    "newImage",
    "newHealth",
    "on_townHall_clicked",
    "onUpgradeApplied",
    "on_fence_clicked",
    "on_cannon_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSShop1ENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    3,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   60,    2, 0x08,    7 /* Private */,
       9,    2,   61,    2, 0x08,    8 /* Private */,
      10,    0,   66,    2, 0x08,   11 /* Private */,
      11,    0,   67,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QPixmap, QMetaType::Int,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Shop1::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSShop1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSShop1ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSShop1ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Shop1, std::true_type>,
        // method 'moneyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'imagehealthChanges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_townHall_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpgradeApplied'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_fence_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cannon_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Shop1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Shop1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moneyChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->imagehealthChanges((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->on_townHall_clicked(); break;
        case 3: _t->onUpgradeApplied((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->on_fence_clicked(); break;
        case 5: _t->on_cannon_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Shop1::*)(int );
            if (_t _q_method = &Shop1::moneyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Shop1::*)(QString , QPixmap , int );
            if (_t _q_method = &Shop1::imagehealthChanges; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Shop1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Shop1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSShop1ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Shop1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Shop1::moneyChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Shop1::imagehealthChanges(QString _t1, QPixmap _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
