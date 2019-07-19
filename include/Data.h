#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data();
        Data(int dia, int mes, int ano);
        int getDia();
        int getMes();
        int getAno();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        void avancaDia();
        void toString();


    protected:

    private:
        int dia;
        int mes;
        int ano;
};

#endif // DATA_H
