/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Sep 30 10:56:09 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x05,
      45,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     191,   11,   11,   11, 0x08,
     226,  217,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     265,   11,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0device\0openSerialDevice(QString)\0"
    "closeSerialDevice()\0on_actionShare_triggered()\0"
    "on_actionDisconnect_triggered()\0"
    "on_actionConnect_triggered()\0"
    "on_actionOpen_Google_Maps_triggered()\0"
    "on_actionQuit_triggered()\0finished\0"
    "mapLoadFinished(bool)\0mapLoadStarted()\0"
    "gpsConnected()\0gpsDisconnected()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openSerialDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: closeSerialDevice(); break;
        case 2: on_actionShare_triggered(); break;
        case 3: on_actionDisconnect_triggered(); break;
        case 4: on_actionConnect_triggered(); break;
        case 5: on_actionOpen_Google_Maps_triggered(); break;
        case 6: on_actionQuit_triggered(); break;
        case 7: mapLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: mapLoadStarted(); break;
        case 9: gpsConnected(); break;
        case 10: gpsDisconnected(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::openSerialDevice(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::closeSerialDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
