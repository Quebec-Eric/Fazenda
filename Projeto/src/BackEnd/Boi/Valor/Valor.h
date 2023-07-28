#include <vector>

class Valor {
private:
    double valorAtual;
    std::vector<double> valoresAnteriores;
    double valorKgAtual;
    double valorPretendido;
    bool alertaMelhorValor;
public:
    Valor(double valorAtual, double valorKgAtual, double valorPretendido);
    void atualizaValor(double novoValor);
    void atualizaValorKgAtual(double novoValorKg);
    void atualizaValorPretendido(double novoValorPretendido);
    void atualizaAlertaMelhorValor();
    double getValorAtual();
    double getvalorPretendido();
     double getValorKgAtual();
    // Aqui você pode adicionar métodos para acessar os valores privados (getters) se necessário.
};
