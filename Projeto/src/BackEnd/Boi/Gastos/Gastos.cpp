#include "Gastos.h"
#include <vector>
#include <map>
#include <string>

std::map<std::string, BovineFood> foodMap = {
    {"grass", GRASS},
    {"hay", HAY},
    {"grain", GRAIN},
    {"silage", SILAGE},
    {"mineral_mix", MINERAL_MIX}
};


class Gastos
{
private:
    std::vector<BovineFood> foodList;
    int valorTotal;


public:
    Gastos();
    ~Gastos();
};

Gastos::Gastos(std::const int valorTotal,const std::vector<std::string>& foods) {
    for (const auto& food : foods) {
        if (foodMap.count(food) > 0) {
            foodList.push_back(foodMap[food]);
        } else {
            std::cout << "Erro: comida desconhecida '" << food << "'.\n";
        }
    }
    this->valorTotal=valorTotal;
}

Gastos::~Gastos()
{
}
