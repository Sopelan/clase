#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre [6] = "juan";
    char otroNombre [50] = "jose Perez" ;
    int largo;
    int compara;
    //strlwr(otroNombre);
    strcat(nombre , otroNombre);
    //strupr(otroNombre);
    //strcpy(nombre ,otroNombre);
    //strncpy(nombre , otroNombre , 5);
    //nombre = "juan";
    //printf("ingrese su nombre: \n");
    //scanf("%[^\n]",nombre);
    //fgets(nombre , 50 , stdin)
    //scanf("%s",nombre);
    //gets(nombre);
    //largo = strlen(nombre);
    printf("Su nombre es : %s\n", nombre);
    //printf("%d" , largo);
    /*if(nombre == "pepe")
        printf("usted se llama pepe");*/
    //compara = strcmp(nombre , "pepe");
    //compara = stricmp(nombre , "pepe");
    //printf("%d" , compara);
    return 0;
}
