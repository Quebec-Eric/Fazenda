#ifndef GASTOS_H
#define GASTOS_H
#include <iostream>
#include <vector>
#include <map>
#include <string>

enum BovineFood {
    GRASS,
    HAY,
    GRAIN,
    SILAGE,
    MINERAL_MIX
};

class Gastos
{
private:
    int valorTotal;
    std::vector<BovineFood> foodList; // Added this line
    std::map<std::string, BovineFood> foodMap;

public:
    Gastos();
    Gastos(int valorTotal, const std::vector<std::string>& foods);
    ~Gastos();
    std::vector<BovineFood> getFoodList();
    int getValorTotal(); // Fixed the typo here
};

#endif // GASTOS_H
