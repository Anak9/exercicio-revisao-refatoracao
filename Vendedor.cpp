#include "Vendedor.hpp"

Vendedor::Vendedor(std::string nome, double salario, double quota) : Empregado(nome,salario)
{
    this->quotaMensalVendas = quota;
}

double Vendedor::quotaTotalAnual()
{
    return this->quotaMensalVendas * 12;
}

void Vendedor::setQuotaMensalVendas( double quota)
{
    this->quotaMensalVendas = quota;
}
