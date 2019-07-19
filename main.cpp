#include <iostream>
#include "Data.h"
#include "Invoice.h"
#include "Empregado.h"
using namespace std;

int main()
{
    /*

    //Questão 1
    Data *data1 =new Data(1,1,1);
    int aux = 1;

    while(aux < 500)
    {
        data1->toString();
        data1->avancaDia( );
        aux++;
    }

    //Questão 2
    Invoice *inv1 = new Invoice(1, "Carro", 1, 55.500);
    Invoice *inv2 = new Invoice(2, "Moto", 3, 17.999);

    inv1->toString();
    inv2->toString();


    //Questão 3
    Empregado *empr1 = new Empregado("Arthur","Mendes",1000);
    Empregado *empr2 = new Empregado("Derzu", "Omaia ", 17650);

    empr1->toString();
    empr2->toString();

    empr1->setSalario(empr1->getSlaraio()*1.1);
    cout<<"Depois do aumento \n";
    empr1->toString();
     */

     //Questão 4

    Pessoa *pess1 = new Empregado("Arthur","Mendes",1000);
    Pessoa *pess2 = new Empregado("Derzu", "Omaia ", 17650);


}
