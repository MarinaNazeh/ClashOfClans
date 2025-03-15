/****************************************************************************
** Meta object code from reading C++ file 'start.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../start.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'start.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStartENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStartENDCLASS = QtMocHelpers::stringData(
    "Start",
    "on_start_clicked",
    "",
    "on_sound_clicked",
    "on_howtoplay_clicked",
    "on_Quit_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSStartENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[6];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[21];
    char stringdata5[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSStartENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSStartENDCLASS_t qt_meta_stringdata_CLASSStartENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Start"
        QT_MOC_LITERAL(6, 16),  // "on_start_clicked"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 16),  // "on_sound_clicked"
        QT_MOC_LITERAL(41, 20),  // "on_howtoplay_clicked"
        QT_MOC_LITERAL(62, 15)   // "on_Quit_clicked"
    },
    "Start",
    "on_start_clicked",
    "",
    "on_sound_clicked",
    "on_howtoplay_clicked",
    "on_Quit_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStartENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Start::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSStartENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStartENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStartENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Start, std::true_type>,
        // method 'on_start_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sound_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_howtoplay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Quit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Start::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Start *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_start_clicked(); break;
        case 1: _t->on_sound_clicked(); break;
        case 2: _t->on_howtoplay_clicked(); break;
        case 3: _t->on_Quit_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Start::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Start::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStartENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Start::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
