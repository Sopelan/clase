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
    char texto[] = "lalala;555;10\n";
    strcpy(alumno.nombre ,"marcos");
    printf("%p\n",&pArchivo);

    if( (pArchivo = fopen(ARCHIVO,"a")) == NULL)
    {
        printf("el archivo no puede ser abierto\n");
        exit(1);
    }
    else
    {
        printf("archivo abierto\n");
        //fwrite(&alumno , sizeof (eAlumno) , 1 , pArchivo);

        int largo = strlen(texto);
        fwrite(texto , sizeof (char) , largo , pArchivo);
        fclose(pArchivo);
    }

    if((pArchivo = fopen(ARCHIVO,"r")) == NULL)
    {
        printf("el archivo no puede ser abierto\n");
        exit(1);
    }
    else
    {
        char renglon[70];
        printf("archivo abierto\n");
        while(!feof(pArchivo))
        {
            int cantidad = fread(renglon , sizeof(char),70 ,pArchivo);
            printf("\ncantidad %d y texto %s\n",cantidad,texto);
        }

    }

    return 0;
}
