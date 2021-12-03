#ifndef SALDO_H
#define SALDO_H

#include <QWidget>
#include <QCloseEvent>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager> // allows our app to sen and receive network replies
#include <QJsonDocument>

namespace Ui {
class Saldo;
}

class Saldo : public QWidget
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = 0);
    ~Saldo();

private slots:

    void on_pushButton_Takaisin_clicked();

    void on_pushButton_Kirjaudu_ulos_clicked();

    void on_pushButton_HaeSaldo_clicked();

    void getSaldoSlot (QNetworkReply *reply);

private:
    Ui::Saldo *ui;
    QNetworkAccessManager *saldo_manager;
    QNetworkReply *reply;
};

#endif // SALDO_H
