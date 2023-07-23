#ifndef GASTOS_H
#define GASTOS_H

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
    std::vector<BovineFood> foodList;
    int valorTotal;
    std::map<std::string, BovineFood> foodMap;

public:
    Gastos(const int valorTotal, const std::vector<std::string>& foods);
    ~Gastos();
};

#endif // GASTOS_H
