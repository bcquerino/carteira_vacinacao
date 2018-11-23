#include "mainwindow.h"
#include "mainwindow.cpp"
#include <QApplication>
#include <stdbool.h>
#include "cadastra_pessoa.h"

Pessoa p;

int pos = 0;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
