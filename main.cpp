#include <iostream>
#include "Data.h"
#include "Invoice.h"
#include "Empregado.h"
#include "Pessoa.h"
#include "Despesa.h"
#include "ControleDeGastos.h"
#include "Pagamento.h"
#include "ControleDePagamentos.h"

#include <iostream>
using namespace std;

int main()
{


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
    Empregado empr1 ("Arthur","Mendes",1000);
    Empregado *empr2 = new Empregado("Derzu", "Omaia ", 17650);

    empr1.toString();
    empr2->toString();

    empr1.setSalario(empr1.getSlaraio()*1.1);
    cout<<"Depois do aumento \n";
    empr1.toString();


     //Questão 4

    Pessoa pess1 ("Arthur Mendes",20,32555555);
    Pessoa pess2 ("Derzu Omaia",21, 32167093);
    pess1.toString();
    pess2.toString();


     //Questão 5


    ControleDeGastos controle;
    Despesa desp1(250,"luz");
    Despesa desp2(85,"gas");
    Despesa desp3(150,"aqua");

    controle.setDespesa(desp1,1);
    controle.setDespesa(desp2,2);
    controle.setDespesa(desp3,3);

    controle.toString();

    cout<<"Total das despesas: "<<controle.calculaTotalDeDespesas()<<"\n";


    if(controle.existeDespesaDoTipo("luz"))
    {
        cout<<"Tem Despesa do tipo luz.\n";
    }

    //Questão 6

    ControleDePagamentos ctrpgt;
    Pagamento pag1("arthur",650);
    Pagamento pag2("Derzu",350);
    Pagamento pag3("Aba",150);

    ctrpgt.setPagamento(pag1);
    ctrpgt.setPagamento(pag2);
    ctrpgt.setPagamento(pag3);

    cout << ctrpgt.calculaTotalDePagamentos() << endl;
    cout << ctrpgt.existePagamentoParaFuncionario("arthur") << endl;
    cout << ctrpgt.existePagamentoParaFuncionario("") << endl;

}
