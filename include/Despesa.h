#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

using namespace std;

class Despesa
{
    public:
        Despesa();
        Despesa(double valor,string tipoDeGasto);
        double getvalor();
        void setvalor(double valor);
        string gettipoDeGasto();
        void settipoDeGasto(string tipoDeGasto);
        void toString();

    protected:

    private:
        double valor;
        string tipoDeGasto;
};

#endif // DESPESA_H
