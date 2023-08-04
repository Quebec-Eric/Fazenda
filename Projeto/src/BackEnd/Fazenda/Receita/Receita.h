#ifndef RECEITA_H
#define RECEITA_H
#include <map>

class Receita
{
private:
    std::string tipoReceita;
    double valorReceita;
    bool iraRetornarParaAFazenda;
    std::map<string, int>porcentagemDeCadas;
public:
    Receita(std::string tipoReceita, double valorReceita,bool iraRetornarParaFazendo, std::map<std::string, std::string> myMap = {});
    ~Receita();
    Receita();
    getTipoReceita();
    getValorReceita();
    getIraRetornarParaAFazenda();
    getPorcentagemDeCadas();
    setTipoReceita();
    setValorReceita();
    setIraRetornarParaAFazenda();
    setPorcetagemDeCadas();
    toString();
};




#endif 