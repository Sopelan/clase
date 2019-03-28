#include <stdio.h>
#include <stdlib.h>
#include "bibloteca.h"
int Esunmumero(char *cadena)
{
    printf("\npalabra por parametros %s",cadena);
    int indice=0;
    int retorno=0;
    while(cadena[indice]!='\0')
    {
        if(cadena[indice]<'\0' ||  cadena[indice]> '9')
        {
            break;
        }

        else
        {
            indice++;
        }
    }
    if(cadena[indice]=='\0')
    {
        retorno=1;
    }
    return retorno;

}
int main()
{
    /*int edad;
    int retorno=0;
    do{
        printf("ingrese una edad: "\n);
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);


    printf("la respuesta es : %d\n", retorno);
    printf("la edad es : %d\n", edad);
    int dato;
    dato=dividir(6);
    printf("el dato es :%d\n",dato);
    dato=dividir(0);
    printf("el dato es :%d\n",dato);
    int unfactorial;
    unfactorial=factorial(5);
    printf("la factorial es : %d\n", unfactorial);
    int midato=333;
    cambiarvalor(midato);
    printf("mi dato es : %d\n",midato);
    cambiarValorReferencia(&midato);
    printf("mi dato es : %d\n",midato);*/

    char letra;
    char palabra[20];
    int es;
    int numero;

    /*scanf("%d",&numero);
    fflush(stdin);
    printf("numero %d",numero);

    /*scanf("%d",&letra);
    fflush(stdin);
    printf("letra %d",letra);

    scanf("%c",&letra);
    fflush(stdin);
    printf("\nletra %c",letra);*/

    scanf("%s",&palabra);
    fflush(stdin);
    printf("\npalabra %s",palabra);
    es=Esunmumero(palabra);
    if(es==1)
    {
        printf("es correcto");
    }
    else
    {
        printf(" no lo es");
    }

    /*int indice=0;
    while(indice<10)
    {
        if(palabra[indice]=='\0')
        {
            printf("el barra cerro esta en %d ", indice);
        }
        printf("\nletra %c",palabra[indice]);
        indice++
    }*/
    return 0;

}

