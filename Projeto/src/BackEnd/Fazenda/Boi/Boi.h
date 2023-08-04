#ifndef BOI_H
#define BOI_H

#include "Valor/Valor.h"
#include "Vacina/Vacina.h"
#include "Gastos/Gastos.h"
#include <vector>
#include <string>
#include <ctime>

class Boi {
private:
    Gastos gastos;
    std::vector<Vacina> vacina;
    Valor valor;
    std::string nomeBoi;
    std::vector<Boi> filhosBoi;
    int idadeBoi;

public:
    Boi();
    Boi(const Gastos& gastos, const std::vector<Vacina>& vacina, const Valor& valor, 
        const std::string& nomeBoi, const std::vector<Boi>& filhosBoi, int idadeBoi);
    ~Boi();

    void updateGastos(int valorTotal, std::string comida);
    void createGastos(int valorTotal, std::string comida);
    void deleteGastos(std::string comida);
    void readGastos();
    void updateVacina(std::string nomeVacina, std::tm dataAplicacao, std::tm proximaAplicacao, bool ultimaDose, double ml);
    void createVacina(std::string nomeVacina, std::tm dataAplicacao, std::tm proximaAplicacao, bool ultimaDose, double ml);
    void deleteVacina(std::string vacina);
    void readVacina();
    void updateValor(double valorAtual, std::vector<double> valoresAnteriores, double valorKgAtual, double valorPretendido, bool alertaMelhorValor);
    void createValor(double valorAtual, std::vector<double> valoresAnteriores, double valorKgAtual, double valorPretendido, bool alertaMelhorValor);
    void deleteValor(double valorRetirar);
    void readValor();
};

#endif // BOI_H
