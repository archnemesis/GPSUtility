#include <QWebView>
#include <QWebPage>
#include <QWebFrame>
#include <QWebElement>

#include "mapdialog.h"
#include "ui_mapdialog.h"

MapDialog::MapDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapDialog)
{
    ui->setupUi(this);
}

MapDialog::~MapDialog()
{
    delete ui;
}

void MapDialog::changeEvent(QEvent *e)
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

void MapDialog::setMapUrl(const QString mapUrl)
{
    ui->webView->setUrl(mapUrl);
}

void MapDialog::setMapLocation(double lat, double lon)
{
    QWebPage *page = ui->webView->page();
    QWebFrame *frame = page->mainFrame();
    QWebElement elem = frame->documentElement();
    QString script = QString("setLocation(%1, %2);").arg(lat).arg(lon);
    elem.evaluateJavaScript(script);
}

void MapDialog::on_webView_loadStarted()
{
    emit loadStarted();
}

void MapDialog::on_webView_loadFinished(bool finished)
{
    emit loadFinished(finished);
}
