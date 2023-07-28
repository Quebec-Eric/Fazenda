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
    std::string getNomeVascina();
    std::tm getDataAplicacao();
    std::tm getProximaAplicacao();
    bool getUltimaDose();
    double getMl();
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

std::string Vacina::getNomeVascina(){
    return this->nomeVascina;
}

bool Vacina::getUltimaDose(){
    return this->ultimaDose;
}

double Vacina::getMl(){
    return this->ml;
}

std::tm Vacina::getProximaAplicacao(){
    return this->proximaAplicacao;
}

std::tm Vacina::getDataAplicacao(){
    return this->dataAplicacao;
}

Vacina::~Vacina() {

}
