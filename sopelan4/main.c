#include <stdio.h>
#include <stdlib.h>
int dividir(int numero);
int esDistintoCero(int numero);
int factorial(int numero);

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
    int unfactorial;
    unfactorial=factorial(5);
    printf("la factorial es : %d", unfactorial);
    return 0;
}
int dividir(int numero)
{
    int respuesta;
    int resultado;
    respuesta=esDistintoCero(numero);
    if(respuesta==1)
    {
        resultado =numero/2;
    }
    return respuesta;
}
int esDistintoCero(int numero)
{
    if(numero!=0)
    {
        return 1;
    }
    return 0;
}
int factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;
}
