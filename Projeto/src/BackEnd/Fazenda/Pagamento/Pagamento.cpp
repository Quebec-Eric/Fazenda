#include "Pagamento.h"
#include <vector>
#include <ctime>

// Construtor padrão
Pagamento::Pagamento() : remetente(""), motivoDoPagamento(""), quantia(0.0), dataPagamento({0}), parcelado(false), quantidadeDeParcelas(0)
{
}

// Construtor com parâmetros
Pagamento::Pagamento(const std::string &remetente, const std::string &motivoDoPagamento, double quantia, const std::tm &dataPagamento, bool parcelado, int quantidadeDeParcelas, const std::vector<std::tm> &dataProximasParcelas)
{
    this->remetente = remetente;
    this->motivoDoPagamento = motivoDoPagamento;
    this->quantia = quantia;
    this->dataPagamento = dataPagamento;
    this->parcelado = parcelado;
    this->quantidadeDeParcelas = quantidadeDeParcelas;
    this->dataProximasParcelas = dataProximasParcelas;
}

// Destrutor
Pagamento::~Pagamento()
{
}

// Métodos get
std::string Pagamento::getRemetente() const
{
    return this->remetente;
}

std::string Pagamento::getMotivoDoPagamento() const
{
    return this->motivoDoPagamento;
}

double Pagamento::getQuantia() const
{
    return this->quantia;
}

std::tm Pagamento::getDataPagamento() const
{
    return this->dataPagamento;
}

bool Pagamento::getParcelado() const
{
    return this->parcelado;
}

int Pagamento::getQuantidadeDeParcelas() const
{
    return this->quantidadeDeParcelas;
}

std::vector<std::tm> Pagamento::getDataProximasParcelas() const
{
    return this->dataProximasParcelas;
}

// Métodos set
void Pagamento::setRemetente(const std::string &remetente)
{
    this->remetente = remetente;
}

void Pagamento::setMotivoDoPagamento(const std::string &motivo)
{
    this->motivoDoPagamento = motivo;
}

void Pagamento::setQuantia(double quantia)
{
    this->quantia = quantia;
}

void Pagamento::setDataPagamento(const std::tm &data)
{
    this->dataPagamento = data;
}

void Pagamento::setParcelado(bool parcelado)
{
    this->parcelado = parcelado;
}

void Pagamento::setQuantidadeDeParcelas(int quantidade)
{
    this->quantidadeDeParcelas = quantidade;
}

void Pagamento::setDataProximasParcelas(const std::vector<std::tm> &dataParcelas)
{
    this->dataProximasParcelas = dataParcelas;
}
