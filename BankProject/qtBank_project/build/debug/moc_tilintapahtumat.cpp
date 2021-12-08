/****************************************************************************
** Meta object code from reading C++ file 'tilintapahtumat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tilintapahtumat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilintapahtumat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tilintapahtumat_t {
    QByteArrayData data[8];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tilintapahtumat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tilintapahtumat_t qt_meta_stringdata_Tilintapahtumat = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Tilintapahtumat"
QT_MOC_LITERAL(1, 16, 12), // "secondWindow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 30), // "on_pushButton_Takaisin_clicked"
QT_MOC_LITERAL(4, 61, 39), // "on_pushButton_HaeTilitapahtum..."
QT_MOC_LITERAL(5, 101, 20), // "getTilitapahtumaSlot"
QT_MOC_LITERAL(6, 122, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 137, 5) // "reply"

    },
    "Tilintapahtumat\0secondWindow\0\0"
    "on_pushButton_Takaisin_clicked\0"
    "on_pushButton_HaeTilitapahtumat_clicked\0"
    "getTilitapahtumaSlot\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tilintapahtumat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void Tilintapahtumat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tilintapahtumat *_t = static_cast<Tilintapahtumat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->secondWindow(); break;
        case 1: _t->on_pushButton_Takaisin_clicked(); break;
        case 2: _t->on_pushButton_HaeTilitapahtumat_clicked(); break;
        case 3: _t->getTilitapahtumaSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Tilintapahtumat::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tilintapahtumat::secondWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Tilintapahtumat::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tilintapahtumat.data,
      qt_meta_data_Tilintapahtumat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tilintapahtumat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tilintapahtumat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tilintapahtumat.stringdata0))
        return static_cast<void*>(const_cast< Tilintapahtumat*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tilintapahtumat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tilintapahtumat::secondWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
