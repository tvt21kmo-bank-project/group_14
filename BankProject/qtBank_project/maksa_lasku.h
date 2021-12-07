#ifndef MAKSA_LASKU_H
#define MAKSA_LASKU_H

#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Maksa_Lasku;
}


class Maksa_Lasku : public QWidget
{
    Q_OBJECT

public:
    explicit Maksa_Lasku(QWidget *parent = 0);
    ~Maksa_Lasku();

private slots:
    void on_pushButton_Debit_clicked();

    void on_pushButton_Takaisin_clicked();

    void creditSlot(QNetworkReply *reply);
    void debitSlot(QNetworkReply *reply);

    void on_pushButton_Credit_clicked();

private:
    Ui::Maksa_Lasku *ui;
    QNetworkAccessManager *creditManager;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;

};

#endif // MAKSA_LASKU_H
