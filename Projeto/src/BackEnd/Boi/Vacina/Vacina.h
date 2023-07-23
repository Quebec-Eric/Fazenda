#ifndef VACINA_H
#define VACINA_H

#include <string>
#include <ctime>

class Vacina {
private:
    std::string nomeVascina;
    std::tm dataAplicacao;
    std::tm proximaAplicacao;
    bool ultimaDose;
    double ml;
public:
    Vacina(const std::string& nome, const std::string& dataAplicacaoStr,
           int diasProximaAplicacao, double ml, bool ultimaDose);
    ~Vacina();

    // Métodos de acesso poderiam ser adicionados aqui, por exemplo:
    // std::string getNomeVascina() const;
    // std::tm getDataAplicacao() const;
    // std::tm getProximaAplicacao() const;
    // bool getUltimaDose() const;
    // double getMl() const;
};

#endif // VACINA_H
