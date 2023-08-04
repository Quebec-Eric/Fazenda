#include "Gastos.h"
#include <vector>
#include <map>
#include <string>
#include <iostream>

std::map<std::string, BovineFood> foodMap = {
    {"grass", GRASS},
    {"hay", HAY},
    {"grain", GRAIN},
    {"silage", SILAGE},
    {"mineral_mix", MINERAL_MIX}
};

Gastos::Gastos() : valorTotal(0) {} // Removed the foods initializer

Gastos::Gastos(int valorTotal, const std::vector<std::string>& foods) {
    for (const auto& food : foods) {
        if (foodMap.count(food) > 0) {
            foodList.push_back(foodMap[food]); // Changed foodList to be a member of the class
        } else {
            std::cout << "Erro: comida desconhecida '" << food << "'.\n";
        }
    }
    this->valorTotal = valorTotal;
}

std::vector<BovineFood> Gastos::getFoodList() {
    return this->foodList; // foodList is now a member variable
}

int Gastos::getValorTotal() { // Fixed the typo here
    return this->valorTotal;
}

Gastos::~Gastos() {
}
