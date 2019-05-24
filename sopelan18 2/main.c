#include <stdio.h>
#include <stdlib.h>
#define T 5
#include "empleado.h"
int main()
{
    eEmpleado* unEmpleado;
    unEmpleado = nuevoEmpleadoParametrio(1001,"Pedro",10000);

    eEmpleado* otroEmpleado;
    otroEmpleado = nuevoEmpleadoParametrio(1002,"Maria",15000);
    if(getLegajo(unEmpleado )== 1001)
    {
        mostrarEmpleado(unEmpleado);
    }

    mostrarEmpleado(otroEmpleado);
    return 0;
}

