#include "tilintapahtumat.h"
#include "ui_tilintapahtumat.h"

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

void Tilintapahtumat::on_pushButton_Takaisin_clicked()
{

}

void Tilintapahtumat::on_pushButton_Kirjaudu_ulos_clicked()
{

}
