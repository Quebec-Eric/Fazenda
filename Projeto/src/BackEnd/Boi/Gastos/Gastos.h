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
    std::map<std::string, BovineFood> foodMap;

public:
    Gastos(int valorTotal, const std::vector<std::string>& foods);
    ~Gastos();
    std::vector<BovineFood> getFoodList();
    int getValortoral();
};

#endif // GASTOS_H
