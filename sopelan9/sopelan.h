#ifndef SOPELAN_H_INCLUDED
#define SOPELAN_H_INCLUDED
#define LIBRE 1
#define OCUPADO 0
typedef struct{
char codigoDeBarra[13];
char nombre[50];
char fechaDeVecimiento[50];
char provedor[50];
char precio[50];
int estado;
}eProducto;
eProducto pedirProducto();
void mostraProducto(eProducto);
void cargarArray(int tam ,eProducto listado[]);
void mostrarArray(int tam,eProducto listado[]);
void construirArray(int tam , eProducto listado[]);
int insertProducto(int tam,eProducto[]);
int dameLugarLibre(eProducto[],int tam);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
int editarProducto(int ,eProducto[]);
void cargarEnCero(eProducto[] , int);


#include "sopelan.c"
#endif // SOPELAN_H_INCLUDED
