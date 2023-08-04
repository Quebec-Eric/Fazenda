#include "Valor.h"

// Constructor with three parameters
Valor::Valor(double valorAtual, double valorKgAtual, double valorPretendido)
    : valorAtual(valorAtual), valorKgAtual(valorKgAtual), valorPretendido(valorPretendido), alertaMelhorValor(false) {}

// Method to update valorAtual
void Valor::atualizaValor(double novoValor) {
    valoresAnteriores.push_back(valorAtual); // Store the previous value if needed
    valorAtual = novoValor;
}

// Method to update valorKgAtual
void Valor::atualizaValorKgAtual(double novoValorKg) {
    valorKgAtual = novoValorKg;
}

// Method to update valorPretendido
void Valor::atualizaValorPretendido(double novoValorPretendido) {
    valorPretendido = novoValorPretendido;
}

// Method to update alertaMelhorValor
void Valor::atualizaAlertaMelhorValor() {
    // You'll need to define the logic here based on your requirements
}

// Getter for valorAtual
double Valor::getValorAtual() {
    return valorAtual;
}

// Getter for valorPretendido
double Valor::getvalorPretendido() {
    return valorPretendido;
}

// Getter for valorKgAtual
double Valor::getValorKgAtual() {
    return valorKgAtual;
}
Valor::Valor() {
    // Initialize members as needed
}
// You may add other methods as needed
