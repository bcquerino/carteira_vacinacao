#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

#endif // ESTRUTURAS_H
typedef struct {
    int dia;
    int mes;
    int ano;
} Data; //Struct para armazenamento padrão de datas.

typedef struct {
    bool aplicada; //Controle de aplicação
    Data data; //Data de aplicação
    char lote[15]; //Lote da vacina da dose aplicada
    char nome[20]; //Nome da dose (Primeira, Segunda, Única, Reforço...)
} Dose;

typedef struct {
    char nome[50];
    Dose doses[6];
} Vacina;

typedef struct {
    char tipo; // U=Urbano | R=Rural
    char uf[2];
    char municipio[50];
    char logradouro[80];
    int num_residencia;
    char complemento[50];
    char bairro[50];
    char cep[15];
} Endereco;

typedef struct {
    char cns; //Código único do cartão
    char nome[75];
    char nomeMae[75];
    Data dataNascimento;
    char sexo;
    char pais[30]; // País de origem
    Endereco endereco;
    char telefone[20];
    char email[50];

    Vacina vacinas[30];
} Pessoa;

extern Pessoa p;
