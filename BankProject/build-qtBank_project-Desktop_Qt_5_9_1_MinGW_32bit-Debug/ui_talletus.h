/********************************************************************************
** Form generated from reading UI file 'talletus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALLETUS_H
#define UI_TALLETUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Talletus
{
public:
    QGroupBox *groupBox_Talletus;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Tallettava_maara;
    QLineEdit *lineEdit_Tallettava_maara;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_Takaisin;
    QPushButton *pushButton_Kirjaudu_ulos;

    void setupUi(QWidget *Talletus)
    {
        if (Talletus->objectName().isEmpty())
            Talletus->setObjectName(QStringLiteral("Talletus"));
        Talletus->resize(400, 300);
        groupBox_Talletus = new QGroupBox(Talletus);
        groupBox_Talletus->setObjectName(QStringLiteral("groupBox_Talletus"));
        groupBox_Talletus->setGeometry(QRect(59, 70, 231, 171));
        widget = new QWidget(groupBox_Talletus);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 20, 141, 138));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Tallettava_maara = new QLabel(widget);
        label_Tallettava_maara->setObjectName(QStringLiteral("label_Tallettava_maara"));
        QFont font;
        font.setPointSize(16);
        label_Tallettava_maara->setFont(font);

        verticalLayout->addWidget(label_Tallettava_maara);

        lineEdit_Tallettava_maara = new QLineEdit(widget);
        lineEdit_Tallettava_maara->setObjectName(QStringLiteral("lineEdit_Tallettava_maara"));

        verticalLayout->addWidget(lineEdit_Tallettava_maara);

        pushButton_Ok = new QPushButton(widget);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setFont(font);

        verticalLayout->addWidget(pushButton_Ok);

        pushButton_Takaisin = new QPushButton(widget);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);

        pushButton_Kirjaudu_ulos = new QPushButton(widget);
        pushButton_Kirjaudu_ulos->setObjectName(QStringLiteral("pushButton_Kirjaudu_ulos"));
        pushButton_Kirjaudu_ulos->setFont(font);

        verticalLayout->addWidget(pushButton_Kirjaudu_ulos);


        retranslateUi(Talletus);

        QMetaObject::connectSlotsByName(Talletus);
    } // setupUi

    void retranslateUi(QWidget *Talletus)
    {
        Talletus->setWindowTitle(QApplication::translate("Talletus", "Form", Q_NULLPTR));
        groupBox_Talletus->setTitle(QApplication::translate("Talletus", "Talletus", Q_NULLPTR));
        label_Tallettava_maara->setText(QApplication::translate("Talletus", "Tallettava maara", Q_NULLPTR));
        pushButton_Ok->setText(QApplication::translate("Talletus", "OK", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Talletus", "Takaisin", Q_NULLPTR));
        pushButton_Kirjaudu_ulos->setText(QApplication::translate("Talletus", "Kirjaudu ulos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Talletus: public Ui_Talletus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALLETUS_H
