#include "tilintapahtumat.h"
#include "ui_tilintapahtumat.h"
#include "mainwindow.h"

Tilintapahtumat::Tilintapahtumat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tilintapahtumat)
{
    ui->setupUi(this);

}

Tilintapahtumat::~Tilintapahtumat()
{
    delete ui;
}

void Tilintapahtumat::on_pushButton_HaeTilitapahtumat_clicked()
{
    QString site_url="http://localhost:3000/tilitapahtumat/1";
    QString credentials="newAdmin:newPass";

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QByteArray data = credentials.toLocal8Bit().toBase64();

    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    tilitapahtuma_Manager = new QNetworkAccessManager(this);
    connect(tilitapahtuma_Manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getTilitapahtumaSlot(QNetworkReply*)));
    reply = tilitapahtuma_Manager->get(request);
}

void Tilintapahtumat::getTilitapahtumaSlot(QNetworkReply *reply)
{
    QByteArray response_data = reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
//    qDebug()<<json_doc["paivays"];
//    QString tilitapahtuma=json_doc["paivays"].toString(); +" : "+json_doc["tapahtuma"].toString()+" : "+json_doc["rahamaara"].toString();

//    ui->tilitapahtumat_txtBox->setText(tilitapahtuma);
    // reply -> deleteLater();
    // tilitapahtuma_Manager -> deleteLater();
}

void Tilintapahtumat::on_pushButton_Takaisin_clicked()
{

}

void Tilintapahtumat::on_pushButton_Kirjaudu_ulos_clicked()
{

}

