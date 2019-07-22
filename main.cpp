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

//Fun��o main das questoes para facilitar.Implementa��o abaixo da main.
void q1();
void q2();
void q3();
void q4();
void q5();
void q6();

//MAIN
int main()
{

    //Quest�o 1
        q1();

    //Quest�o 2
        //q2();

    //Quest�o 3
        //q3();

    //Quest�o 4
        //q4();

    //Quest�o 5
        //q5();

    //Quest�o 6
        //q6();

}
//implementa��o da main das quest�es

void q1(){
    //Quest�o 1
    Data *data1 =new Data(1,1,1);
    int aux = 1;

    while(aux < 500)
    {
        data1->toString();
        data1->avancaDia( );
        aux++;
    }
}
void q2(){
    //Quest�o 2
    Invoice *inv1 = new Invoice(1, "Carro", 1, 55.500);
    Invoice *inv2 = new Invoice(2, "Moto", 3, 17.999);

    inv1->toString();
    inv2->toString();

}
void q3(){
    //Quest�o 3
    Empregado empr1 ("Arthur","Mendes",1000);
    Empregado *empr2 = new Empregado("Derzu", "Omaia ", 17650);

    empr1.toString();
    empr2->toString();

    empr1.setSalario(empr1.getSlaraio()*1.1);
    cout<<"Depois do aumento \n";
    empr1.toString();

}
void q4(){
  //Quest�o 4

    Pessoa pess1 ("Arthur Mendes",20,32555555);
    Pessoa pess2 ("Derzu Omaia",21, 32167093);
    pess1.toString();
    pess2.toString();


}
void q5(){
//Quest�o 5


    ControleDeGastos *controle = new ControleDeGastos();
    Despesa *desp1= new Despesa(250,"luz");
    Despesa *desp2= new Despesa(85,"gas");
    Despesa *desp3= new Despesa(250,"aqua");

    controle->setDespesa(*desp1,1);
    controle->setDespesa(*desp2,2);
    controle->setDespesa(*desp3,3);


    cout<<"Total das despesas: "<<controle->calculaTotalDeDespesas()<<"\n";


    if(controle->existeDespesaDoTipo("luz"))
    {
        cout<<"Tem Despesa do tipo luz.\n";
    }//Quest�o 1
}
void q6(){
 //Quest�o 6

    ControleDePagamentos *ctrpgt = new ControleDePagamentos();
    Pagamento *pag1=new Pagamento("arthur",650);
    Pagamento *pag2=new Pagamento("Derzu",350);
    Pagamento *pag3=new Pagamento("Aba",150);

    ctrpgt->setPagamento(*pag1,1);
    ctrpgt->setPagamento(*pag2,2);
    ctrpgt->setPagamento(*pag3,3);

    cout << ctrpgt->calculaTotalDePagamentos() << endl;
    cout << ctrpgt->existePagamentoParaFuncionario("arthur") << endl;
    cout << ctrpgt->existePagamentoParaFuncionario("655") << endl;

}
