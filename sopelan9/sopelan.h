#ifndef SOPELAN_H_INCLUDED
#define SOPELAN_H_INCLUDED
typedef struct{
char codigoDeBarra[13];
char nombre[50];
char fechaDeVecimiento[50];
char provedor[50];
float precio;
}eProducto;
eProducto pedirProducto();
void mostraProducto(eProducto);
void cargarArray(int,eProducto[]);
void mostrarArray(int,eProducto[]);
#include "sopelan.c"
#endif // SOPELAN_H_INCLUDED
