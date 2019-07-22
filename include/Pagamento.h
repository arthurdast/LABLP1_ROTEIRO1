#ifndef PAGAMENTO_PAGAMENTO_H
#define PAGAMENTO_PAGAMENTO_H
#include <iostream>
using namespace std;

class Pagamento {

    public:
        Pagamento( string nomeDoFuncionario,double valorPagamento);
        Pagamento();
        double getValorPagamento();
        string getNomeDoFuncionario();
        void setValorPagamento(double valorPagamento);
        void setNomeDoFuncionario(string nomeDoFuncionario);
    protected:

    private:
        double valorPagamento;
        string nomeDoFuncionario;
};
#endif //PAGAMENTO_PAGAMENTO_H
