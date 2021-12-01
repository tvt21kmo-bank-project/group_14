#ifndef TILINTAPAHTUMAT_H
#define TILINTAPAHTUMAT_H

#include <QWidget>

namespace Ui {
class Tilintapahtumat;
}

class Tilintapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit Tilintapahtumat(QWidget *parent = 0);
    ~Tilintapahtumat();

private slots:
    void on_pushButton_Takaisin_clicked();

    void on_pushButton_Kirjaudu_ulos_clicked();

private:
    Ui::Tilintapahtumat *ui;
};

#endif // TILINTAPAHTUMAT_H
