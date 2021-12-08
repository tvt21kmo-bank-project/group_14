#include "talletus.h"
#include "ui_talletus.h"

Talletus::Talletus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Talletus)
{
    ui->setupUi(this);
}

Talletus::~Talletus()
{
    delete ui;
}

void Talletus::on_pushButton_Ok_clicked()
{

}

void Talletus::on_pushButton_Takaisin_clicked()
{
    this->close();
    emit secondWindow();
}

