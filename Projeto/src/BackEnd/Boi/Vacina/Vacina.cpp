#include <vector>
#include <ctime>
#include <string>

class Vacina {
private:
    std::string nomeVascina;
    std::tm dataAplicacao;
    std::tm proximaAplicacao;
    bool ultimaDose;
    double ml;
public:
    Vacina(const std::string& nome, const std::string& dataAplicacaoStr,
           int diasProximaAplicacao,double ml ,bool ultimaDose);
    ~Vacina();
};

Vacina::Vacina(const std::string& nome, const std::string& dataAplicacaoStr,
               int diasProximaAplicacao, double ml ,bool ultimaDose)
    : nomeVascina(nome), ultimaDose(ultimaDose) {
    this->nomeVascina =nome;
    this->ultimaDose=ultimaDose;
    this->ml=ml;
    struct tm timeinfo = {0};
    if (strptime(dataAplicacaoStr.c_str(), "%d/%m/%Y", &timeinfo) != nullptr) {
        dataAplicacao = timeinfo;
        if(!ultimaDose){ 
        std::time_t dataAplicacaoTimeT = std::mktime(&dataAplicacao);
        std::time_t proximaAplicacaoTimeT = dataAplicacaoTimeT + diasProximaAplicacao * 24 * 60 * 60; 
        proximaAplicacao = *std::localtime(&proximaAplicacaoTimeT);
        }
    }
   
}

Vacina::~Vacina() {
}
