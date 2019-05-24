#include <stdio.h>
#include <stdlib.h>
#define T 5
/*typedef struct
{
    int id;
    char nombre[50]:
    float sueldo;
}eEmpleado;*/
int main()
{
    int* x;
    int* aux;
    int i;
    x = (int *)malloc(sizeof(int)*T);
    if(x != NULL)
    {
        *x = 7;
        printf("el valor es: %d \n" , *x);
    }
    x = (int *)calloc(sizeof(int),T);
    if(x != NULL)
    {
        for(i = 0; i < T ; i++)
        {
            printf("ingrese un numero: \n");
            scanf("%d",x+i);
        }
        for(i = 0; i < T ; i++)
        {
            printf("%d\n" , *(x + i));
        }
        printf("Agrego 5 mas\n");
        aux = (int*)realloc(x,sizeof(int)*(T+5));
        if(aux != NULL)
        {
            x = aux;
        }
        for(i = T ; i < T + 5; i++)
        {
            printf("ingrese un numero: \n");
            scanf("%d",x+i);
        }
        for(i = T; i < T + 5 ; i++)
        {
            printf("%d\n" , *(x + i));
        }
        printf("Quito 4:\n");
        x = (int*)realloc(x,sizeof(int)*(T + 5 - 4));
        for(i = 0; i < T + 5 - 4 ; i++)
        {
            printf("%d\n" , *(x + i));
        }
        /*free(x);
        printf("luego de free\n");
        for(i = 0; i < T ; i++)
        {
            printf("%d\n" , *(x + i));
        }
        for(i = 0; i < T ; i++)
        {
            printf("%d\n" , *(x + i));
        }*/
    }
//eEmpleado e = {1,"Pepe",500};
//eEmpleado* pE;
//pE = &e;
//printf("%d",sizeof(empleado*));0
    return 0;
}
