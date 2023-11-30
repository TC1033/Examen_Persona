#pragma once
#include "Fecha.hpp"

class Persona{
    public:
        Persona();
        Persona(std::string, Fecha);
        //Agrega el encabezado de getters

        //Agrega el encabezado de setters

        void imprime();
    private:
        std::string nombre;
        Fecha cumple;
};
