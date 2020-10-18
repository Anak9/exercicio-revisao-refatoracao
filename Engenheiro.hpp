#include "Empregado.hpp"

class Engenheiro : public Empregado
{

public:

    /**
     *Construtores e Destrutor
     */
    Engenheiro(){}
    Engenheiro(std::string nome, double salario, int proj);
    ~Engenheiro() {}

    /**
     * Setters and Getters
     */
    void setProjetos(int proj);
    int getProjetos();

private:
    int projetos;
};
