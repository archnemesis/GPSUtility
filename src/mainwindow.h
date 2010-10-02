#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

#include "locationwidget.h"
#include "signalmeter.h"
#include "mapdialog.h"
#include "qseriallinereader.h"
#include "nmeaparser.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setLocation(double latitude, double longitude, double altitude, double heading);
    void setStatusBarText(const QString text);
    void setGpsTime(int hours, int minutes, double seconds);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    LocationWidget *locationWidget;
    SignalMeter *signalMeterWidget;
    QSerialLineReader *lineReader;
    MapDialog *mapDialog;
    NMEAParser *parser;
    QLabel *statusLabel;
    QString serialPort;

private slots:
    void on_actionShare_triggered();
    void on_actionDisconnect_triggered();
    void on_actionConnect_triggered();
    void on_actionOpen_Google_Maps_triggered();
    void on_actionQuit_triggered();
    void mapLoadFinished(bool finished);
    void mapLoadStarted();
    void gpsConnected();
    void gpsDisconnected();

signals:
    void openSerialDevice(const QString device);
    void closeSerialDevice();
};

#endif // MAINWINDOW_H
