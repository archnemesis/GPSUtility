#ifndef LOCATIONWidget_H
#define LOCATIONWidget_H

#include <QDockWidget>

namespace Ui {
    class LocationWidget;
}

class LocationWidget : public QDockWidget {
    Q_OBJECT
public:
    LocationWidget(QWidget *parent = 0);
    ~LocationWidget();
    void setLatitude(const QString lat);
    void setLongitude(const QString lon);
    void setAltitude(const QString alt);
    void setHeading(const QString hdg);
    void setTime(const QString time);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::LocationWidget *ui;
};

#endif // LOCATIONWidget_H
