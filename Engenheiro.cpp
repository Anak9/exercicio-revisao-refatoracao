#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, double salario, int proj) : Empregado(nome,salario)
{
    this->projetos = proj;
}

void Engenheiro::setProjetos(int proj)
{
    this->projetos = proj;
}

int Engenheiro::getProjetos()
{
    return this->projetos;
}
