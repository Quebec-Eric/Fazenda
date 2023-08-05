#include "GastosFazenda.h"

// Construtor padrão
GastosFazenda::GastosFazenda() : nomeGasto(""), valor(0.0), comentarioGasto(""), dataDoGasto({0})
{
}

// Construtor com parâmetros
GastosFazenda::GastosFazenda(const std::string &nomeGasto, double valor, const std::string &comentarioGasto, const std::tm &dataDoGasto)
{
    this->nomeGasto = nomeGasto;
    this->valor = valor;
    this->comentarioGasto = comentarioGasto;
    this->dataDoGasto = dataDoGasto;
}

// Destrutor
GastosFazenda::~GastosFazenda()
{
}

// Métodos get (sem alterações)
std::string GastosFazenda::getNomeGasto() const { return nomeGasto; }
double GastosFazenda::getValor() const { return valor; }
std::string GastosFazenda::getComentarioGasto() const { return comentarioGasto; }
std::tm GastosFazenda::getDataDoGasto() const { return dataDoGasto; }

// Métodos set com 'this'
void GastosFazenda::setNomeGasto(const std::string &nomeGasto)
{
    this->nomeGasto = nomeGasto;
}

void GastosFazenda::setValor(double valor)
{
    this->valor = valor;
}

void GastosFazenda::setComentarioGasto(const std::string &comentarioGasto)
{
    this->comentarioGasto = comentarioGasto;
}

void GastosFazenda::setDataDoGasto(const std::tm &dataDoGasto)
{
    this->dataDoGasto = dataDoGasto;
}
