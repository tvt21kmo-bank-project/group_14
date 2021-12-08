#ifndef NOSTA_RAHAA_H
#define NOSTA_RAHAA_H

#include <QWidget>

namespace Ui {
class Nosta_rahaa;
}

class Nosta_rahaa : public QWidget
{
    Q_OBJECT

public:
    explicit Nosta_rahaa(QWidget *parent = 0);
    ~Nosta_rahaa();
signals:
    void secondWindow();

private slots:
    void on_pushButton_Takaisin_clicked();



private:
    Ui::Nosta_rahaa *ui;
};

#endif // NOSTA_RAHAA_H
