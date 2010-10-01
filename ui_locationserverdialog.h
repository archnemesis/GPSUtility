/********************************************************************************
** Form generated from reading UI file 'locationserverdialog.ui'
**
** Created: Thu Sep 30 09:27:50 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATIONSERVERDIALOG_H
#define UI_LOCATIONSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocationServerDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QSpinBox *spinBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QCheckBox *checkBox_4;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QComboBox *cboSerialPort;
    QLabel *label_8;
    QComboBox *cboBaud;
    QLabel *label_9;
    QComboBox *cboParity;
    QLabel *label_10;
    QComboBox *cboStopBits;
    QLabel *label_6;
    QComboBox *cboFlowControl;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *LocationServerDialog)
    {
        if (LocationServerDialog->objectName().isEmpty())
            LocationServerDialog->setObjectName(QString::fromUtf8("LocationServerDialog"));
        LocationServerDialog->resize(646, 541);
        gridLayout = new QGridLayout(LocationServerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(LocationServerDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        checkBox_3 = new QCheckBox(tab);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        checkBox_3->setFont(font);

        verticalLayout->addWidget(checkBox_3);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, checkBox);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, checkBox_2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(250, 16777215));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_2->addWidget(label_5);

        checkBox_4 = new QCheckBox(tab_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_2->addWidget(checkBox_4);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        cboSerialPort = new QComboBox(groupBox_3);
        cboSerialPort->setObjectName(QString::fromUtf8("cboSerialPort"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cboSerialPort->sizePolicy().hasHeightForWidth());
        cboSerialPort->setSizePolicy(sizePolicy2);
        cboSerialPort->setMaximumSize(QSize(250, 16777215));
        cboSerialPort->setEditable(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cboSerialPort);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_8);

        cboBaud = new QComboBox(groupBox_3);
        cboBaud->setObjectName(QString::fromUtf8("cboBaud"));
        sizePolicy2.setHeightForWidth(cboBaud->sizePolicy().hasHeightForWidth());
        cboBaud->setSizePolicy(sizePolicy2);
        cboBaud->setMaximumSize(QSize(250, 16777215));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, cboBaud);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_9);

        cboParity = new QComboBox(groupBox_3);
        cboParity->setObjectName(QString::fromUtf8("cboParity"));
        sizePolicy2.setHeightForWidth(cboParity->sizePolicy().hasHeightForWidth());
        cboParity->setSizePolicy(sizePolicy2);
        cboParity->setMaximumSize(QSize(250, 16777215));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, cboParity);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_10);

        cboStopBits = new QComboBox(groupBox_3);
        cboStopBits->setObjectName(QString::fromUtf8("cboStopBits"));
        sizePolicy2.setHeightForWidth(cboStopBits->sizePolicy().hasHeightForWidth());
        cboStopBits->setSizePolicy(sizePolicy2);
        cboStopBits->setMaximumSize(QSize(250, 16777215));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, cboStopBits);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_6);

        cboFlowControl = new QComboBox(groupBox_3);
        cboFlowControl->setObjectName(QString::fromUtf8("cboFlowControl"));
        sizePolicy2.setHeightForWidth(cboFlowControl->sizePolicy().hasHeightForWidth());
        cboFlowControl->setSizePolicy(sizePolicy2);
        cboFlowControl->setMaximumSize(QSize(250, 16777215));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, cboFlowControl);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_4 = new QFormLayout(groupBox_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        formLayout_4->setWidget(0, QFormLayout::SpanningRole, label_11);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_12);

        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(LocationServerDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LocationServerDialog);
    } // setupUi

    void retranslateUi(QDialog *LocationServerDialog)
    {
        LocationServerDialog->setWindowTitle(QApplication::translate("LocationServerDialog", "Location Server Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LocationServerDialog", "In TCP/IP mode, you can serve location information over a TCP/IP network connection.", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("LocationServerDialog", "Enable TCP/IP Location Sharing", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("LocationServerDialog", "Network", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LocationServerDialog", "Bind Address", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LocationServerDialog", "Port", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("LocationServerDialog", "Security", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("LocationServerDialog", "Require password to connect", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("LocationServerDialog", "Show password", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LocationServerDialog", "Password", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LocationServerDialog", "TCP/IP", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("LocationServerDialog", "In Serial Mode, you can serve location information on a serial port, using the Shared Location serial protocol. With the use of a serial modem, you can serve location information over an amateur radio network.", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("LocationServerDialog", "Enable Serial Port Location Sharing", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("LocationServerDialog", "Serial Port", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("LocationServerDialog", "Port", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("LocationServerDialog", "Baud", 0, QApplication::UnicodeUTF8));
        cboBaud->clear();
        cboBaud->insertItems(0, QStringList()
         << QApplication::translate("LocationServerDialog", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "115200", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("LocationServerDialog", "Parity", 0, QApplication::UnicodeUTF8));
        cboParity->clear();
        cboParity->insertItems(0, QStringList()
         << QApplication::translate("LocationServerDialog", "No Parity", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "Odd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "Even", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("LocationServerDialog", "Stop Bits", 0, QApplication::UnicodeUTF8));
        cboStopBits->clear();
        cboStopBits->insertItems(0, QStringList()
         << QApplication::translate("LocationServerDialog", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "2", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("LocationServerDialog", "Flow Control", 0, QApplication::UnicodeUTF8));
        cboFlowControl->clear();
        cboFlowControl->insertItems(0, QStringList()
         << QApplication::translate("LocationServerDialog", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "Hardware (RTS/CTS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LocationServerDialog", "Software (XON/XOFF)", 0, QApplication::UnicodeUTF8)
        );
        groupBox_4->setTitle(QApplication::translate("LocationServerDialog", "Station Identification", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("LocationServerDialog", "Depending on the laws in your country, you may be required to transmit station identification information (such as a callsign) if transmitting location data over RF. You can define a callsign or other ID code to be transmitted before the location data.", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("LocationServerDialog", "Station Identification Code (or callsign)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LocationServerDialog", "Serial", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LocationServerDialog: public Ui_LocationServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATIONSERVERDIALOG_H
