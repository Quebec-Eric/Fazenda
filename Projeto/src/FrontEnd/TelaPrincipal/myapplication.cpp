#include <iostream>
#include "myapplication.h"
#include <QMessageBox>

void MyApplication::handleButton1Click() {
    QMessageBox::information(nullptr, "Click", "Você clicou no Botão 1!");
}

void MyApplication::handleButton2Click() {
    QMessageBox::information(nullptr, "Click", "Você clicou no Botão 2!");
}
