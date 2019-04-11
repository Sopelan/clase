#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD 4
void getString(char mensaje[], char input[] );
int soloLetras(char str[]);
int main()
{
     char nombre[CANTIDAD][50] = {"maria" , "mariano" , "flor" , "Martin"};
     char apellido[CANTIDAD][50] = {"dorrego" , "sopelana" , "Tendo" , "saotome" };
     int edad[CANTIDAD] = { 39 , 39 , 17 , 16};
     int nota[CANTIDAD] = { 9 , 8 , 10 , 5};
     int i;
     for (i = 0 ; i < CANTIDAD ; i++)
     {
        if(i != -1)
        {
            printf("soy %s %s y tengo %d y me saque un %d\n",nombre[i] , apellido[i] , edad[i] , nota[i] );
        }
     }
    char unNombre[50];
    getString("ingrese nombre: \n" ,unNombre);
    printf("el nombre es : %s\n",unNombre);
    //strcp(nombre[0],unNombre);
      for (i = 0 ; i < CANTIDAD ; i++)
     {
         getString("ingrese un nombre : \n", nombre[i]);
     }

     for (i = 0 ; i < CANTIDAD ; i++)
     {
            printf("soy %s %s y tengo %d y me saque un %d\n",nombre[i] , apellido[i] , edad[i] , nota[i] );
     }

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
