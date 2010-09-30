#include <math.h>
#include "gpsutilityapplication.h"

GpsUtilityApplication::GpsUtilityApplication(int &argc, char **argv) :
    QApplication(argc, argv)
{
    mainWindow = new MainWindow();
    settings = new QSettings("Arch Nemesis", "GPSUtility");
    connDlg = new ConnectionDialog();
    nmeaParser = new NMEAParser();
}

/**
 * Slot called when a line is received from the serial port. The idea is
 * to provide the line to any service that needs it, be it the main window,
 * a server pool, or the logger.
 *
 * @param line
 * @return void
 */
void GpsUtilityApplication::serialLineReceived(const char *line)
{
    nmeaParser->parse(line);

    if (settings->contains("logging/enabled")) {
        int loggingEnabled = settings->value("logging/enabled", 0).toInt();
        if (loggingEnabled) {
            logLocationData();
        }
    }

    if (settings->contains("server/enabled")) {
        int serverEnabled = settings->value("server/enabled", 0).toInt();
        if (serverEnabled) {
            pushLocationData();
        }
    }

    updateMainWindow();
}

/**
 * Updates the main window UI.
 */
void GpsUtilityApplication::updateMainWindow()
{
    //qDebug("Got serial line: %s", data);

    int hdg = 0, fixtype = -1, status = -1;
    double deg = 0;
    double min = 0;
    double sec = 0;
    double lat = 0, lon = 0, altitude;
    static time_t lastUpdate = 0;
    static double last_lat = 0;
    static double last_lon = 0;

    time_t currTime = 0;

    if (nmeaParser->latitude() != 0 && nmeaParser->longitude() != 0) {

        //locationWidget->setTime(QString("%1:%2:%3")
        //                        .arg(nmeaParser->utcHours(), 2, 10, QChar('0'))
        //                        .arg(nmeaParser->utcMinutes(), 2, 10, QChar('0'))
        //                        .arg(nmeaParser->utcSeconds(), 2, 'g', -1, QChar('0')));
        //ui->lneDop->setText(QString("%1").arg(nmeaParser->hdop()));

        //
        // determine speed, heading
        //
        double tcl = 0;
        if (last_lat != 0 && last_lon != 0) {
            double lat1 = last_lat;
            double lon1 = last_lon;
            double lat2 = nmeaParser->latitude();
            double lon2 = nmeaParser->longitude();
            double dlat = lat2 - lat1;
            double dlon = lon2 - lon1;
            double y = sin(dlon) * cos(lat2);
            double x = cos(lat1) * sin(lat2) - sin(lat1) * cos(lat2) * cos(dlon);

            if (y > 0) {
                if (x > 0) tcl = atan(y/x);
                else if (x < 0) tcl = 180 - atan(-y/x);
                else if (x == 0) tcl = 90;
            }
            else if (y < 0) {
                if (x > 0) tcl = -(atan(-y/x));
                else if (x < 0) tcl = atan(y/x) - 180;
                else if (x == 0) tcl = 270;
            }
            else if (y == 0) {
                if (x > 0) tcl = 0;
                else if (x < 0) tcl = 180;
                else if (x == 0) tcl = 0;
            }
        }

        last_lat = nmeaParser->latitude();
        last_lon = nmeaParser->longitude();

        mainWindow->setLocation(nmeaParser->latitude(), nmeaParser->longitude(), nmeaParser->altitude(), tcl);
    }
}

void GpsUtilityApplication::pushLocationData()
{

}

void GpsUtilityApplication::logLocationData()
{

}

void GpsUtilityApplication::serialConnect(const QString port)
{
    mainWindow->setStatusBarText(QString("Connecting to GPS device on serial port %1...").arg(port));

    serialReader = new QSerialLineReader();
    serialReader->setPort(port);

    connect(serialReader, SIGNAL(lineReceived(char*)), this, SLOT(serialLineReceived(char*)), Qt::QueuedConnection);
    connect(serialReader, SIGNAL(disconnected()), this, SLOT(gpsDisconnected()), Qt::QueuedConnection);
    connect(serialReader, SIGNAL(connected()), this, SLOT(gpsConnected()), Qt::QueuedConnection);

    serialReader->start();
}
