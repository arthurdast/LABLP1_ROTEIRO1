#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa
{
      public:
        Pessoa();
        Pessoa(string nome,int idade,int telefone);
        Pessoa(string nome);
        string getNome();
        int getIdade();
        int getTelefone();
        void setNome(string nome);
        void setIdade(int idade);
        void setTelefone(int telefone);
        void toString();

    protected:

    private:
        string nome;
        int idade;
        int telefone;
};

#endif // PESSOA_H
