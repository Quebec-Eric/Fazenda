#ifndef PAGAMENTO_H
#define PAGAMENTO_H

class Pagamento
{
private:
    std::string remetente;
    std::string motivoDoPagamento;
    double quantia;
    std::tm dataPagamento;
    bool parcelado;
    int quantidadeDeParcelas;
    std::vector<tb> dataProximasParcelas;

public:
    Pagamento();
    Pagamento(std::string remetente, std::string motivoDoPagamento,double quantia, std::tm dataPagamennto,
    bool parcelado,int quantidadedeParcelas,std::vector<tb> dataProximasParcelas);
    ~Pagamento();
    getRemetente();
    getMotivoDoPagamento();
    getQuantia();
    getDataPagamento();
    getParcaledo();
    getQuantidadeDeParcelas();
    getDataProximasParcelas();
    setRemetente();
    setMotivoDoPagamento();
    setQuatia();
    setDataPagamento();
    setParcelado();
    setQuantidadeDeParcelas();
    setDataProximasParcelas();
    
};




#endif 