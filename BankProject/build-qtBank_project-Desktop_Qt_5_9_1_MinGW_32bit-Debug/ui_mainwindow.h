/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_Kirjaudu_sis;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Korttinumero;
    QLineEdit *lineEdit_Korttinumero;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Pin;
    QLineEdit *lineEdit_Pin;
    QPushButton *pushButton_Kirjaudu_sis;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1143, 980);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_Kirjaudu_sis = new QGroupBox(centralWidget);
        groupBox_Kirjaudu_sis->setObjectName(QStringLiteral("groupBox_Kirjaudu_sis"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_Kirjaudu_sis);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Korttinumero = new QLabel(groupBox_Kirjaudu_sis);
        label_Korttinumero->setObjectName(QStringLiteral("label_Korttinumero"));
        QFont font;
        font.setPointSize(16);
        label_Korttinumero->setFont(font);

        horizontalLayout->addWidget(label_Korttinumero);

        lineEdit_Korttinumero = new QLineEdit(groupBox_Kirjaudu_sis);
        lineEdit_Korttinumero->setObjectName(QStringLiteral("lineEdit_Korttinumero"));
        QFont font1;
        font1.setPointSize(24);
        lineEdit_Korttinumero->setFont(font1);

        horizontalLayout->addWidget(lineEdit_Korttinumero);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Pin = new QLabel(groupBox_Kirjaudu_sis);
        label_Pin->setObjectName(QStringLiteral("label_Pin"));
        label_Pin->setFont(font);

        horizontalLayout_2->addWidget(label_Pin);

        lineEdit_Pin = new QLineEdit(groupBox_Kirjaudu_sis);
        lineEdit_Pin->setObjectName(QStringLiteral("lineEdit_Pin"));
        lineEdit_Pin->setFont(font1);
        lineEdit_Pin->setFrame(true);
        lineEdit_Pin->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Pin);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_Kirjaudu_sis = new QPushButton(groupBox_Kirjaudu_sis);
        pushButton_Kirjaudu_sis->setObjectName(QStringLiteral("pushButton_Kirjaudu_sis"));
        pushButton_Kirjaudu_sis->setFont(font);

        verticalLayout_2->addWidget(pushButton_Kirjaudu_sis);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox_Kirjaudu_sis);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1143, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_Kirjaudu_sis->setTitle(QApplication::translate("MainWindow", "Kirjaudu_sis", Q_NULLPTR));
        label_Korttinumero->setText(QApplication::translate("MainWindow", "  Korttinumero", Q_NULLPTR));
        lineEdit_Korttinumero->setText(QString());
        label_Pin->setText(QApplication::translate("MainWindow", "  PIN", Q_NULLPTR));
        lineEdit_Pin->setText(QString());
        pushButton_Kirjaudu_sis->setText(QApplication::translate("MainWindow", "Kirjaudu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
