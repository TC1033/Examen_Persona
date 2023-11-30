#include <iostream>
#include "Persona.hpp"
using namespace std;

void llenaArreglo(Persona amigos[], int cantidad){
    string nom;
    int d, m;
    for(int i=0; i<cantidad;i++){
        cout << "Datos de la Persona"<< i+1 << std::endl;
        // Solo nombre, una sola palabra para simplificar el proceso
        cout<<"Nombre: ";
        cin>>nom;
        cout <<"Ingresa dia y mes de cumpleaños (separados con espacio): ";
        cin >> d >> m;
        /*Modifica ahora al objeto Persona de la posición i del arreglo
        con los datos recibidos*/

}

void imprimePersonajes(Persona amigos[], int cantidad){
    //Implementa la función
}


int main()
{
    const int NUM = 3; //constante para el tamaño del arreglo
    //Agrega las instrucciones necesarias de acuerdo a lo que te solicitan en el documento del examen

    return 0;
}
