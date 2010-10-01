/********************************************************************************
** Form generated from reading UI file 'locationwidget.ui'
**
** Created: Thu Sep 30 09:27:50 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATIONWIDGET_H
#define UI_LOCATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocationWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *lblTime;
    QLabel *label_3;
    QLabel *lblLatitude;
    QLabel *label_4;
    QLabel *lblLongitude;
    QLabel *label_5;
    QLabel *lblAltitude;
    QLabel *label_7;
    QLabel *lblHdg;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *LocationWidget)
    {
        if (LocationWidget->objectName().isEmpty())
            LocationWidget->setObjectName(QString::fromUtf8("LocationWidget"));
        LocationWidget->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lblTime = new QLabel(dockWidgetContents);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        QFont font1;
        font1.setPointSize(12);
        lblTime->setFont(font1);

        verticalLayout->addWidget(lblTime);

        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        lblLatitude = new QLabel(dockWidgetContents);
        lblLatitude->setObjectName(QString::fromUtf8("lblLatitude"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        lblLatitude->setFont(font2);

        verticalLayout->addWidget(lblLatitude);

        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        lblLongitude = new QLabel(dockWidgetContents);
        lblLongitude->setObjectName(QString::fromUtf8("lblLongitude"));
        lblLongitude->setFont(font2);

        verticalLayout->addWidget(lblLongitude);

        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        lblAltitude = new QLabel(dockWidgetContents);
        lblAltitude->setObjectName(QString::fromUtf8("lblAltitude"));
        lblAltitude->setFont(font1);

        verticalLayout->addWidget(lblAltitude);

        label_7 = new QLabel(dockWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        lblHdg = new QLabel(dockWidgetContents);
        lblHdg->setObjectName(QString::fromUtf8("lblHdg"));
        lblHdg->setFont(font1);

        verticalLayout->addWidget(lblHdg);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        LocationWidget->setWidget(dockWidgetContents);

        retranslateUi(LocationWidget);

        QMetaObject::connectSlotsByName(LocationWidget);
    } // setupUi

    void retranslateUi(QDockWidget *LocationWidget)
    {
        LocationWidget->setWindowTitle(QApplication::translate("LocationWidget", "Position", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LocationWidget", "GPS Time", 0, QApplication::UnicodeUTF8));
        lblTime->setText(QApplication::translate("LocationWidget", "-", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LocationWidget", "Latitude", 0, QApplication::UnicodeUTF8));
        lblLatitude->setText(QApplication::translate("LocationWidget", "-", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LocationWidget", "Longitude", 0, QApplication::UnicodeUTF8));
        lblLongitude->setText(QApplication::translate("LocationWidget", "-", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("LocationWidget", "Altitude", 0, QApplication::UnicodeUTF8));
        lblAltitude->setText(QApplication::translate("LocationWidget", "-", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("LocationWidget", "Heading", 0, QApplication::UnicodeUTF8));
        lblHdg->setText(QApplication::translate("LocationWidget", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LocationWidget: public Ui_LocationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATIONWIDGET_H
