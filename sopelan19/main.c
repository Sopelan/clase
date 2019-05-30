#define OCUPADO -2
#define LIBRE -1
#include <stdio.h>
#include <stdlib.h>
#define ARCHIVO ".\\alumno.csv"
#include "bibloteca.h"
int main()
{
    FILE *pArchivo;
    eAlumno alumno;
    strcpy(alumno.nombre ,"marcos");

    printf("%p\n",&pArchivo);
    if(pArchivo = fopen(ARCHIVO,"a") == NULL)
    {
        printf("el archivo no puede ser abierto\n");
        exit(1);
    }
    else
    {
        printf("archivo abierto\n");
        //fwrite(&alumno , sizeof (eAlumno) , 1 , pArchivo);
        char texto[] = "lalala;555;10";
        int largo = strlen(texto);
        fwrite(texto , sizeof (char) , largo , pArchivo);
        fclose(pArchivo);
    }

    if(pArchivo = fopen(ARCHIVO,"r") == NULL)
    {
        printf("el archivo no puede ser abierto\n");
        exit(1);
    }
    else
    {
        printf("archivo abierto\n");
        while(!feof(pArchivo))
        {

        }

    }
    return 0;
}
