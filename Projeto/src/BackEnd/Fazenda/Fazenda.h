#ifndef FAZENDA_H
#define FAZENDA_H

#include "Boi/Boi.h"
#include "GastosFazenda/GastosFazenda.h"
#include "Pagamento/Pagamento.h"
#include "Receita/Receita.h"
#include <vector>
#include <string>

class Fazenda
{
private:
    std::string nomeFazenda;
    std::string localFazenda;
    std::vector<Gastos> gastosFazenda;
    std::vector<Pagamento> pagamentoFazenda;
    std::vector<Receita> receitaFazenda;
    std::vector<Boi> bovinosFazenda;

public:
    // Construtor padrão (sem parâmetros)
    Fazenda();

    // Construtor com parâmetros
    Fazenda(const std::string &nome, const std::string &local, const std::vector<Gastos> &gastos, const std::vector<Pagamento> &pagamento, const std::vector<Receita> &receita, const std::vector<Boi> &bovinos);

    // Destrutor
    ~Fazenda();

    // Métodos get
    std::string getNomeFazenda() const;
    std::string getLocalFazenda() const;
    std::vector<Gastos> getGastosFazenda() const;
    std::vector<Pagamento> getPagamentoFazenda() const;
    std::vector<Receita> getReceitaFazenda() const;
    std::vector<Boi> getBovinosFazenda() const;

    // Métodos set
    void setNomeFazenda(const std::string &nome);
    void setLocalFazenda(const std::string &local);
    void setGastosFazenda(const std::vector<Gastos> &gastos);
    void setPagamentoFazenda(const std::vector<Pagamento> &pagamento);
    void setReceitaFazenda(const std::vector<Receita> &receita);
    void setBovinosFazenda(const std::vector<Boi> &bovinos);
};

#endif
