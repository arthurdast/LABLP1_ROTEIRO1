#include "Pessoa.h"
#include <iostream>
using namespace std;

//Construtores
Pessoa::Pessoa()
{
}

Pessoa::Pessoa(string nome,int idade,int telefone)
{
        this->nome    =nome;
        this->idade   =idade;
        this->telefone=telefone;
}
Pessoa::Pessoa(string nome)
{
        this->nome    =nome;

}


//GET SET
string Pessoa::getNome()
{
 return nome;
}
int Pessoa::getIdade()
{
 return idade;
}
int Pessoa::getTelefone()
{
 return telefone;
}

void Pessoa::setNome(string nome)
{
    this->nome=nome;
}
void Pessoa::setIdade(int idade)
{
    this->idade=idade;
}
void Pessoa::setTelefone(int telefone)
{
    this->telefone=telefone;
}
//END GET SET

// FUNCTION
void Pessoa::toString()
{
    cout<<"Nome:"<<nome<<" Idade:" <<idade<< " Telefone:" <<telefone<<"\n";
}
// END FUNCTION

