#ifndef TALLETUS_H
#define TALLETUS_H

#include <QWidget>

namespace Ui {
class Talletus;
}

class Talletus : public QWidget
{
    Q_OBJECT

public:
    explicit Talletus(QWidget *parent = 0);
    ~Talletus();
signals:
    void secondWindow();

private slots:
    void on_pushButton_Ok_clicked();

    void on_pushButton_Takaisin_clicked();



private:
    Ui::Talletus *ui;
};

#endif // TALLETUS_H
