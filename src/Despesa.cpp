#include "Despesa.h"
#include <iostream>

using namespace std;

Despesa::Despesa()
{

}

Despesa::Despesa(double valor,string tipoDeGasto)
{
   Setvalor(valor);
   SettipoDeGasto(tipoDeGasto);

}


double Despesa::Getvalor()
{
    return valor;
}
void Despesa::Setvalor(double val)
{
    valor = val;
}
string Despesa::GettipoDeGasto()
{
    return tipoDeGasto;
}
void Despesa::SettipoDeGasto(string val)
{
    tipoDeGasto = val;
}
