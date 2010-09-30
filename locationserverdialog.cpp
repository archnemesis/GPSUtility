#include "locationserverdialog.h"
#include "ui_locationserverdialog.h"

LocationServerDialog::LocationServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LocationServerDialog)
{
    ui->setupUi(this);
}

LocationServerDialog::~LocationServerDialog()
{
    delete ui;
}

void LocationServerDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
