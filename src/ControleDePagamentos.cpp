#include "ControleDePagamentos.h"

//contrutor
ControleDePagamentos::ControleDePagamentos(){

}
//END contrutor

//GET SET
void ControleDePagamentos::setPagamento(Pagamento pagamento,int pos) {
    pagamentos[pos] = pagamento ;
}
//END GET E SET


//FUNCTIOn
double ControleDePagamentos::calculaTotalDePagamentos() {
    double total=0.0;
    for(int i = 0 ; i < 50 ; i++){
       total +=pagamentos[i].getValorPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFuncionario) {
    for(int i = 0 ; i < 50 ; i++){
       if(!pagamentos[i].getNomeDoFuncionario().compare(nomeFuncionario) ){
           return true;
       }
    }
    return false;
}

void ControleDePagamentos::toString(){

    for(int i = 0 ; i < 50 ; i++){
        cout << pagamentos[i].getValorPagamento() << endl;
    }

}
//END FUNCTIOn
