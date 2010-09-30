#ifndef QSERIALLINEREADER_H
#define QSERIALLINEREADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <QObject>
#include <QThread>

class QSerialLineReader : public QThread
{
	Q_OBJECT
public:
	QSerialLineReader();
	QSerialLineReader(const char *port);
	void run();
	void stop();
    void setPort(const QString port);
signals:
	void lineReceived(char *data);
    void connected();
    void disconnected();
protected:
	struct termios oldtio, newtio;
	int fd;
	char serialPort[32];
	bool keepRunning;
};

#endif // QSERIALLINEREADER_H
