#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <iostream>
using namespace std;

class ControleDeGastos
{
    public:
        ControleDeGastos();
        ControleDeGastos(Despesa d, int pos);

        Despesa getdespesas(int pos);
        void setDespesa(Despesa d, int pos);
        double calculaTotalDeDespesas();
        bool  existeDespesaDoTipo(string tipoDeGasto);
        void toString();

    protected:

    private:
        Despesa despesas[50];
};

#endif // CONTROLEDEGASTOS_H
