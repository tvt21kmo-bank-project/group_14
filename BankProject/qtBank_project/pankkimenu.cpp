#include "pankkimenu.h"
#include "ui_pankkimenu.h"

PankkiMenu::PankkiMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PankkiMenu)
{
    ui->setupUi(this);
    objSaldo = new Saldo;
    connect(objSaldo, &Saldo::secondWindow, this, &PankkiMenu::show);

    objTalletus = new Talletus;
    connect(objTalletus, &Talletus::secondWindow, this, &PankkiMenu::show);

    objHae_Lainaa = new Hae_Lainaa;
    connect(objHae_Lainaa, &Hae_Lainaa::secondWindow, this, &PankkiMenu::show);

    objTilintapahtumat = new Tilintapahtumat;
    connect(objTilintapahtumat, &Tilintapahtumat::secondWindow, this, &PankkiMenu::show);

    objMaksa_Lasku = new Maksa_Lasku;
    connect(objMaksa_Lasku, &Maksa_Lasku::secondWindow, this, &PankkiMenu::show);

    objNosta_rahaa = new Nosta_rahaa;
    connect(objNosta_rahaa, &Nosta_rahaa::secondWindow, this, &PankkiMenu::show);

}

PankkiMenu::~PankkiMenu()
{
    delete ui;
}

void PankkiMenu::on_pushButton_Saldo_clicked()
{

    objSaldo->show();
    this->close();

}

void PankkiMenu::on_pushButton_Nosta_rahaa_clicked()
{

    objNosta_rahaa->show();
    this->close();

}

void PankkiMenu::on_pushButton_Talletus_clicked()
{

    objTalletus->show();
    this->close();

}

void PankkiMenu::on_pushButton_Tilintapahtumat_clicked()
{

    objTilintapahtumat->show();
    this->close();

}

void PankkiMenu::on_pushButton_Hae_lainaa_clicked()
{

    objHae_Lainaa->show();
    this->close();

}

void PankkiMenu::on_pushButton_Maksa_lasku_clicked()
{

    objMaksa_Lasku->show();
    this->close();

}

void PankkiMenu::on_pushButton_Kirjaudu_ulos_clicked()
{
    this->close();
    emit firstWindow();
}
