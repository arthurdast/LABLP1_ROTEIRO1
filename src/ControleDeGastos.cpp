#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <string>
using namespace std;

//Construtores
ControleDeGastos::ControleDeGastos()
{
    for(Despesa &desp : despesas){
        desp = Despesa();
    }
}

ControleDeGastos::ControleDeGastos(Despesa d, int pos)
{
    for(Despesa &desp : despesas){
        desp = Despesa();
    }
    setDespesa(d,pos);
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

    for(Despesa &desp : despesas){
            tvalor = tvalor + desp.Getvalor();
    }
    return tvalor;
}
bool  ControleDeGastos::existeDespesaDoTipo(string tipoDeGasto)
{
    for(Despesa &desp : despesas){
            if(desp.GettipoDeGasto().compare(tipoDeGasto) == 0)
            {
                return true;
            }
    }
    return false;
}
void ControleDeGastos::toString()
{
    for(Despesa &desp : despesas){
        cout<<"Valor:"<<desp.Getvalor()<<" Tipo:"<<  desp.GettipoDeGasto()<<"\n";
    }
}

//END Functions
