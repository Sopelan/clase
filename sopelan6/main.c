#include <stdio.h>
#include <stdlib.h>
#include "BIBLO.h"
#define TAM 5
int const LARGO = 5;
int main()
{
    int miArray[TAM];
    int indice;
    //printf("%d -- %d", miArray , &miArray);
    //int valor = 9;
    //mostrarArray(valor);


    cargarArray( miArray , TAM );
    mostrarArray(miArray , TAM);
    indice = buscarVAlor(miArray , TAM , 5);
    if(indice != -1)
        printf("el primer indice es %d",indice);
    else
        printf("valor no existente");
    return 0;
}
