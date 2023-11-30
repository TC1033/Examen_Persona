
#include "Fecha.hpp"
// ===============
// implementations

Fecha::Fecha(){
   //implementa el constructor default inicializando (dia 1 mes 1)
}

Fecha::Fecha(int d, int m){
   //vamos a cambiar los datos usando los setters éstos tendrán las validaciones
   // No le muevas nada, ya está listo
   setDia(d);
   setMes(m);
}

// Implementa los getters


// Implementa el setter de día sólo validaremos que el día que nos pasen como parámetro
//  esté entre 1 y 31, si no es así iniciamos a 1




// Implementa el setter de mes, sólo validaremos que el mes que nos pasen como parámetro
//  esté entre 1 y 12, si no es asi iniciamos a 1



// Implementa el imprime, que se despliegue la Fecha en el formato que tu elijas


// Implementa el método iguales, para que una fecha sea igual a otra es porque el día y el mes son iguales de las dos Fechas
