#include <stdio.h>
#include <stdlib.h>
#include "bibloteca.h"
int main()
{
    /*int edad;
    int retorno=0;
    do{
        printf("ingrese una edad: ");
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);


    printf("la respuesta es : %d", retorno);
    printf("la edad es : %d", edad);*/
    /*int dato;
    dato=dividir(6);
    printf("el dato es :%d",dato);
    dato=dividir(0);
    printf("el dato es :%d",dato);*/
    /*int unfactorial;
    unfactorial=factorial(5);
    printf("la factorial es : %d", unfactorial);*/
    int midato=333;
    cambiarvalor(midato);
    printf("mi dato es : %d",midato);
    cambiarValorReferencia(&midato);
    printf("mi dato es : %d",midato);
    return 0;
}

