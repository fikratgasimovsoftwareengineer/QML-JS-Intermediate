/****************************************************************************
** Meta object code from reading C++ file 'systems.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../testlaUI/systems.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSsystemsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSsystemsENDCLASS = QtMocHelpers::stringData(
    "systems",
    "carLockedChanged",
    "",
    "carLocked",
    "outDoorTempChanged",
    "outDoorTemp",
    "userNameChanged",
    "userName",
    "currentTimeChanged",
    "setCarLocked",
    "setOutDoorTemp",
    "setUserName",
    "QString&",
    "setCurrentTime",
    "newCurrentTime",
    "currentTime"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSsystemsENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[8];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[19];
    char stringdata5[12];
    char stringdata6[16];
    char stringdata7[9];
    char stringdata8[19];
    char stringdata9[13];
    char stringdata10[15];
    char stringdata11[12];
    char stringdata12[9];
    char stringdata13[15];
    char stringdata14[15];
    char stringdata15[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSsystemsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSsystemsENDCLASS_t qt_meta_stringdata_CLASSsystemsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "systems"
        QT_MOC_LITERAL(8, 16),  // "carLockedChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 9),  // "carLocked"
        QT_MOC_LITERAL(36, 18),  // "outDoorTempChanged"
        QT_MOC_LITERAL(55, 11),  // "outDoorTemp"
        QT_MOC_LITERAL(67, 15),  // "userNameChanged"
        QT_MOC_LITERAL(83, 8),  // "userName"
        QT_MOC_LITERAL(92, 18),  // "currentTimeChanged"
        QT_MOC_LITERAL(111, 12),  // "setCarLocked"
        QT_MOC_LITERAL(124, 14),  // "setOutDoorTemp"
        QT_MOC_LITERAL(139, 11),  // "setUserName"
        QT_MOC_LITERAL(151, 8),  // "QString&"
        QT_MOC_LITERAL(160, 14),  // "setCurrentTime"
        QT_MOC_LITERAL(175, 14),  // "newCurrentTime"
        QT_MOC_LITERAL(190, 11)   // "currentTime"
    },
    "systems",
    "carLockedChanged",
    "",
    "carLocked",
    "outDoorTempChanged",
    "outDoorTemp",
    "userNameChanged",
    "userName",
    "currentTimeChanged",
    "setCarLocked",
    "setOutDoorTemp",
    "setUserName",
    "QString&",
    "setCurrentTime",
    "newCurrentTime",
    "currentTime"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSsystemsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    5 /* Public */,
       4,    1,   65,    2, 0x06,    7 /* Public */,
       6,    1,   68,    2, 0x06,    9 /* Public */,
       8,    0,   71,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   72,    2, 0x0a,   12 /* Public */,
      10,    1,   75,    2, 0x0a,   14 /* Public */,
      11,    1,   78,    2, 0x0a,   16 /* Public */,
      13,    1,   81,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 12,    7,
    QMetaType::Void, QMetaType::QString,   14,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
       5, QMetaType::Int, 0x00015103, uint(1), 0,
       7, QMetaType::QString, 0x00015103, uint(2), 0,
      15, QMetaType::QString, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject systems::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSsystemsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSsystemsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSsystemsENDCLASS_t,
        // property 'carLocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'outDoorTemp'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'userName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<systems, std::true_type>,
        // method 'carLockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'outDoorTempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'userNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'currentTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCarLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setOutDoorTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setUserName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'setCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void systems::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<systems *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->carLockedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->outDoorTempChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->userNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->currentTimeChanged(); break;
        case 4: _t->setCarLocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setOutDoorTemp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setUserName((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 7: _t->setCurrentTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (systems::*)(bool );
            if (_t _q_method = &systems::carLockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (systems::*)(int );
            if (_t _q_method = &systems::outDoorTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (systems::*)(QString );
            if (_t _q_method = &systems::userNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (systems::*)();
            if (_t _q_method = &systems::currentTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<systems *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->carLocked(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->outDoorTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<systems *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOutDoorTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentTime(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *systems::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *systems::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSsystemsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int systems::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void systems::carLockedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void systems::outDoorTempChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void systems::userNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void systems::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
