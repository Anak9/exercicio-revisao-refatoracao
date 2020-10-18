#include "Empregado.hpp"

class Vendedor : public Empregado
{
public:
    /**
     *Construtores e Destrutor
     */
    Vendedor(){}
    Vendedor(std::string nome, double salario, double quota);
    ~Vendedor(){}

    double quotaTotalAnual();

    /**
     * Setter
     */
    void setQuotaMensalVendas( double quota);


private:
    double quotaMensalVendas;
};
