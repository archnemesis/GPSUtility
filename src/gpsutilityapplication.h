#ifndef GPSUTILITYAPPLICATION_H
#define GPSUTILITYAPPLICATION_H

#include <QApplication>
#include <QSettings>

#include "qseriallinereader.h"
#include "mainwindow.h"
#include "connectiondialog.h"

class NMEAParser;

class GpsUtilityApplication : public QApplication
{
Q_OBJECT
public:
    explicit GpsUtilityApplication(int &argc, char **argv);

private:
    MainWindow *mainWindow;
    ConnectionDialog *connDlg;
    QSerialLineReader *serialReader;
    QSettings *settings;
    QString serialPort;
    NMEAParser *nmeaParser;

    void appLoaded();
    void updateMainWindow();
    void pushLocationData();
    void logLocationData();

signals:

public slots:
    void serialLineReceived(const char *line);
    void serialConnect(const QString device);
    void serialDisconnect();

};

#endif // GPSUTILITYAPPLICATION_H
