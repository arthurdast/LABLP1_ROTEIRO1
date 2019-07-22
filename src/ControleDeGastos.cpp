#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <string>
using namespace std;

//Construtores
ControleDeGastos::ControleDeGastos()
{

}

ControleDeGastos::ControleDeGastos(Despesa d, int pos)
{
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

    for(int i;i<10;i++){
            tvalor = tvalor + getdespesas(i).Getvalor();
    }
    return tvalor;
}
bool  ControleDeGastos::existeDespesaDoTipo(string tipoDeGasto)
{
    for(int i;i<10;i++){
            if(getdespesas(i).GettipoDeGasto().compare(tipoDeGasto) == 0)
            {
                return true;
            }
    }
    return false;
}
void ControleDeGastos::toString()
{
    for(int i;i<10;i++){
        cout<<"posicao:"<<i<< " Valor:"<<getdespesas(i).Getvalor()<<" Tipo:"<<  getdespesas(i).GettipoDeGasto()<<"\n";
    }
}

//END Functions
