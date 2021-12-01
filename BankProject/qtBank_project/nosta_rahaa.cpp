#include "nosta_rahaa.h"
#include "ui_nosta_rahaa.h"

Nosta_rahaa::Nosta_rahaa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nosta_rahaa)
{
    ui->setupUi(this);
}

Nosta_rahaa::~Nosta_rahaa()
{
    delete ui;
}

void Nosta_rahaa::on_pushButton_Takaisin_clicked()
{

}

void Nosta_rahaa::on_pushButton_Kirjaudu_ulos_clicked()
{

}
