#include "locationwidget.h"
#include "ui_locationwidget.h"

LocationWidget::LocationWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::LocationWidget)
{
    ui->setupUi(this);
}

LocationWidget::~LocationWidget()
{
    delete ui;
}

void LocationWidget::changeEvent(QEvent *e)
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

void LocationWidget::setLatitude(const QString lat)
{
    ui->lblLatitude->setText(lat);
}

void LocationWidget::setLongitude(const QString lon)
{
    ui->lblLongitude->setText(lon);
}

void LocationWidget::setAltitude(const QString alt)
{
    ui->lblAltitude->setText(alt);
}

void LocationWidget::setHeading(const QString hdg)
{
    ui->lblHdg->setText(hdg);
}

void LocationWidget::setTime(const QString time)
{
    ui->lblTime->setText(time);
}
