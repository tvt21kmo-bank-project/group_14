#include "pankkimenu.h"
#include "ui_pankkimenu.h"

PankkiMenu::PankkiMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PankkiMenu)
{
    ui->setupUi(this);
}

PankkiMenu::~PankkiMenu()
{
    delete ui;
}

void PankkiMenu::on_pushButton_Saldo_clicked()
{

}

void PankkiMenu::on_pushButton_Nosta_rahaa_clicked()
{

}

void PankkiMenu::on_pushButton_Talletus_clicked()
{

}

void PankkiMenu::on_pushButton_Tilintapahtumat_clicked()
{

}

void PankkiMenu::on_pushButton_Hae_lainaa_clicked()
{

}

void PankkiMenu::on_pushButton_Maksa_lasku_clicked()
{

}

void PankkiMenu::on_pushButton_Kirjaudu_ulos_clicked()
{

}
