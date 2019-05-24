#include "empleado.h"
eEmpleado* nuevoEmpleado()
{
    eEmpleado* retornoEmpleado;
    retornoEmpleado = (eEmpleado*) calloc(sizeof(eEmpleado),1);
    return retornoEmpleado;
}
int mostrarEmpleado(eEmpleado* unEmpleado)
{
    if(unEmpleado != NULL)
    {
        printf("%d--%s--%.2f\n",unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldo);
        return 1;
    }
    return 0;
}
eEmpleado* nuevoEmpleadoParametrio(int legajo, char* nombre , float sueldo)
{
    eEmpleado* retornoEmpleado;
    retornoEmpleado = nuevoEmpleado();
    if(retornoEmpleado != NULL)
    {
        setLegajo(retornoEmpleado,legajo);
        strcpy(retornoEmpleado->nombre , nombre);
        retornoEmpleado->sueldo = sueldo;
    }

    return retornoEmpleado;
}
int setLegajo(eEmpleado* pEmpleado , int legajo )
{
   int esCorrecto = 0;
   if(pEmpleado != NULL && legajo >= 1000)
   {
       pEmpleado->legajo = legajo;
       esCorrecto = 1;
   }

}
int getLegajo(eEmpleado* pEmpleado )
{
    int retornoLegajo = 0;
    if(pEmpleado != NULL)
        retornoLegajo = pEmpleado->legajo;
    return retornoLegajo;
}
void destructorEmpleado(eEmpleado* pEmpleado)
{
    free(pEmpleado);
}
