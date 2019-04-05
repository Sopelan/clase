#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre [50] ;
    printf("ingrese su nombre: \n");
    //scanf("%s",nombre);
    gets(nombre);
    printf("Su nombre es : %s\n", nombre);

    return 0;
}
