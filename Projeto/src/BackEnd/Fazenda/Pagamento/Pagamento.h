#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>
#include <vector>
#include <ctime>

class Pagamento
{
private:
    std::string remetente;
    std::string motivoDoPagamento;
    double quantia;
    std::tm dataPagamento;
    bool parcelado;
    int quantidadeDeParcelas;
    std::vector<std::tm> dataProximasParcelas;

public:
    // Construtor padrão (sem parâmetros)
    Pagamento();

    // Construtor com parâmetros
    Pagamento(const std::string &remetente, const std::string &motivo, double quantia, const std::tm &data, bool parcelado, int quantidade, const std::vector<std::tm> &dataParcelas);

    // Destrutor
    ~Pagamento();

    // Métodos get
    std::string getRemetente() const;
    std::string getMotivoDoPagamento() const;
    double getQuantia() const;
    std::tm getDataPagamento() const;
    bool getParcelado() const;
    int getQuantidadeDeParcelas() const;
    std::vector<std::tm> getDataProximasParcelas() const;

    // Métodos set
    void setRemetente(const std::string &remetente);
    void setMotivoDoPagamento(const std::string &motivo);
    void setQuantia(double quantia);
    void setDataPagamento(const std::tm &data);
    void setParcelado(bool parcelado);
    void setQuantidadeDeParcelas(int quantidade);
    void setDataProximasParcelas(const std::vector<std::tm> &dataParcelas);
};

#endif
