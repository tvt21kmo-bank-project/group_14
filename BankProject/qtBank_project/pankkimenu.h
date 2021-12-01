#ifndef PANKKIMENU_H
#define PANKKIMENU_H

#include "nosta_rahaa.h"
#include "tilintapahtumat.h"
#include "maksa_lasku.h"
#include "saldo.h"
#include "talletus.h"






#include <QWidget>

namespace Ui {
class PankkiMenu;
}

class PankkiMenu : public QWidget
{
    Q_OBJECT

public:
    explicit PankkiMenu(QWidget *parent = 0);
    ~PankkiMenu();

private slots:
    void on_pushButton_Saldo_clicked();

    void on_pushButton_Nosta_rahaa_clicked();

    void on_pushButton_Talletus_clicked();

    void on_pushButton_Tilintapahtumat_clicked();

    void on_pushButton_Hae_lainaa_clicked();

    void on_pushButton_Maksa_lasku_clicked();

    void on_pushButton_Kirjaudu_ulos_clicked();

private:
    Ui::PankkiMenu *ui;
};

#endif // PANKKIMENU_H
