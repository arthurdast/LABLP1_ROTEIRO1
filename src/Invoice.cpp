#include "Invoice.h"
#include <iostream>
using namespace std;

//Construtores

Invoice::Invoice()
{

}

Invoice::Invoice(int numItem, string descri, int quantCompr, float preco){
    this->numItem = numItem;
    this->descri = descri;

    if(quantCompr<0){
        this->quantCompr = 0;
    }else{
        this->quantCompr = quantCompr;
    }

    if(preco<0){
        this->preco = 0.0;
    }else{
        this->preco = preco;
    }

}

//GET SET

double Invoice::getInvoiceAmount() {
    return quantCompr*preco;
}

int Invoice::getNumItem() {
    return numItem;
}

void Invoice::setNumItem(int numItem) {
    this->numItem = numItem;
}

string Invoice::getDescri() {
    return descri;
}

void Invoice::setDescri(string descri) {
    this->descri = descri;
}

int Invoice::getQuantCompr() {
    return quantCompr;
}

void Invoice::setQuantCompr(int quantCompr) {
    this->quantCompr = quantCompr;
}

float Invoice::getPreco() {
    return preco;
}

void Invoice::setPreco(float preco) {
    this->preco = preco;
}

//END GET SET

// FUNCTION
void Invoice::toString()
{
    cout<<"Numero:"<<numItem<<" Descricao:"<<descri<<" Quantidade:"<<quantCompr<< " Preco:" <<preco<< " || Valor total:" <<getInvoiceAmount()<<"\n";
}

// END FUNCTION

