#include "utn.h"
#include "fecha.h"
#include "marca.h"
#include "color.h"

#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED

#define TAM_PAT 20

typedef struct{

int id;//el que quiera
char patente[TAM_PAT];
int idMarca;
int idColor;
int modelo;//anio
int isEmpty;

}eAuto;

int inicializarAutos(eAuto autos[], int tamAuto);
int buscarLibreAuto(eAuto autos[],int tamAuto);
int buscarAuto(eAuto autos[],int tamAuto, char patente[]);
int mostrarAuto(eAuto unAuto,eMarca marcas[],int tamMar,eColor colores[],int tamCol);
int mostrarAutos(eAuto autos[],int tamAuto,eMarca marcas[],int tamMar,eColor colores[],int tamCol);
int altaAuto(eAuto autos[],int tamAuto,eMarca marcas[],int tamMar,eColor colores[],int tamCol,int* pNextId);

int bajaTrabajo(eAuto autos[],int tamAutos,int indice);

#endif // AUTO_H_INCLUDED
