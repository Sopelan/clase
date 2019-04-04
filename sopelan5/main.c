#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char usuario[10][10] = {"jose","maria","jesus","ramiro", "luz"};
    int nota[10] ={8,5,2,10,3};
    int i;
    int j;
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
