#include <stdio.h>
#include <stdlib.h>
#define T 5
#include "empleado.h"
eEmpleado* fantasma(int legajo , char* nombre ,float sueldo);

int main()
{
    eEmpleado* unEmpleado = fantasma(100,"Pedro",10000) ;
    //unEmpleado = nuevoEmpleadoParametrio(1001,"Pedro",10000);

    //eEmpleado* otroEmpleado;
    //otroEmpleado = nuevoEmpleadoParametrio(1002,"Maria",15000);
    /*if(getLegajo(unEmpleado )== 1001)
    {
        mostrarEmpleado(unEmpleado);
    }*/
    mostrarEmpleado(unEmpleado);
    /*destructorEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);*/
    return 0;
}
eEmpleado* fantasma(int legajo , char* nombre ,float sueldo)
{
    eEmpleado empleado;
    empleado.legajo = legajo;
    strcpy(empleado.nombre , nombre);
    empleado.sueldo = sueldo;
    return &empleado;
}
