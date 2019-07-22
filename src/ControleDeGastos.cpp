#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <string>
using namespace std;

//Construtores
ControleDeGastos::ControleDeGastos()
{

}


//GET E SET
Despesa ControleDeGastos::getdespesas(int pos)
{
    return despesas[pos];
}
void ControleDeGastos::setDespesa(Despesa d, int pos)
{
    despesas[pos] = d;
}
//END GET E SET

//Functions
double ControleDeGastos::calculaTotalDeDespesas()
{
    double tvalor=0;
    for(int i=0 ; i < 50 ; i++){
         tvalor = tvalor + despesas[i].getvalor();
    }
    return tvalor;
}

bool  ControleDeGastos::existeDespesaDoTipo(string tipoDeGasto)
{
    for(int i=0 ; i < 50 ; i++){
         if(despesas[i].gettipoDeGasto().compare(tipoDeGasto) == 0)
            {
                return true;
            }
    }
    return false;
}
void ControleDeGastos::toString()
{
    for(int i=0 ; i < 50 ; i++){
        despesas[i].toString();
    }
}

//END Functions
