/********************************************************************************
** Form generated from reading UI file 'tilintapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILINTAPAHTUMAT_H
#define UI_TILINTAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tilintapahtumat
{
public:
    QGroupBox *groupBox_Tilintapahtumat;
    QLabel *label_Tilintapahtumat;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Takaisin;
    QPushButton *pushButton_Kirjaudu_ulos;

    void setupUi(QWidget *Tilintapahtumat)
    {
        if (Tilintapahtumat->objectName().isEmpty())
            Tilintapahtumat->setObjectName(QStringLiteral("Tilintapahtumat"));
        Tilintapahtumat->resize(400, 300);
        groupBox_Tilintapahtumat = new QGroupBox(Tilintapahtumat);
        groupBox_Tilintapahtumat->setObjectName(QStringLiteral("groupBox_Tilintapahtumat"));
        groupBox_Tilintapahtumat->setGeometry(QRect(50, 70, 241, 161));
        label_Tilintapahtumat = new QLabel(groupBox_Tilintapahtumat);
        label_Tilintapahtumat->setObjectName(QStringLiteral("label_Tilintapahtumat"));
        label_Tilintapahtumat->setGeometry(QRect(50, 20, 131, 31));
        QFont font;
        font.setPointSize(16);
        label_Tilintapahtumat->setFont(font);
        widget = new QWidget(groupBox_Tilintapahtumat);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 90, 211, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Takaisin = new QPushButton(widget);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);

        pushButton_Kirjaudu_ulos = new QPushButton(widget);
        pushButton_Kirjaudu_ulos->setObjectName(QStringLiteral("pushButton_Kirjaudu_ulos"));
        pushButton_Kirjaudu_ulos->setFont(font);

        verticalLayout->addWidget(pushButton_Kirjaudu_ulos);


        retranslateUi(Tilintapahtumat);

        QMetaObject::connectSlotsByName(Tilintapahtumat);
    } // setupUi

    void retranslateUi(QWidget *Tilintapahtumat)
    {
        Tilintapahtumat->setWindowTitle(QApplication::translate("Tilintapahtumat", "Form", Q_NULLPTR));
        groupBox_Tilintapahtumat->setTitle(QApplication::translate("Tilintapahtumat", "Tilintapahtumat", Q_NULLPTR));
        label_Tilintapahtumat->setText(QApplication::translate("Tilintapahtumat", "  Tilintapahtumat", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Tilintapahtumat", "Takaisin", Q_NULLPTR));
        pushButton_Kirjaudu_ulos->setText(QApplication::translate("Tilintapahtumat", "Kirjaudu ulos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tilintapahtumat: public Ui_Tilintapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILINTAPAHTUMAT_H
