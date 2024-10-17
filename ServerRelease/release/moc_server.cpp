/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ChatServer/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[12];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Server"
QT_MOC_LITERAL(1, 7, 8), // "serverOn"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 18), // "incomingConnection"
QT_MOC_LITERAL(4, 36, 7), // "qintptr"
QT_MOC_LITERAL(5, 44, 16), // "socketDescriptor"
QT_MOC_LITERAL(6, 61, 10), // "sreadyRead"
QT_MOC_LITERAL(7, 72, 12), // "registration"
QT_MOC_LITERAL(8, 85, 11), // "QTcpSocket*"
QT_MOC_LITERAL(9, 97, 6), // "socket"
QT_MOC_LITERAL(10, 104, 12), // "sendToClient"
QT_MOC_LITERAL(11, 117, 7) // "socDisc"

    },
    "Server\0serverOn\0\0incomingConnection\0"
    "qintptr\0socketDescriptor\0sreadyRead\0"
    "registration\0QTcpSocket*\0socket\0"
    "sendToClient\0socDisc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
      10,    0,   52,    2, 0x0a /* Public */,
      11,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serverOn(); break;
        case 1: _t->incomingConnection((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 2: _t->sreadyRead(); break;
        case 3: _t->registration((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 4: _t->sendToClient(); break;
        case 5: _t->socDisc(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Server::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_Server.data,
    qt_meta_data_Server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
