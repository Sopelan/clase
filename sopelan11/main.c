#include <stdio.h>
#include <stdlib.h>
#include "sopelan.h"
#define TAM 5

int main()
{
    int opcion;
    eProducto producto[10];
    eProvedor provedor[3];
    inicializarProductos(producto);
    inicializarProvedor(provedor);

    mostrarTodo( producto,  10 ,  provedor, 3);
    //producto = pedirProducto();
    //mostraProducto(producto);
    //inicializarProductos(producto , TAM);
    //mostrarArray(TAM , producto);
    //cargarArray(TAM , producto);
   // mostrarArray(TAM , producto);
    /*cargarEnCero(producto , TAM);
    do{
            printf("1.ALTA\n2.BAJA\n3.MODIFICACION\n4.MOSTRAR\n5.SALIR ");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                insertProducto(TAM,producto);
                break;
            case 2:
                borrarProducto(TAM, producto);
                break;
            case 3:
                editarProducto(TAM,producto);
                break;
            case 4:
                mostrarArray(TAM,producto);
                break;
            }
    }while(opcion!=10);
    return 0;*/
}
