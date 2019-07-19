#include "Data.h"
#include <iostream>
using namespace std;

//Construtores
Data::Data()
{

}
Data::Data(int dia, int mes, int ano)
{
    this->dia=dia;
    this->mes=mes;
    this->ano=ano;
}

//GET SET
int Data::getDia()
{
 return dia;
}
int Data::getMes()
{
 return mes;
}
int Data::getAno()
{
 return ano;
}

void Data::setDia(int dia)
{
    this->dia=dia;
}
void Data::setMes(int mes)
{
 this->mes=mes;
}
void Data::setAno(int ano)
{
    this->ano=ano;
}
//END GET SET

// FUNCTION
void Data::avancaDia()
{
    this->dia++;

    if( dia == 32 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes ==10 || mes == 12 ))
    {
        this->dia = 1;
        mes ++;
    } else if( dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11 ))
    {
        this->dia = 1;
        mes ++;
    }else if( dia == 29 && mes == 2 )
    {
        this->dia = 1;
        mes ++;
    }
    if (mes > 12){
        this->mes = 1;
        ano++;
    }
}
void Data::toString()
{
    cout<<"Dia:"<<dia<<" Mes:"<<mes<< " Ano:" <<ano<<"\n";
}
// END FUNCTION

