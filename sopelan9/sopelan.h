#ifndef SOPELAN_H_INCLUDED
#define SOPELAN_H_INCLUDED
typedef struct{
char codigoDeBarra[13];
char nombre[50];
char fechaDeVecimiento[50];
char provedor[50];
char precio[50];
}eProducto;
eProducto pedirProducto();
void mostraProducto(eProducto);
void cargarArray(int tam ,eProducto listado[]);
void mostrarArray(int tam,eProducto listado[]);
#include "sopelan.c"
#endif // SOPELAN_H_INCLUDED
