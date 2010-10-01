/****************************************************************************
** Meta object code from reading C++ file 'qseriallinereader.h'
**
** Created: Thu Sep 30 10:48:01 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qseriallinereader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qseriallinereader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSerialLineReader[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x05,
      50,   18,   18,   18, 0x05,
      62,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QSerialLineReader[] = {
    "QSerialLineReader\0\0data\0"
    "lineReceived(const char*)\0connected()\0"
    "disconnected()\0"
};

const QMetaObject QSerialLineReader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QSerialLineReader,
      qt_meta_data_QSerialLineReader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSerialLineReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSerialLineReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSerialLineReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSerialLineReader))
        return static_cast<void*>(const_cast< QSerialLineReader*>(this));
    return QThread::qt_metacast(_clname);
}

int QSerialLineReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lineReceived((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: connected(); break;
        case 2: disconnected(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QSerialLineReader::lineReceived(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSerialLineReader::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QSerialLineReader::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
