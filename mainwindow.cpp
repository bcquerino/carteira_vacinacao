#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "estruturas.h"
#include <string.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_salvar_clicked() {
    strcpy(p.nome,"José");
}
