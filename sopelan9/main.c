#include <stdio.h>
#include <stdlib.h>
#include "sopelan.h"
#define TAM 5
int main()
{
    eProducto producto;
    producto = pedirProducto();
    mostraProducto(producto);


    return 0;
}
