#pragma once // previene definiciones múltiples (igual que guardas)
#include <iostream>
// Es una Fecha de cumpleaños (sólo día y mes)
class Fecha{
    public:
        Fecha();
        Fecha (int, int);
        int getDia() const;
        int getMes() const;
        void setDia(int);
        void setMes(int);
        int iguales(Fecha);
        void imprime();
    private:
        int dia;
        int mes;
};
