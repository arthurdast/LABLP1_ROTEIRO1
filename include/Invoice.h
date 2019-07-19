#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

using namespace std;

class Invoice
{
    public:
        Invoice();
        Invoice(int numItem, string descri, int quantCompr, float preco);
        double getInvoiceAmount();
        int getNumItem();
        void setNumItem(int numItem);
        string getDescri();
        void setDescri(string descri);
        int getQuantCompr();
        void setQuantCompr(int quantCompr);
        float getPreco();
        void setPreco(float preco);
        void toString();



    protected:

    private:
        int numItem;
        string descri;
        int quantCompr;
        float preco;
};

#endif // INVOICE_H
