#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarVector(int datos[] , int tamanio);
void mostrarPalabra();
void cargarVector(int datos[] , int tamanio);
int main()
{
    char usuario[10][10] = {"jose","maria","jesus","ramiro", "luz"};
    int nota[10] ={8,5,2,10,3};
    int i;
    int j;
    mostrarVector(nota,5);
    cargarVector(nota,5);
    mostrarVector(nota,5);
   /* for(i = 0 ; i < 5 ; i++)
    {
        // usuario[i][0]=" ";
        strcpy(usuario[i] , " " );
        //nota[i] = 0;

    }*/
    /*for(i=0;i<5;i++)
    {
    printf("ingrese usuario #%d :",i+1);
    scanf("%s",usuario[i]);
    //gets(usuario[i]);
    printf("ingrese nota #%d :\n",i+1);
    scanf("%d",&nota[i]);
    }*/
    //strcpy(usuario[0] , "hola");
    /*printf("test  %s  \n",usuario[0]);
    printf("test  %s  \n",usuario[1]);*/
    /*printf("ingrese usuario :");
    scanf("%s",usuario[0]);
    printf("ingrese usuario :");
    scanf("%s",usuario[1]);*/

    /*int tamanio = strlen(usuario[8]);
    printf("tamanio :%d  \n",tamanio);*/
    /*for(i = 0 ; i < 5 ; i++)
    {
        printf("alumno: %s nota: %d\n",usuario[i],nota[i]);
    }*/
    /*
    for(i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            printf("%d => %d \n",nota[i],nota[j]);
            if(nota[i] < nota[j])
            {
                int aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;
                char auxString[10];
                strcpy(auxString  , usuario[i]);
                strcpy(usuario[i] , usuario[j]);
                strcpy(usuario[j] , auxString);
            }
        }
    }*/
for(i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            int resultado;
            /*printf("%d => %d \n",nota[i],nota[j]);


            resultado = strcmp("hola","hola");//0
            printf(" iguales :%d\n)",resultado);
            resultado = strcmp("Hola","hola");//-1
            printf(" primera :%d\n)",resultado);
            resultado = strcmp("hola","Hola");//1
            printf(" segunda :%d\n)",resultado);
            resultado = strcmp("A","a");//-1
            printf(" la A :%d\n)",resultado);
            resultado = strcmp("a","b");//-1
            printf(" la a-b :%d\n)",resultado);
            resultado = strcmp("b","a");//-1
            printf(" la b-a :%d\n)",resultado);1*/
            resultado = strcmp(usuario[i],usuario[j]);
            //if(nota[i] < nota[j])
            if(resultado == -1)
            {
                int aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;
                char auxString[10];
                strcpy(auxString  , usuario[i]);
                strcpy(usuario[i] , usuario[j]);
                strcpy(usuario[j] , auxString);
            }
        }
    }
      for(i = 0 ; i < 5 ; i++)
    {
        printf("alumno: %s nota: %d\n",usuario[i],nota[i]);
    }
    /*
    printf("Hello   %s  \n",usuario[1]);
    printf("Hello   %s  \n",usuario[0]);
    */
    return 0;
}
void mostrarVector(int datos[] , int tamanio)
{
    int i;
    for(i = 0 ; i < tamanio ; i++)
    {
        printf("nota: %d\n",datos[i]);
    }
}
void cargarVector(int datos[] , int tamanio)
{
    int i;
    for(i = 0 ; i < tamanio ; i++)
    {
       datos[i] = -1;
    }
}
