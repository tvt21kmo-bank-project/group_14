/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QGroupBox *groupBox_Saldo;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Tilin_saldo;
    QLineEdit *lineEdit_Saldo;
    QPushButton *pushButton_Takaisin;
    QPushButton *pushButton_Kirjaudu_ulos;

    void setupUi(QWidget *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QStringLiteral("Saldo"));
        Saldo->resize(400, 300);
        groupBox_Saldo = new QGroupBox(Saldo);
        groupBox_Saldo->setObjectName(QStringLiteral("groupBox_Saldo"));
        groupBox_Saldo->setGeometry(QRect(40, 60, 291, 181));
        widget = new QWidget(groupBox_Saldo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 271, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Tilin_saldo = new QLabel(widget);
        label_Tilin_saldo->setObjectName(QStringLiteral("label_Tilin_saldo"));
        QFont font;
        font.setPointSize(16);
        label_Tilin_saldo->setFont(font);

        horizontalLayout->addWidget(label_Tilin_saldo);

        lineEdit_Saldo = new QLineEdit(widget);
        lineEdit_Saldo->setObjectName(QStringLiteral("lineEdit_Saldo"));

        horizontalLayout->addWidget(lineEdit_Saldo);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_Takaisin = new QPushButton(widget);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);

        pushButton_Kirjaudu_ulos = new QPushButton(widget);
        pushButton_Kirjaudu_ulos->setObjectName(QStringLiteral("pushButton_Kirjaudu_ulos"));
        pushButton_Kirjaudu_ulos->setFont(font);

        verticalLayout->addWidget(pushButton_Kirjaudu_ulos);


        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QWidget *Saldo)
    {
        Saldo->setWindowTitle(QApplication::translate("Saldo", "Form", Q_NULLPTR));
        groupBox_Saldo->setTitle(QApplication::translate("Saldo", "Saldo", Q_NULLPTR));
        label_Tilin_saldo->setText(QApplication::translate("Saldo", "  Tilin saldo", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Saldo", "Takaisin", Q_NULLPTR));
        pushButton_Kirjaudu_ulos->setText(QApplication::translate("Saldo", "Kirjaudu ulos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H