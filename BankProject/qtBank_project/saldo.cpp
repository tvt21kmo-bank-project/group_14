#include "saldo.h"
#include "ui_saldo.h"

Saldo::Saldo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
}

Saldo::~Saldo()
{
    delete ui;
}

void Saldo::on_pushButton_clicked()
{

}

void Saldo::on_pushButton_2_clicked()
{

}

void Saldo::on_pushButton_Takaisin_clicked()
{

}

void Saldo::on_pushButton_Kirjaudu_ulos_clicked()
{

}
