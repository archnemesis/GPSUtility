/********************************************************************************
** Form generated from reading UI file 'signalmeter.ui'
**
** Created: Thu Sep 30 09:27:50 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALMETER_H
#define UI_SIGNALMETER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignalMeter
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_9;
    QProgressBar *progressBar_8;
    QProgressBar *progressBar_7;
    QProgressBar *progressBar_6;
    QProgressBar *progressBar_5;
    QProgressBar *progressBar_4;
    QProgressBar *progressBar_21;
    QProgressBar *progressBar_20;
    QProgressBar *progressBar_19;
    QProgressBar *progressBar_18;
    QProgressBar *progressBar_17;
    QProgressBar *progressBar_16;
    QProgressBar *progressBar_15;
    QProgressBar *progressBar_14;
    QProgressBar *progressBar_13;
    QProgressBar *progressBar_10;
    QProgressBar *progressBar_11;
    QProgressBar *progressBar_12;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDockWidget *SignalMeter)
    {
        if (SignalMeter->objectName().isEmpty())
            SignalMeter->setObjectName(QString::fromUtf8("SignalMeter"));
        SignalMeter->resize(386, 128);
        QFont font;
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        SignalMeter->setFont(font);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        progressBar = new QProgressBar(dockWidgetContents);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(16, 16777215));
        QFont font1;
        font1.setPointSize(7);
        progressBar->setFont(font1);
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar);

        progressBar_2 = new QProgressBar(dockWidgetContents);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setMaximumSize(QSize(16, 16777215));
        progressBar_2->setFont(font1);
        progressBar_2->setValue(24);
        progressBar_2->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_2);

        progressBar_3 = new QProgressBar(dockWidgetContents);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setMaximumSize(QSize(16, 16777215));
        progressBar_3->setFont(font1);
        progressBar_3->setValue(24);
        progressBar_3->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_3);

        progressBar_9 = new QProgressBar(dockWidgetContents);
        progressBar_9->setObjectName(QString::fromUtf8("progressBar_9"));
        progressBar_9->setMaximumSize(QSize(16, 16777215));
        progressBar_9->setFont(font1);
        progressBar_9->setValue(24);
        progressBar_9->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_9);

        progressBar_8 = new QProgressBar(dockWidgetContents);
        progressBar_8->setObjectName(QString::fromUtf8("progressBar_8"));
        progressBar_8->setMaximumSize(QSize(16, 16777215));
        progressBar_8->setFont(font1);
        progressBar_8->setValue(24);
        progressBar_8->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_8);

        progressBar_7 = new QProgressBar(dockWidgetContents);
        progressBar_7->setObjectName(QString::fromUtf8("progressBar_7"));
        progressBar_7->setMaximumSize(QSize(16, 16777215));
        progressBar_7->setFont(font1);
        progressBar_7->setValue(24);
        progressBar_7->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_7);

        progressBar_6 = new QProgressBar(dockWidgetContents);
        progressBar_6->setObjectName(QString::fromUtf8("progressBar_6"));
        progressBar_6->setMaximumSize(QSize(16, 16777215));
        progressBar_6->setFont(font1);
        progressBar_6->setValue(24);
        progressBar_6->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_6);

        progressBar_5 = new QProgressBar(dockWidgetContents);
        progressBar_5->setObjectName(QString::fromUtf8("progressBar_5"));
        progressBar_5->setMaximumSize(QSize(16, 16777215));
        progressBar_5->setFont(font1);
        progressBar_5->setValue(24);
        progressBar_5->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_5);

        progressBar_4 = new QProgressBar(dockWidgetContents);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        progressBar_4->setMaximumSize(QSize(16, 16777215));
        progressBar_4->setFont(font1);
        progressBar_4->setValue(24);
        progressBar_4->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_4);

        progressBar_21 = new QProgressBar(dockWidgetContents);
        progressBar_21->setObjectName(QString::fromUtf8("progressBar_21"));
        progressBar_21->setMaximumSize(QSize(16, 16777215));
        progressBar_21->setFont(font1);
        progressBar_21->setValue(24);
        progressBar_21->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_21);

        progressBar_20 = new QProgressBar(dockWidgetContents);
        progressBar_20->setObjectName(QString::fromUtf8("progressBar_20"));
        progressBar_20->setMaximumSize(QSize(16, 16777215));
        progressBar_20->setFont(font1);
        progressBar_20->setValue(24);
        progressBar_20->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_20);

        progressBar_19 = new QProgressBar(dockWidgetContents);
        progressBar_19->setObjectName(QString::fromUtf8("progressBar_19"));
        progressBar_19->setMaximumSize(QSize(16, 16777215));
        progressBar_19->setFont(font1);
        progressBar_19->setValue(24);
        progressBar_19->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_19);

        progressBar_18 = new QProgressBar(dockWidgetContents);
        progressBar_18->setObjectName(QString::fromUtf8("progressBar_18"));
        progressBar_18->setMaximumSize(QSize(16, 16777215));
        progressBar_18->setFont(font1);
        progressBar_18->setValue(24);
        progressBar_18->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_18);

        progressBar_17 = new QProgressBar(dockWidgetContents);
        progressBar_17->setObjectName(QString::fromUtf8("progressBar_17"));
        progressBar_17->setMaximumSize(QSize(16, 16777215));
        progressBar_17->setFont(font1);
        progressBar_17->setValue(24);
        progressBar_17->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_17);

        progressBar_16 = new QProgressBar(dockWidgetContents);
        progressBar_16->setObjectName(QString::fromUtf8("progressBar_16"));
        progressBar_16->setMaximumSize(QSize(16, 16777215));
        progressBar_16->setFont(font1);
        progressBar_16->setValue(24);
        progressBar_16->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_16);

        progressBar_15 = new QProgressBar(dockWidgetContents);
        progressBar_15->setObjectName(QString::fromUtf8("progressBar_15"));
        progressBar_15->setMaximumSize(QSize(16, 16777215));
        progressBar_15->setFont(font1);
        progressBar_15->setValue(24);
        progressBar_15->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_15);

        progressBar_14 = new QProgressBar(dockWidgetContents);
        progressBar_14->setObjectName(QString::fromUtf8("progressBar_14"));
        progressBar_14->setMaximumSize(QSize(16, 16777215));
        progressBar_14->setFont(font1);
        progressBar_14->setValue(24);
        progressBar_14->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_14);

        progressBar_13 = new QProgressBar(dockWidgetContents);
        progressBar_13->setObjectName(QString::fromUtf8("progressBar_13"));
        progressBar_13->setMaximumSize(QSize(16, 16777215));
        progressBar_13->setFont(font1);
        progressBar_13->setValue(24);
        progressBar_13->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_13);

        progressBar_10 = new QProgressBar(dockWidgetContents);
        progressBar_10->setObjectName(QString::fromUtf8("progressBar_10"));
        progressBar_10->setMaximumSize(QSize(16, 16777215));
        progressBar_10->setFont(font1);
        progressBar_10->setValue(24);
        progressBar_10->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_10);

        progressBar_11 = new QProgressBar(dockWidgetContents);
        progressBar_11->setObjectName(QString::fromUtf8("progressBar_11"));
        progressBar_11->setMaximumSize(QSize(16, 16777215));
        progressBar_11->setFont(font1);
        progressBar_11->setValue(24);
        progressBar_11->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_11);

        progressBar_12 = new QProgressBar(dockWidgetContents);
        progressBar_12->setObjectName(QString::fromUtf8("progressBar_12"));
        progressBar_12->setMaximumSize(QSize(16, 16777215));
        progressBar_12->setFont(font1);
        progressBar_12->setValue(24);
        progressBar_12->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBar_12);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SignalMeter->setWidget(dockWidgetContents);

        retranslateUi(SignalMeter);

        QMetaObject::connectSlotsByName(SignalMeter);
    } // setupUi

    void retranslateUi(QDockWidget *SignalMeter)
    {
        SignalMeter->setWindowTitle(QApplication::translate("SignalMeter", "GPS Signal", 0, QApplication::UnicodeUTF8));
        progressBar->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_2->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_3->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_9->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_8->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_7->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_6->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_5->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_4->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_21->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_20->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_19->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_18->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_17->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_16->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_15->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_14->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_13->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_10->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_11->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
        progressBar_12->setFormat(QApplication::translate("SignalMeter", "%p", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SignalMeter: public Ui_SignalMeter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALMETER_H
