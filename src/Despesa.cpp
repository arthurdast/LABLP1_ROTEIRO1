#include "Despesa.h"
#include <iostream>

using namespace std;

Despesa::Despesa()
{

}

Despesa::Despesa(double valor,string tipoDeGasto)
{
   setvalor(valor);
   settipoDeGasto(tipoDeGasto);

}


double Despesa::getvalor()
{
    return valor;
}
void Despesa::setvalor(double val)
{
    valor = val;
}
string Despesa::gettipoDeGasto()
{
    return tipoDeGasto;
}
void Despesa::settipoDeGasto(string val)
{
    tipoDeGasto = val;
}

void Despesa::toString()
{
     cout<<"Valor:"<<getvalor()<<" Tipo:"<<  gettipoDeGasto()<<"\n";
}
