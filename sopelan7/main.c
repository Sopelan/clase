#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD 4
void getString(char mensaje[], char input[] );
int getStringLetras(char mensaje[], char input[] );
int soloLetras(char str[]);
void mostrarAlumnos(char[][50] , char[][50] , int[] , int[] , int);
void ordenarAlumnos(char[][50] , char[][50] , int[] , int[] , int);
int main()
{
     char nombre[CANTIDAD][50] = {"maria" , "mariano" , "flor" , "Martin"};
     char apellido[CANTIDAD][50] = {"dorrego" , "sopelana" , "Tendo" , "saotome" };
     int edad[CANTIDAD] = { 39 , 39 , 17 , 16};
     int nota[CANTIDAD] = { 9 , 8 , 10 , 5};
     int i;
     int j;
    ordenarAlumnos(nombre , apellido , edad , nota , CANTIDAD);
    mostrarAlumnos(nombre , apellido , edad , nota , CANTIDAD);
    char unNombre[50];
    getString("ingrese nombre: \n" ,&unNombre);
    printf("el nombre es : %s\n",unNombre);
    //strcp(nombre[0],unNombre);
      for (i = 0 ; i < CANTIDAD ; i++)
     {
         getString("ingrese un nombre : \n", nombre[i]);
     }

    mostrarAlumnos(nombre , apellido , edad , nota , CANTIDAD);

    return 0;
}
void getString(char mensaje[], char input[])
{
    printf("%s",mensaje);
    scanf("%s",input);
    return 0;
}
int soloLetras(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if((str[i] < 'a' || str[i] > 'z' ) && (str[i] < 'A' || str[i] > 'Z' ))
            return 0;
        i++;
    }
    return 1;
}
void ordenarAlumnos(char nombre [][50] , char apellido[][50] , int edad[] , int nota[] , int tamano)
{
    char auxCadena[50];
    int auxEnteros;
    int i;
    int j;
    for(i = 0 ; i < tamano - 1 ; i++)
    {
        for(j = 1 ; j < tamano ; j++)
        {
            if(strcmp(nombre[i],nombre[j])>1)
                strcpy(auxCadena , nombre[i]);
                strcpy(nombre[i] , nombre[j]);
                strcpy(nombre[j] , auxCadena);
                strcpy(auxCadena , apellido[i]);
                strcpy(apellido[i] , apellido[j]);
                strcpy(apellido[j] , auxCadena);
                auxEnteros = edad[i];
                edad[i] = edad[j];
                edad[j] = auxEnteros;
                auxEnteros = nota[i];
                nota[i] = nota[j];
                nota[j] = auxEnteros;
        }
    }
}
void mostrarAlumnos(char nombre [][50] , char apellido[][50] , int edad[] , int nota[] , int tamano)
{
     int i;
     printf("%10s\t%10s\t%10s\t%10s\n","Nombre" , "Apellido" , "edad" , "nota");
     for (i = 0 ; i < tamano ; i++)
     {
        printf("%10s\t%10s\t%10d\t%10d\n",nombre[i] , apellido[i] , edad[i] , nota[i] );

     }
}
int getStringLetras(char mensaje[], char input[] )
{
    int aux;
    getString(mensaje , aux);
    if(soloLetras(aux))
    {
        strcpy(input , aux);
        return 1;
    }
    return 0;

}
