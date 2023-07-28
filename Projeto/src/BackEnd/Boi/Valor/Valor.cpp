#include <vector>
class Valor {
private:
    double valorAtual;
    std::vector<double> valoresAnteriores;
    double valorKgAtual;
    double valorPretendido;
    bool alertaMelhorValor;
public:
    Valor(double valorAtual, double valorKgAtual, double valorPretendido)
        : valorAtual(valorAtual), valorKgAtual(valorKgAtual), valorPretendido(valorPretendido) {
        alertaMelhorValor = false;
    
    }

    double getValorAtual(){
        return this->valorAtual;
    }

    double getvalorPretendido(){
        return this->valorPretendido;
    }

    

    double getValorKgAtual(){
        return this->valorKgAtual;
    }

    void atualizaValor(double novoValor) {
        valoresAnteriores.push_back(valorAtual);
        valorAtual = novoValor;
        atualizaAlertaMelhorValor();
    }

    void atualizaValorKgAtual(double novoValorKg) {
        valorKgAtual = novoValorKg;
        atualizaAlertaMelhorValor();
    }

    void atualizaValorPretendido(double novoValorPretendido) {
        valorPretendido = novoValorPretendido;
        atualizaAlertaMelhorValor();
    }

    void atualizaAlertaMelhorValor() {
        alertaMelhorValor = (valorAtual >= valorPretendido);
    }

    // Aqui você pode adicionar métodos para acessar os valores privados (getters) se necessário.
};
