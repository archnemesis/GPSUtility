/********************************************************************************
** Form generated from reading UI file 'connectiondialog.ui'
**
** Created: Thu Sep 30 09:27:50 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIALOG_H
#define UI_CONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cboSerialPort;
    QLabel *label_2;
    QComboBox *cboBaud;
    QLabel *label_3;
    QComboBox *cboParity;
    QLabel *label_4;
    QComboBox *cboStopBits;
    QLabel *label_5;
    QComboBox *cboFlowControl;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *chkLoggingEnabled;
    QLineEdit *lneLogFileName;
    QPushButton *btnChooseLogFile;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConnectionDialog)
    {
        if (ConnectionDialog->objectName().isEmpty())
            ConnectionDialog->setObjectName(QString::fromUtf8("ConnectionDialog"));
        ConnectionDialog->resize(455, 325);
        verticalLayout = new QVBoxLayout(ConnectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ConnectionDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cboSerialPort = new QComboBox(groupBox);
        cboSerialPort->setObjectName(QString::fromUtf8("cboSerialPort"));
        cboSerialPort->setEditable(true);

        gridLayout->addWidget(cboSerialPort, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cboBaud = new QComboBox(groupBox);
        cboBaud->setObjectName(QString::fromUtf8("cboBaud"));

        gridLayout->addWidget(cboBaud, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        cboParity = new QComboBox(groupBox);
        cboParity->setObjectName(QString::fromUtf8("cboParity"));

        gridLayout->addWidget(cboParity, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        cboStopBits = new QComboBox(groupBox);
        cboStopBits->setObjectName(QString::fromUtf8("cboStopBits"));

        gridLayout->addWidget(cboStopBits, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        cboFlowControl = new QComboBox(groupBox);
        cboFlowControl->setObjectName(QString::fromUtf8("cboFlowControl"));

        gridLayout->addWidget(cboFlowControl, 4, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ConnectionDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        chkLoggingEnabled = new QCheckBox(groupBox_2);
        chkLoggingEnabled->setObjectName(QString::fromUtf8("chkLoggingEnabled"));

        gridLayout_2->addWidget(chkLoggingEnabled, 0, 0, 1, 1);

        lneLogFileName = new QLineEdit(groupBox_2);
        lneLogFileName->setObjectName(QString::fromUtf8("lneLogFileName"));
        lneLogFileName->setEnabled(false);

        gridLayout_2->addWidget(lneLogFileName, 1, 0, 1, 1);

        btnChooseLogFile = new QPushButton(groupBox_2);
        btnChooseLogFile->setObjectName(QString::fromUtf8("btnChooseLogFile"));
        btnChooseLogFile->setEnabled(false);

        gridLayout_2->addWidget(btnChooseLogFile, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(ConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectionDialog)
    {
        ConnectionDialog->setWindowTitle(QApplication::translate("ConnectionDialog", "Select Serial Device", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ConnectionDialog", "Serial Port", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConnectionDialog", "Port", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConnectionDialog", "Baud", 0, QApplication::UnicodeUTF8));
        cboBaud->clear();
        cboBaud->insertItems(0, QStringList()
         << QApplication::translate("ConnectionDialog", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "115200", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("ConnectionDialog", "Parity", 0, QApplication::UnicodeUTF8));
        cboParity->clear();
        cboParity->insertItems(0, QStringList()
         << QApplication::translate("ConnectionDialog", "No Parity", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "Odd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "Even", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("ConnectionDialog", "Stop Bits", 0, QApplication::UnicodeUTF8));
        cboStopBits->clear();
        cboStopBits->insertItems(0, QStringList()
         << QApplication::translate("ConnectionDialog", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "2", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("ConnectionDialog", "Flow Control", 0, QApplication::UnicodeUTF8));
        cboFlowControl->clear();
        cboFlowControl->insertItems(0, QStringList()
         << QApplication::translate("ConnectionDialog", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "Hardware (RTS/CTS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConnectionDialog", "Software (XON/XOFF)", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("ConnectionDialog", "Logging", 0, QApplication::UnicodeUTF8));
        chkLoggingEnabled->setText(QApplication::translate("ConnectionDialog", "Enable logging", 0, QApplication::UnicodeUTF8));
        btnChooseLogFile->setText(QApplication::translate("ConnectionDialog", "Choose log file...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConnectionDialog: public Ui_ConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIALOG_H
