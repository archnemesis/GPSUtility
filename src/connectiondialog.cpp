#include <QString>
#include <QStringList>
#include <QDir>
#include <QFileInfoList>
#include <QFileDialog>
#include <QSettings>
#include <QVariant>
#include <QDebug>

#include "connectiondialog.h"
#include "ui_connectiondialog.h"

ConnectionDialog::ConnectionDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::ConnectionDialog)
{
    m_ui->setupUi(this);

    QSettings settings("Arch Nemesis", "GPSUtility");

    if (settings.contains("lastConnection/port")) {
        serialPort = new QString(settings.value("lastConnection/port").toString());
        m_ui->cboSerialPort->lineEdit()->setText(*serialPort);
    }

	accepted = false;

#ifdef Q_OS_UNIX
	QStringList filters;
	QDir devList("/dev");
	filters << "ttyS*" << "ttyUSB*" << "tty.usb*";
	devList.setNameFilters(filters);
	devList.setFilter(QDir::System);
	devList.setSorting(QDir::Name);
	QFileInfoList list = devList.entryInfoList();

	for (int i = 0; i < list.size(); i++) {
		QFileInfo fileInfo = list.at(i);
		m_ui->cboSerialPort->addItem(fileInfo.canonicalFilePath());
	}
#endif

#ifdef Q_OS_WIN32
	for (int i = 1; i <= 10; i++) {
		m_ui->cboSerialPort->addItem(QString("COM%1").arg(i));
	}
#endif
}

ConnectionDialog::~ConnectionDialog()
{
    delete m_ui;
}

void ConnectionDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void ConnectionDialog::on_buttonBox_accepted()
{
    serialPort = new QString(m_ui->cboSerialPort->currentText());
    QSettings settings("Arch Nemesis", "GPSUtility");
    settings.setValue("lastConnection/port", QVariant(serialPort->toLatin1()));
    settings.sync();
}

void ConnectionDialog::on_btnChooseLogFile_clicked()
{
	QString fileName = QFileDialog::getSaveFileName(this, "Save NMEA Output As", "~/nmealog.txt", "(All Files (*.*)");
    m_ui->lneLogFileName->setText(fileName);
}

void ConnectionDialog::on_chkLoggingEnabled_stateChanged(int state)
{
	if (state == Qt::Unchecked) {
		m_ui->lneLogFileName->setEnabled(false);
		m_ui->btnChooseLogFile->setEnabled(false);
	}
	else {
		m_ui->lneLogFileName->setEnabled(true);
		m_ui->btnChooseLogFile->setEnabled(true);
	}
}

QString ConnectionDialog::getSerialPort() const
{
    return m_ui->cboSerialPort->currentText();
}
