#ifndef RECEITA_H
#define RECEITA_H

#include <map>
#include <string>

class Receita
{
private:
    std::string tipoReceita;
    double valorReceita;
    bool iraRetornarParaAFazenda;
    std::map<std::string, int> porcentagemDeCadas;

public:
    // Construtor padrão (sem parâmetros)
    Receita();

    // Construtor com parâmetros
    Receita(const std::string &tipo, double valor, bool iraRetornar, const std::map<std::string, int> &porcentagem);

    // Destrutor
    ~Receita();

    // Métodos get
    std::string getTipoReceita() const;
    double getValorReceita() const;
    bool getIraRetornarParaAFazenda() const;
    std::map<std::string, int> getPorcentagemDeCadas() const;

    // Métodos set
    void setTipoReceita(const std::string &tipo);
    void setValorReceita(double valor);
    void setIraRetornarParaAFazenda(bool iraRetornar);
    void setPorcentagemDeCadas(const std::map<std::string, int> &porcentagem);
};

#endif
