#include <stdio.h>
#include <stdlib.h>
#include "sopelan.h"
#define TAM 2
int main()
{
    eProducto producto[TAM];
    //producto = pedirProducto();
    //mostraProducto(producto);
    cargarArray(TAM , producto);
    mostrarArray(TAM , producto);

    return 0;
}