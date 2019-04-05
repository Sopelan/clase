#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre [50] ;
    int largo;
    int compara;
    printf("ingrese su nombre: \n");
    //scanf("%[^\n]",nombre);
    //fgets(nombre , 50 , stdin)
    gets(nombre);
    //largo = strlen(nombre);
    printf("Su nombre es : %s\n", nombre);
    //printf("%d" , largo);
    /*if(nombre == "pepe")
        printf("usted se llama pepe");*/
    compara = strcmp(nombre , "pepe");
    printf("%d" , compara);
    return 0;
}
