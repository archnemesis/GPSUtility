/****************************************************************************
** Meta object code from reading C++ file 'gpsutilityapplication.h'
**
** Created: Thu Sep 30 10:56:11 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpsutilityapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpsutilityapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GpsUtilityApplication[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x0a,
      67,   60,   22,   22, 0x0a,
      90,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GpsUtilityApplication[] = {
    "GpsUtilityApplication\0\0line\0"
    "serialLineReceived(const char*)\0device\0"
    "serialConnect(QString)\0serialDisconnect()\0"
};

const QMetaObject GpsUtilityApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_GpsUtilityApplication,
      qt_meta_data_GpsUtilityApplication, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GpsUtilityApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GpsUtilityApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GpsUtilityApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GpsUtilityApplication))
        return static_cast<void*>(const_cast< GpsUtilityApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int GpsUtilityApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: serialLineReceived((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: serialConnect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: serialDisconnect(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
