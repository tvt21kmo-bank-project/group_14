#ifndef MAKSA_LASKU_H
#define MAKSA_LASKU_H

#include <QWidget>

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
    void on_pushButton_Maksa_clicked();

    void on_pushButton_Takaisin_clicked();

    void on_pushButton_Kirjaudu_ulos_clicked();

private:
    Ui::Maksa_Lasku *ui;
};

#endif // MAKSA_LASKU_H
