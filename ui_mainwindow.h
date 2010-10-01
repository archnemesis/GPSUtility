/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Sep 30 09:27:50 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionShare;
    QAction *actionFind_Shared_GPS;
    QAction *actionLogging_Options;
    QAction *actionQuit;
    QAction *actionOptions;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCopy_GPS_Time_String;
    QAction *actionCopy_GPS_Location_String;
    QAction *actionQuick_Copy_Options;
    QAction *actionCopy_Google_Earth_URL;
    QAction *actionOpen_Google_Earth;
    QAction *actionOpen_Google_Maps;
    QAction *actionOpen_Yahoo_Maps;
    QAction *actionManage_Shortcuts;
    QAction *actionLogging_Options_2;
    QAction *actionStart_Log_Session;
    QAction *actionEnd_Log_Session;
    QAction *actionDatabase_Options;
    QAction *actionReports;
    QAction *actionAbout_GPS_Utility;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuDevice;
    QMenu *menu_Edit;
    QMenu *menu_Shortcuts;
    QMenu *menuLogging;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionShare = new QAction(MainWindow);
        actionShare->setObjectName(QString::fromUtf8("actionShare"));
        actionFind_Shared_GPS = new QAction(MainWindow);
        actionFind_Shared_GPS->setObjectName(QString::fromUtf8("actionFind_Shared_GPS"));
        actionLogging_Options = new QAction(MainWindow);
        actionLogging_Options->setObjectName(QString::fromUtf8("actionLogging_Options"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCopy_GPS_Time_String = new QAction(MainWindow);
        actionCopy_GPS_Time_String->setObjectName(QString::fromUtf8("actionCopy_GPS_Time_String"));
        actionCopy_GPS_Location_String = new QAction(MainWindow);
        actionCopy_GPS_Location_String->setObjectName(QString::fromUtf8("actionCopy_GPS_Location_String"));
        actionQuick_Copy_Options = new QAction(MainWindow);
        actionQuick_Copy_Options->setObjectName(QString::fromUtf8("actionQuick_Copy_Options"));
        actionCopy_Google_Earth_URL = new QAction(MainWindow);
        actionCopy_Google_Earth_URL->setObjectName(QString::fromUtf8("actionCopy_Google_Earth_URL"));
        actionOpen_Google_Earth = new QAction(MainWindow);
        actionOpen_Google_Earth->setObjectName(QString::fromUtf8("actionOpen_Google_Earth"));
        actionOpen_Google_Maps = new QAction(MainWindow);
        actionOpen_Google_Maps->setObjectName(QString::fromUtf8("actionOpen_Google_Maps"));
        actionOpen_Yahoo_Maps = new QAction(MainWindow);
        actionOpen_Yahoo_Maps->setObjectName(QString::fromUtf8("actionOpen_Yahoo_Maps"));
        actionManage_Shortcuts = new QAction(MainWindow);
        actionManage_Shortcuts->setObjectName(QString::fromUtf8("actionManage_Shortcuts"));
        actionLogging_Options_2 = new QAction(MainWindow);
        actionLogging_Options_2->setObjectName(QString::fromUtf8("actionLogging_Options_2"));
        actionStart_Log_Session = new QAction(MainWindow);
        actionStart_Log_Session->setObjectName(QString::fromUtf8("actionStart_Log_Session"));
        actionEnd_Log_Session = new QAction(MainWindow);
        actionEnd_Log_Session->setObjectName(QString::fromUtf8("actionEnd_Log_Session"));
        actionDatabase_Options = new QAction(MainWindow);
        actionDatabase_Options->setObjectName(QString::fromUtf8("actionDatabase_Options"));
        actionReports = new QAction(MainWindow);
        actionReports->setObjectName(QString::fromUtf8("actionReports"));
        actionAbout_GPS_Utility = new QAction(MainWindow);
        actionAbout_GPS_Utility->setObjectName(QString::fromUtf8("actionAbout_GPS_Utility"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        horizontalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        menuDevice = new QMenu(menuBar);
        menuDevice->setObjectName(QString::fromUtf8("menuDevice"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Shortcuts = new QMenu(menuBar);
        menu_Shortcuts->setObjectName(QString::fromUtf8("menu_Shortcuts"));
        menuLogging = new QMenu(menuBar);
        menuLogging->setObjectName(QString::fromUtf8("menuLogging"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDevice->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menuLogging->menuAction());
        menuBar->addAction(menu_Shortcuts->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuDevice->addAction(actionConnect);
        menuDevice->addAction(actionDisconnect);
        menuDevice->addSeparator();
        menuDevice->addAction(actionShare);
        menuDevice->addAction(actionFind_Shared_GPS);
        menuDevice->addSeparator();
        menuDevice->addAction(actionLogging_Options);
        menuDevice->addSeparator();
        menuDevice->addAction(actionQuit);
        menu_Edit->addAction(actionOptions);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionCut);
        menu_Edit->addAction(actionCopy);
        menu_Edit->addAction(actionPaste);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionCopy_GPS_Time_String);
        menu_Edit->addAction(actionCopy_GPS_Location_String);
        menu_Edit->addAction(actionCopy_Google_Earth_URL);
        menu_Edit->addAction(actionQuick_Copy_Options);
        menu_Shortcuts->addAction(actionOpen_Google_Earth);
        menu_Shortcuts->addAction(actionOpen_Google_Maps);
        menu_Shortcuts->addAction(actionOpen_Yahoo_Maps);
        menu_Shortcuts->addSeparator();
        menu_Shortcuts->addAction(actionManage_Shortcuts);
        menuLogging->addAction(actionLogging_Options_2);
        menuLogging->addSeparator();
        menuLogging->addAction(actionStart_Log_Session);
        menuLogging->addSeparator();
        menuLogging->addAction(actionEnd_Log_Session);
        menuLogging->addAction(actionDatabase_Options);
        menuLogging->addAction(actionReports);
        menuHelp->addAction(actionAbout_GPS_Utility);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GPS Utility", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect...", 0, QApplication::UnicodeUTF8));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        actionShare->setText(QApplication::translate("MainWindow", "Share...", 0, QApplication::UnicodeUTF8));
        actionFind_Shared_GPS->setText(QApplication::translate("MainWindow", "Find Shared GPS...", 0, QApplication::UnicodeUTF8));
        actionLogging_Options->setText(QApplication::translate("MainWindow", "Logging Options...", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("MainWindow", "Options...", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionCopy_GPS_Time_String->setText(QApplication::translate("MainWindow", "Copy GPS Time String", 0, QApplication::UnicodeUTF8));
        actionCopy_GPS_Location_String->setText(QApplication::translate("MainWindow", "Copy GPS Location String", 0, QApplication::UnicodeUTF8));
        actionQuick_Copy_Options->setText(QApplication::translate("MainWindow", "Quick Copy Options...", 0, QApplication::UnicodeUTF8));
        actionCopy_Google_Earth_URL->setText(QApplication::translate("MainWindow", "Copy Google Earth URL", 0, QApplication::UnicodeUTF8));
        actionOpen_Google_Earth->setText(QApplication::translate("MainWindow", "Open Google Earth", 0, QApplication::UnicodeUTF8));
        actionOpen_Google_Maps->setText(QApplication::translate("MainWindow", "Open Google Maps", 0, QApplication::UnicodeUTF8));
        actionOpen_Yahoo_Maps->setText(QApplication::translate("MainWindow", "Open Yahoo! Maps", 0, QApplication::UnicodeUTF8));
        actionManage_Shortcuts->setText(QApplication::translate("MainWindow", "Manage Shortcuts...", 0, QApplication::UnicodeUTF8));
        actionLogging_Options_2->setText(QApplication::translate("MainWindow", "Logging Options...", 0, QApplication::UnicodeUTF8));
        actionStart_Log_Session->setText(QApplication::translate("MainWindow", "Start Log Session...", 0, QApplication::UnicodeUTF8));
        actionEnd_Log_Session->setText(QApplication::translate("MainWindow", "End Log Session...", 0, QApplication::UnicodeUTF8));
        actionDatabase_Options->setText(QApplication::translate("MainWindow", "Database Options...", 0, QApplication::UnicodeUTF8));
        actionReports->setText(QApplication::translate("MainWindow", "Reports...", 0, QApplication::UnicodeUTF8));
        actionAbout_GPS_Utility->setText(QApplication::translate("MainWindow", "About GPS Utility...", 0, QApplication::UnicodeUTF8));
        menuDevice->setTitle(QApplication::translate("MainWindow", "&Device", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menu_Shortcuts->setTitle(QApplication::translate("MainWindow", "&Shortcuts", 0, QApplication::UnicodeUTF8));
        menuLogging->setTitle(QApplication::translate("MainWindow", "Logging", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
