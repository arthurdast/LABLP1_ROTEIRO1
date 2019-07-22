#include "Pagamento.h"


Pagamento::Pagamento(string nomeDoFuncionario,double valorPagamento) {
    this->nomeDoFuncionario = nomeDoFuncionario;
    this->valorPagamento = valorPagamento;
}

Pagamento::Pagamento() {
    valorPagamento = 0.0;
    nomeDoFuncionario = "vazio";
}

double Pagamento::getValorPagamento() {
    return valorPagamento;
}

void Pagamento::setValorPagamento(double valorPagamento) {
    this->valorPagamento = valorPagamento;
}

string Pagamento::getNomeDoFuncionario() {
    return nomeDoFuncionario;
}

void Pagamento::setNomeDoFuncionario(string nomeDoFuncionario) {
    Pagamento::nomeDoFuncionario = nomeDoFuncionario;
}

