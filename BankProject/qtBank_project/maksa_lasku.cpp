#include "maksa_lasku.h"
#include "ui_maksa_lasku.h"

Maksa_Lasku::Maksa_Lasku(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Maksa_Lasku)
{
    ui->setupUi(this);
}

Maksa_Lasku::~Maksa_Lasku()
{
    delete ui;
}

void Maksa_Lasku::on_pushButton_Maksa_clicked()
{

}

void Maksa_Lasku::on_pushButton_Takaisin_clicked()
{

}

void Maksa_Lasku::on_pushButton_Kirjaudu_ulos_clicked()
{

}
