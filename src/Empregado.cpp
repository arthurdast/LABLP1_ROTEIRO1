#include "Empregado.h"
#include <iostream>
using namespace std;

//Construtores
Empregado::Empregado()
{
}

Empregado::Empregado(string nome,string sobrenome,float salario)
{
        this->nome     =nome;
        this->sobrenome=sobrenome;
        this->salario  =salario;
}

//GET SET
string Empregado::getNome()
{
 return nome;
}
string Empregado::getSobrenome()
{
 return sobrenome;
}
float Empregado::getSlaraio()
{
 return salario;
}

void Empregado::setNome(string nome)
{
    this->nome=nome;
}
void Empregado::setSobrenome(string sobrenome)
{
    this->sobrenome=sobrenome;
}
void Empregado::setSalario(float salario)
{
    this->salario=salario;
}
//END GET SET

// FUNCTION
void Empregado::toString()
{
    cout<<"Nome:"<<nome<<" "<<sobrenome<< " Salario:" <<salario<< " Salario anual:" <<salario*13<<"\n";
}
// END FUNCTION

