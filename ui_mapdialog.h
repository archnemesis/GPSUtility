/********************************************************************************
** Form generated from reading UI file 'mapdialog.ui'
**
** Created: Thu Sep 30 09:27:50 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPDIALOG_H
#define UI_MAPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_MapDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWebView *webView;

    void setupUi(QDialog *MapDialog)
    {
        if (MapDialog->objectName().isEmpty())
            MapDialog->setObjectName(QString::fromUtf8("MapDialog"));
        MapDialog->resize(764, 548);
        verticalLayout = new QVBoxLayout(MapDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        webView = new QWebView(MapDialog);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("qrc:/html/resources/html/gmapjs.html"));

        verticalLayout->addWidget(webView);


        retranslateUi(MapDialog);

        QMetaObject::connectSlotsByName(MapDialog);
    } // setupUi

    void retranslateUi(QDialog *MapDialog)
    {
        MapDialog->setWindowTitle(QApplication::translate("MapDialog", "Map Viewer (Google Maps API)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MapDialog: public Ui_MapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPDIALOG_H
