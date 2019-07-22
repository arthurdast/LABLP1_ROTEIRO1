#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

using namespace std;

class Despesa
{
    public:
        Despesa();
        Despesa(double valor,string tipoDeGasto);
        double Getvalor();
        void Setvalor(double valor);
        string GettipoDeGasto();
        void SettipoDeGasto(string tipoDeGasto);

    protected:

    private:
        double valor;
        string tipoDeGasto;
};

#endif // DESPESA_H
