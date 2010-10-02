#ifndef POSITIONDIALOG_H
#define POSITIONDIALOG_H

#include <QDialog>

namespace Ui {
    class PositionDialog;
}

class PositionDialog : public QDialog {
    Q_OBJECT
public:
    PositionDialog(QWidget *parent = 0);
    ~PositionDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PositionDialog *ui;
};

#endif // POSITIONDIALOG_H
