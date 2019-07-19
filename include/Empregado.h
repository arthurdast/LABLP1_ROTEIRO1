#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>

using namespace std;

class Empregado
{
    public:
        Empregado();
        Empregado(string nome,string sobrenome,float salario);
        string getNome();
        string getSobrenome();
        float getSlaraio();
        void setNome(string nome);
        void setSobrenome(string sobrenome);
        void setSalario(float salario);
        void toString();



    protected:

    private:
        string nome;
        string sobrenome;
        float salario;
};

#endif // EMPREGADO_H
