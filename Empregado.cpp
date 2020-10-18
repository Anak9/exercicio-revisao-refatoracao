#include "Empregado.hpp"

Empregado::Empregado(std::string nome, double salario)
{
    this->nome = nome;
    this->salarioHora = salario;
}

void Empregado::setNome (std::string nome)
{
    this->nome = nome;
}

std::string Empregado::getNome()
{
    return this->nome;
}

void Empregado::setSalarioHora(double salario)
{
    this->salarioHora = salario;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {

      double t = horasTrabalhadas;

	  /** Cálculo de hora extra (+50% se horasTrabalhadas > 8) */
      if (horasTrabalhadas > horasNormaisDiarias)
      {
        double horaExtra = horasTrabalhadas - horasNormaisDiarias;
        t += horaExtra / 2;
      }

	  return t * this->salarioHora;
}
