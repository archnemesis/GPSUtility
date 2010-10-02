#ifndef CONNECTIONDIALOG_H
#define CONNECTIONDIALOG_H

#include <QDialog>

namespace Ui {
    class ConnectionDialog;
}

class ConnectionDialog : public QDialog {
    Q_OBJECT
public:
    ConnectionDialog(QWidget *parent = 0);
    ~ConnectionDialog();
    bool accepted;
    QString getSerialPort() const;
protected:
    void changeEvent(QEvent *e);

private:
    Ui::ConnectionDialog *m_ui;
    QString *serialPort;

private slots:
	void on_chkLoggingEnabled_stateChanged(int );
 void on_btnChooseLogFile_clicked();
 void on_buttonBox_accepted();
};

#endif // CONNECTIONDIALOG_H
