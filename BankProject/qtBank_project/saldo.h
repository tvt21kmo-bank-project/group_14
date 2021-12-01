#ifndef SALDO_H
#define SALDO_H

#include <QWidget>

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_Takaisin_clicked();

    void on_pushButton_Kirjaudu_ulos_clicked();

private:
    Ui::Saldo *ui;
};

#endif // SALDO_H
