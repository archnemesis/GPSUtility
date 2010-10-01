/****************************************************************************
** Meta object code from reading C++ file 'mapdialog.h'
**
** Created: Thu Sep 30 09:34:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mapdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      25,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   10,   10,   10, 0x08,
      74,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapDialog[] = {
    "MapDialog\0\0loadStarted()\0loadFinished(bool)\0"
    "on_webView_loadFinished(bool)\0"
    "on_webView_loadStarted()\0"
};

const QMetaObject MapDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MapDialog,
      qt_meta_data_MapDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapDialog))
        return static_cast<void*>(const_cast< MapDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MapDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: loadStarted(); break;
        case 1: loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_webView_loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_webView_loadStarted(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MapDialog::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MapDialog::loadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
