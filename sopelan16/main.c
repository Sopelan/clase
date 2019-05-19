#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/** \brief permite cargar un caracter
 *
 * \param char* el char a cargar
 * \return int [0]-> Si no se pudo cargar el caracter
               [1]-> Si se pudo cargar el caracter
 *
 */

int getCaracter(char* );
void mostrarLetra(char*);

int main()
{
    char letra;
    int estado;
    estado = getCaracter(&letra);
    if(estado == 1)
    {
        printf("dato cargado con exito\n");
        mostrarLetra(&letra);
    }
    else
    {
        printf("el dato no fue cargado!!!\n");
    }



    return 0;
}
void mostrarLetra(char* pLetra)
{
    if(pLetra != NULL)
    {
        printf("%c" , *pLetra);
    }

}
int getCaracter(char* pLetra)
{
    int cargo = 0;
    if(pLetra != NULL)
    {
        printf("Ingrese una letra\n");
        fflush(stdin);
        scanf("%c",pLetra);
        cargo = 1;
    }
    return cargo;
}
