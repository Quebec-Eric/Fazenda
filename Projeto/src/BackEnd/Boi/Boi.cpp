#include "Boi.h"

Boi::Boi() : idadeBoi(0) {}
Boi::Boi(const Gastos& gastos, const std::vector<Vacina>& vacina, const Valor& valor, const std::string& nomeBoi, const std::vector<Boi>& filhosBoi, int idadeBoi) 
: gastos(gastos), vacina(vacina), valor(valor), nomeBoi(nomeBoi), filhosBoi(filhosBoi), idadeBoi(idadeBoi) {}

