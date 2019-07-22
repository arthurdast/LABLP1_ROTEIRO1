#ifndef PAGAMENTO_CONTROLEDEPAGAMENTOS_H
#define PAGAMENTO_CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos{

    public:
        ControleDePagamentos();
        void setPagamento(Pagamento pagamento,int pos);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);
        void toString();
    protected:

    private:
        Pagamento pagamentos[50];
};


#endif //PAGAMENTO_CONTROLEDEPAGAMENTOS_H
