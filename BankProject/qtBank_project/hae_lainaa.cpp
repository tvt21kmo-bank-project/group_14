#include "hae_lainaa.h"
#include "ui_hae_lainaa.h"

Hae_Lainaa::Hae_Lainaa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hae_Lainaa)
{
    ui->setupUi(this);
}

Hae_Lainaa::~Hae_Lainaa()
{
    delete ui;
}

void Hae_Lainaa::on_pushButton_Ok_clicked()
{

}

void Hae_Lainaa::on_pushButton_Takaisin_clicked()
{
    this->close();
    emit secondWindow();
}

