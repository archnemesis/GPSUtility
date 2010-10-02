#ifndef MAPDIALOG_H
#define MAPDIALOG_H

#include <QDialog>

namespace Ui {
    class MapDialog;
}

class MapDialog : public QDialog {
    Q_OBJECT
public:
    MapDialog(QWidget *parent = 0);
    ~MapDialog();
    void setMapUrl(const QString mapUrl);
    void setMapLocation(double lat, double lon);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MapDialog *ui;

private slots:
    void on_webView_loadFinished(bool );
    void on_webView_loadStarted();

signals:
    void loadStarted();
    void loadFinished(bool);
};

#endif // MAPDIALOG_H
