#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "pankkimenu.h"

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager> // allows our app to sen and receive network replies
#include <QJsonDocument>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void loginSlot (QNetworkReply *reply);
    void on_pushButton_Kirjaudu_sis_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *loginManager;
        QNetworkReply *reply;
        PankkiMenu *objPankkiMenu;
};

#endif // MAINWINDOW_H
