/********************************************************************************
** Form generated from reading UI file 'cadastra_pessoa.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRA_PESSOA_H
#define UI_CADASTRA_PESSOA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtCns;
    QLineEdit *txtNome;
    QLineEdit *txtNomeMae;
    QLabel *label_4;
    QComboBox *cmbSexo;
    QLabel *label_5;
    QLineEdit *txtPais;
    QLabel *label_6;
    QLineEdit *txtTelefone;
    QLabel *label_7;
    QLineEdit *txtEmail;
    QGroupBox *groupBox;
    QLabel *label_11;
    QComboBox *cmbTipoRes;
    QLabel *label_12;
    QLineEdit *txtUf;
    QLabel *label_13;
    QLineEdit *txtCep;
    QLabel *label_14;
    QLineEdit *txtMunicipio;
    QLabel *label_15;
    QLineEdit *txtNumero;
    QLabel *label_16;
    QLineEdit *txtComplemento;
    QLabel *label_17;
    QLineEdit *txtBairro;
    QLabel *label_8;
    QLineEdit *txtDiaNasc;
    QLabel *label_9;
    QLineEdit *txtMesNasc;
    QLabel *label_10;
    QLineEdit *txtAnoNasc;
    QPushButton *btnSave;
    QLabel *label_18;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(653, 401);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 47, 13));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 47, 13));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 150, 81, 16));
        txtCns = new QLineEdit(Form);
        txtCns->setObjectName(QStringLiteral("txtCns"));
        txtCns->setGeometry(QRect(10, 70, 161, 21));
        txtNome = new QLineEdit(Form);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(10, 120, 301, 20));
        txtNomeMae = new QLineEdit(Form);
        txtNomeMae->setObjectName(QStringLiteral("txtNomeMae"));
        txtNomeMae->setGeometry(QRect(10, 170, 301, 20));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 200, 47, 13));
        cmbSexo = new QComboBox(Form);
        cmbSexo->addItem(QString());
        cmbSexo->addItem(QString());
        cmbSexo->setObjectName(QStringLiteral("cmbSexo"));
        cmbSexo->setGeometry(QRect(10, 220, 91, 22));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 250, 71, 16));
        txtPais = new QLineEdit(Form);
        txtPais->setObjectName(QStringLiteral("txtPais"));
        txtPais->setGeometry(QRect(10, 270, 121, 20));
        label_6 = new QLabel(Form);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 300, 47, 13));
        txtTelefone = new QLineEdit(Form);
        txtTelefone->setObjectName(QStringLiteral("txtTelefone"));
        txtTelefone->setGeometry(QRect(10, 320, 221, 20));
        label_7 = new QLabel(Form);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 350, 47, 13));
        txtEmail = new QLineEdit(Form);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(10, 370, 251, 20));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(320, 110, 311, 231));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 20, 41, 16));
        cmbTipoRes = new QComboBox(groupBox);
        cmbTipoRes->addItem(QString());
        cmbTipoRes->addItem(QString());
        cmbTipoRes->setObjectName(QStringLiteral("cmbTipoRes"));
        cmbTipoRes->setGeometry(QRect(10, 40, 69, 22));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 20, 47, 13));
        txtUf = new QLineEdit(groupBox);
        txtUf->setObjectName(QStringLiteral("txtUf"));
        txtUf->setGeometry(QRect(100, 40, 61, 20));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(180, 20, 47, 13));
        txtCep = new QLineEdit(groupBox);
        txtCep->setObjectName(QStringLiteral("txtCep"));
        txtCep->setGeometry(QRect(180, 40, 121, 20));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 80, 47, 13));
        txtMunicipio = new QLineEdit(groupBox);
        txtMunicipio->setObjectName(QStringLiteral("txtMunicipio"));
        txtMunicipio->setGeometry(QRect(10, 100, 291, 20));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 130, 47, 13));
        txtNumero = new QLineEdit(groupBox);
        txtNumero->setObjectName(QStringLiteral("txtNumero"));
        txtNumero->setGeometry(QRect(10, 150, 113, 20));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(140, 130, 71, 16));
        txtComplemento = new QLineEdit(groupBox);
        txtComplemento->setObjectName(QStringLiteral("txtComplemento"));
        txtComplemento->setGeometry(QRect(140, 150, 161, 20));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 180, 47, 13));
        txtBairro = new QLineEdit(groupBox);
        txtBairro->setObjectName(QStringLiteral("txtBairro"));
        txtBairro->setGeometry(QRect(10, 200, 291, 20));
        label_8 = new QLabel(Form);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(330, 50, 101, 16));
        txtDiaNasc = new QLineEdit(Form);
        txtDiaNasc->setObjectName(QStringLiteral("txtDiaNasc"));
        txtDiaNasc->setGeometry(QRect(330, 70, 51, 20));
        label_9 = new QLabel(Form);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(390, 70, 16, 16));
        txtMesNasc = new QLineEdit(Form);
        txtMesNasc->setObjectName(QStringLiteral("txtMesNasc"));
        txtMesNasc->setGeometry(QRect(400, 70, 51, 20));
        label_10 = new QLabel(Form);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(460, 70, 16, 16));
        txtAnoNasc = new QLineEdit(Form);
        txtAnoNasc->setObjectName(QStringLiteral("txtAnoNasc"));
        txtAnoNasc->setGeometry(QRect(470, 70, 81, 20));
        btnSave = new QPushButton(Form);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setGeometry(QRect(560, 370, 75, 23));
        label_18 = new QLabel(Form);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 10, 251, 31));
        QFont font;
        font.setPointSize(16);
        label_18->setFont(font);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "CNS", nullptr));
        label_2->setText(QApplication::translate("Form", "Nome", nullptr));
        label_3->setText(QApplication::translate("Form", "Nome da m\303\243e", nullptr));
        label_4->setText(QApplication::translate("Form", "Sexo", nullptr));
        cmbSexo->setItemText(0, QApplication::translate("Form", "Masculino", nullptr));
        cmbSexo->setItemText(1, QApplication::translate("Form", "Feminino", nullptr));

        label_5->setText(QApplication::translate("Form", "Nacionalidade", nullptr));
        label_6->setText(QApplication::translate("Form", "Telefone", nullptr));
        label_7->setText(QApplication::translate("Form", "E-mail", nullptr));
        groupBox->setTitle(QApplication::translate("Form", "Endere\303\247o", nullptr));
        label_11->setText(QApplication::translate("Form", "Tipo", nullptr));
        cmbTipoRes->setItemText(0, QApplication::translate("Form", "Urbano", nullptr));
        cmbTipoRes->setItemText(1, QApplication::translate("Form", "Rural", nullptr));

        label_12->setText(QApplication::translate("Form", "UF", nullptr));
        label_13->setText(QApplication::translate("Form", "CEP", nullptr));
        label_14->setText(QApplication::translate("Form", "Munic\303\255pio", nullptr));
        label_15->setText(QApplication::translate("Form", "N\303\272mero", nullptr));
        label_16->setText(QApplication::translate("Form", "Complemento", nullptr));
        label_17->setText(QApplication::translate("Form", "Bairro", nullptr));
        label_8->setText(QApplication::translate("Form", "Data Nascimento", nullptr));
        label_9->setText(QApplication::translate("Form", "/", nullptr));
        label_10->setText(QApplication::translate("Form", "/", nullptr));
        btnSave->setText(QApplication::translate("Form", "Salvar", nullptr));
        label_18->setText(QApplication::translate("Form", "Cadastrar pessoa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRA_PESSOA_H
