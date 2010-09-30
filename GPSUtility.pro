# -------------------------------------------------
# Project created by QtCreator 2010-09-25T17:13:19
# -------------------------------------------------
QT += network \
    sql \
    webkit
TARGET = GPSUtility
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    locationwidget.cpp \
    mapdialog.cpp \
    nmeaparser.cpp \
    nmeasatellitelist.cpp \
    qseriallinereader.cpp \
    connectiondialog.cpp \
    signalmeter.cpp \
    locationserverdialog.cpp \
    gpsutilityapplication.cpp
HEADERS += mainwindow.h \
    locationwidget.h \
    mapdialog.h \
    nmeaparser.h \
    nmeasatellitelist.h \
    qseriallinereader.h \
    connectiondialog.h \
    signalmeter.h \
    locationserverdialog.h \
    gpsutilityapplication.h
FORMS += mainwindow.ui \
    locationwidget.ui \
    mapdialog.ui \
    connectiondialog.ui \
    signalmeter.ui \
    locationserverdialog.ui
RESOURCES += http.qrc
OTHER_FILES += resources/html/gmapjs.html
