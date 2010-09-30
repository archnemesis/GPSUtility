#include "signalmeter.h"
#include "ui_signalmeter.h"

SignalMeter::SignalMeter(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::SignalMeter)
{
    ui->setupUi(this);
}

SignalMeter::~SignalMeter()
{
    delete ui;
}

void SignalMeter::changeEvent(QEvent *e)
{
    QDockWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
