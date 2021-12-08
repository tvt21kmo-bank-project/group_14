/********************************************************************************
** Form generated from reading UI file 'virheform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRHEFORM_H
#define UI_VIRHEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VirheForm
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *virheIkkuna;

    void setupUi(QDialog *VirheForm)
    {
        if (VirheForm->objectName().isEmpty())
            VirheForm->setObjectName(QStringLiteral("VirheForm"));
        VirheForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(VirheForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        virheIkkuna = new QTextEdit(VirheForm);
        virheIkkuna->setObjectName(QStringLiteral("virheIkkuna"));
        virheIkkuna->setLayoutDirection(Qt::RightToLeft);
        virheIkkuna->setReadOnly(true);

        verticalLayout->addWidget(virheIkkuna);


        retranslateUi(VirheForm);

        QMetaObject::connectSlotsByName(VirheForm);
    } // setupUi

    void retranslateUi(QDialog *VirheForm)
    {
        VirheForm->setWindowTitle(QApplication::translate("VirheForm", "Dialog", Q_NULLPTR));
        virheIkkuna->setHtml(QApplication::translate("VirheForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Korttisi on nyt lukittu.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Ota yhteytt\303\244 asiakaspalveluun.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VirheForm: public Ui_VirheForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRHEFORM_H
