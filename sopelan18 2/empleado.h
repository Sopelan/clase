#include <stdio.h>
#include <stdlib.h>
#define T 5
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}eEmpleado ;
eEmpleado* nuevoEmpleado();
eEmpleado* nuevoEmpleadoParametrio(int legajo, char* nombre , float sueldo);
int mostrarEmpleado(eEmpleado*);
int setLegajo(eEmpleado* , int );
int getLegajo(eEmpleado* );
void destructorEmpleado(eEmpleado* pEmpleado);
