/********************************************************************************
** Form generated from reading UI file 'cadastra_doses.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CADASTRA_DOSES_H
#define CADASTRA_DOSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *txtDose1;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLineEdit *txtDose2;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QLineEdit *txtDose4;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QLineEdit *txtDose3;
    QGroupBox *groupBox_5;
    QLabel *label_6;
    QLineEdit *txtDose5;
    QGroupBox *groupBox_6;
    QLabel *label_7;
    QLineEdit *txtDose6;
    QPushButton *btnNovo;
    QPushButton *btnConcluir;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(541, 363);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 511, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 251, 80));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 71, 16));
        txtDose1 = new QLineEdit(groupBox);
        txtDose1->setObjectName(QStringLiteral("txtDose1"));
        txtDose1->setGeometry(QRect(10, 40, 231, 20));
        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 50, 251, 80));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 71, 16));
        txtDose2 = new QLineEdit(groupBox_2);
        txtDose2->setObjectName(QStringLiteral("txtDose2"));
        txtDose2->setGeometry(QRect(10, 40, 231, 20));
        groupBox_3 = new QGroupBox(Form);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(280, 140, 251, 80));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 71, 16));
        txtDose4 = new QLineEdit(groupBox_3);
        txtDose4->setObjectName(QStringLiteral("txtDose4"));
        txtDose4->setGeometry(QRect(10, 40, 231, 20));
        groupBox_4 = new QGroupBox(Form);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 140, 251, 80));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 71, 16));
        txtDose3 = new QLineEdit(groupBox_4);
        txtDose3->setObjectName(QStringLiteral("txtDose3"));
        txtDose3->setGeometry(QRect(10, 40, 231, 20));
        groupBox_5 = new QGroupBox(Form);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 230, 251, 80));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 20, 71, 16));
        txtDose5 = new QLineEdit(groupBox_5);
        txtDose5->setObjectName(QStringLiteral("txtDose5"));
        txtDose5->setGeometry(QRect(10, 40, 231, 20));
        groupBox_6 = new QGroupBox(Form);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(280, 230, 251, 80));
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 20, 71, 16));
        txtDose6 = new QLineEdit(groupBox_6);
        txtDose6->setObjectName(QStringLiteral("txtDose6"));
        txtDose6->setGeometry(QRect(10, 40, 231, 20));
        btnNovo = new QPushButton(Form);
        btnNovo->setObjectName(QStringLiteral("btnNovo"));
        btnNovo->setGeometry(QRect(360, 320, 171, 31));
        btnConcluir = new QPushButton(Form);
        btnConcluir->setObjectName(QStringLiteral("btnConcluir"));
        btnConcluir->setGeometry(QRect(180, 320, 171, 31));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "Cadastrar doses da vacina", nullptr));
        groupBox->setTitle(QApplication::translate("Form", "Dose 1", nullptr));
        label_2->setText(QApplication::translate("Form", "Descri\303\247\303\243o", nullptr));
        groupBox_2->setTitle(QApplication::translate("Form", "Dose 2", nullptr));
        label_3->setText(QApplication::translate("Form", "Descri\303\247\303\243o", nullptr));
        groupBox_3->setTitle(QApplication::translate("Form", "Dose 4", nullptr));
        label_5->setText(QApplication::translate("Form", "Descri\303\247\303\243o", nullptr));
        groupBox_4->setTitle(QApplication::translate("Form", "Dose 3", nullptr));
        label_4->setText(QApplication::translate("Form", "Descri\303\247\303\243o", nullptr));
        groupBox_5->setTitle(QApplication::translate("Form", "Dose 5", nullptr));
        label_6->setText(QApplication::translate("Form", "Descri\303\247\303\243o", nullptr));
        groupBox_6->setTitle(QApplication::translate("Form", "Dose 6", nullptr));
        label_7->setText(QApplication::translate("Form", "Descri\303\247\303\243o", nullptr));
        btnNovo->setText(QApplication::translate("Form", "Nova vacina", nullptr));
        btnConcluir->setText(QApplication::translate("Form", "Concluir cadastros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CADASTRA_DOSES_H
