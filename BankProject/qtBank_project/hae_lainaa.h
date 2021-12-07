#ifndef HAE_LAINAA_H
#define HAE_LAINAA_H

#include <QWidget>

namespace Ui {
class Hae_Lainaa;
}

class Hae_Lainaa : public QWidget
{
    Q_OBJECT

public:
    explicit Hae_Lainaa(QWidget *parent = 0);
    ~Hae_Lainaa();
signals:
    void secondWindow();

private slots:
    void on_pushButton_Ok_clicked();

    void on_pushButton_Takaisin_clicked();



private:
    Ui::Hae_Lainaa *ui;
};

#endif // HAE_LAINAA_H
