#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "qseriallinereader.h"

QSerialLineReader::QSerialLineReader()
{

}

QSerialLineReader::QSerialLineReader(const char *port)
{
    setPort(port);
}

void QSerialLineReader::stop()
{
    keepRunning = false;
}

void QSerialLineReader::setPort(const QString port)
{
    strcpy(serialPort, port.toLatin1().data());
}

void QSerialLineReader::run()
{
    char buff[255], *data;
    int b = 0;

    fd = open(serialPort, O_RDONLY | O_NOCTTY | O_NDELAY);
    if (fd < 0) {
        qCritical("Could not open serial port!");
        return;
    }

    emit connected();

    tcgetattr(fd, &oldtio);
    bzero(&newtio, sizeof(newtio));

    newtio.c_cflag = B4800 | CS8 | CLOCAL | CREAD;
    newtio.c_iflag = IGNPAR | ICRNL;
    newtio.c_oflag = 0;
    newtio.c_lflag = ICANON;
    newtio.c_cc[VINTR]    = 0;     /* Ctrl-c */
    newtio.c_cc[VQUIT]    = 0;     /* Ctrl-\ */
    newtio.c_cc[VERASE]   = 0;     /* del */
    newtio.c_cc[VKILL]    = 0;     /* @ */
    newtio.c_cc[VEOF]     = 4;     /* Ctrl-d */
    newtio.c_cc[VTIME]    = 0;     /* inter-character timer unused */
    newtio.c_cc[VMIN]     = 1;     /* blocking read until 1 character arrives */
    newtio.c_cc[VSWTC]    = 0;     /* '\0' */
    newtio.c_cc[VSTART]   = 0;     /* Ctrl-q */
    newtio.c_cc[VSTOP]    = 0;     /* Ctrl-s */
    newtio.c_cc[VSUSP]    = 0;     /* Ctrl-z */
    newtio.c_cc[VEOL]     = 0;     /* '\0' */
    newtio.c_cc[VREPRINT] = 0;     /* Ctrl-r */
    newtio.c_cc[VDISCARD] = 0;     /* Ctrl-u */
    newtio.c_cc[VWERASE]  = 0;     /* Ctrl-w */
    newtio.c_cc[VLNEXT]   = 0;     /* Ctrl-v */
    newtio.c_cc[VEOL2]    = 0;     /* '\0' */

    tcflush(fd, TCIFLUSH);
    tcsetattr(fd, TCSANOW, &newtio);

    keepRunning = true;
    while (keepRunning) {
        b = read(fd, buff, 255);
        if (b > 1) {
            buff[b] = 0x00;
            data = (char *)malloc(b+1);
            strcpy(data, buff);
            emit lineReceived(data);
        }
    }

    tcsetattr(fd, TCSANOW, &oldtio);
    close(fd);

    emit disconnected();
}

