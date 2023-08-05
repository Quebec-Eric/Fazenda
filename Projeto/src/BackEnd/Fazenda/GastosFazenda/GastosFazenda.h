#ifndef GASTOSFAZENDA_H
#define GASTOSFAZENDA_H

#include <string>
#include <ctime>

class GastosFazenda
{
private:
    std::string nomeGasto;
    double valor;
    std::string comentarioGasto;
    std::tm dataDoGasto;

public:
    // Construtor padrão (sem parâmetros)
    GastosFazenda();

    // Construtor com parâmetros
    GastosFazenda(const std::string &nome, double valorGasto, const std::string &comentario, const std::tm &data);

    // Destrutor
    ~GastosFazenda();

    // Métodos get
    std::string getNomeGasto() const;
    double getValor() const;
    std::string getComentarioGasto() const;
    std::tm getDataDoGasto() const;

    // Métodos set
    void setNomeGasto(const std::string &nome);
    void setValor(double valorGasto);
    void setComentarioGasto(const std::string &comentario);
    void setDataDoGasto(const std::tm &data);
};

#endif
