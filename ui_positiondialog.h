/********************************************************************************
** Form generated from reading UI file 'positiondialog.ui'
**
** Created: Sat Sep 25 17:33:00 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSITIONDIALOG_H
#define UI_POSITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_PositionDialog
{
public:

    void setupUi(QDialog *PositionDialog)
    {
        if (PositionDialog->objectName().isEmpty())
            PositionDialog->setObjectName(QString::fromUtf8("PositionDialog"));
        PositionDialog->resize(567, 402);

        retranslateUi(PositionDialog);

        QMetaObject::connectSlotsByName(PositionDialog);
    } // setupUi

    void retranslateUi(QDialog *PositionDialog)
    {
        PositionDialog->setWindowTitle(QApplication::translate("PositionDialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PositionDialog: public Ui_PositionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSITIONDIALOG_H
