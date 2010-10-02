#ifndef SIGNALMETER_H
#define SIGNALMETER_H

#include <QDockWidget>

namespace Ui {
    class SignalMeter;
}

class SignalMeter : public QDockWidget {
    Q_OBJECT
public:
    SignalMeter(QWidget *parent = 0);
    ~SignalMeter();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::SignalMeter *ui;
};

#endif // SIGNALMETER_H
