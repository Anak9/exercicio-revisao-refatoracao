#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado
{

public:

    /**
     *Construtores e Destrutor
     */
    Empregado(){}
    Empregado(std::string nome, double salario);
    ~Empregado(){}

    /**
     * Essa fun��o calcula o pagamento mensal do empregado considerando as horas extras
     * O valor da hora extra � 50% maior do que o valor da hora normal
     */
    double pagamentoMes(double horasTrabalhadas);

    /**
     * Setters and Getters
     */
    void setNome(std::string nome);
    std::string getNome();
    void setSalarioHora(double salario);

private:
    std::string nome;
    double salarioHora;
    static int constexpr horasNormaisDiarias = 8;
};

#endif
