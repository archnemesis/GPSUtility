#ifndef LOCATIONSERVERDIALOG_H
#define LOCATIONSERVERDIALOG_H

#include <QDialog>

namespace Ui {
    class LocationServerDialog;
}

class LocationServerDialog : public QDialog {
    Q_OBJECT
public:
    LocationServerDialog(QWidget *parent = 0);
    ~LocationServerDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::LocationServerDialog *ui;
};

#endif // LOCATIONSERVERDIALOG_H
