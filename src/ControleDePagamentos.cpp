#include "ControleDePagamentos.h"

//contrutor
ControleDePagamentos::ControleDePagamentos(){
    for(Pagamento &pagamento : pagamentos){
        pagamento = Pagamento();
    }
}
//END contrutor

//GET SET
void ControleDePagamentos::setPagamento(Pagamento pagamento) {
    for(Pagamento &pgt : pagamentos){
        if(pgt.getNomeDoFuncionario()== "vazio" && pgt.getValorPagamento() == 0.0){
            pgt = pagamento;
            break;
        }
    }
}
//END GET E SET


//FUNCTIOn
double ControleDePagamentos::calculaTotalDePagamentos() {
    double total=0.0;
    for(Pagamento a :pagamentos){
        total += a.getValorPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFuncionario) {
    for(Pagamento a :pagamentos){
       if(a.getNomeDoFuncionario() == nomeFuncionario){
           return true;
       }
    }
    return false;
}

void ControleDePagamentos::toString(){

    for(Pagamento a :pagamentos){
        cout << a.getValorPagamento() << endl;
    }

}
//END FUNCTIOn
