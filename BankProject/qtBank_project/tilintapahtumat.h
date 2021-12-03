#ifndef TILINTAPAHTUMAT_H
#define TILINTAPAHTUMAT_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QWidget>

namespace Ui {
class Tilintapahtumat;
}

class Tilintapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit Tilintapahtumat(QWidget *parent = 0);
    ~Tilintapahtumat();

private slots:
    void on_pushButton_Takaisin_clicked();

    void on_pushButton_Kirjaudu_ulos_clicked();

    void getTilitapahtumaSlot (QNetworkReply *tilitapahtuma_reply);

    void on_pushButton_HaeTilitapahtumat_clicked();

private:
    Ui::Tilintapahtumat *ui;
    QNetworkAccessManager *tilitapahtuma_Manager;
    QNetworkReply *tilitapahtuma_reply;
};

#endif // TILINTAPAHTUMAT_H
