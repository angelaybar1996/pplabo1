#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "auto.h"



/**
 * \brief Inicializa el array de almuerzos
 * \param  lista array de almuerzos a ser actualizados
 * \param tama limite del array de almuerzos
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int inicializarAutos(eAuto almuerzos[], int tama)
{
    int retorno=-1;

    if(almuerzos!=NULL && tama >0)
    {
        retorno=0;
        for(int i=0; i<tama; i++)
        {
            almuerzos[i].isEmpty=1;
        }
    }
    return retorno;
}

/**
 * \brief busca la primer posicion vacia
 * \param  lista array de almuerzos
 * \param tama limite del array de almuerzos
 * \return Retorna el indice de la posicion vacia ó -1 (ERROR)
 */
int buscarLibreAuto(eAuto autos[],int tamAuto)
{
    int retorno=-1;
    if(autos!=NULL && tamAuto>=0)
    {
        for(int i=0; i<tamAuto; i++)
        {
            if(autos[i].isEmpty)
            {
                retorno=i;
                break;
            }
        }
    }
    return retorno;
}

/**
 * \brief busca un id en un array y devuelve la posicion en que se encuentra
 * \param  lista array de almuerzos
 * \param tama limite del array de almuerzos
 * \param idBuscado el valor buscado
 * \return Retorna la posicion en que se encuentra el id ó -1 (ERROR)
 */
int buscarAuto(eAuto autos[],int tamAuto, char patente[])
{
    int retorno=-1;
	int i;

	if(autos!=NULL &&tamAuto>0 && patente!=NULL )
	{
		retorno=0;
		for(i=0;i<tamAuto;i++)
		{
			if(strcmp(autos[i].patente,patente)==0 && autos[i].isEmpty==0)
			{
				retorno=i;
				break;
			}
		}
	}
	return retorno;
}

/**
 * \brief Imprime los datos de un almuerzo
 * \param unAlmuerzo Puntero al almuerzo que se busca imprimir
 * \param lista Array de empleados
 * \param tame Limite del array de empleados
 * \param comidas Array de comidas
 * \param tamc Limite del array de comidas
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int mostrarAuto(eAuto unAuto,eMarca marcas[],int tamMar,eColor colores[],int tamCol)
{
    int retorno=-1;
    char desMarca[20];
    char desColor[20];

    if(marcas!=NULL && tamMar>=0 && colores!=NULL && tamCol>=0)
    {
    	cargarDescripcionColor(unAuto.idColor, colores, tamCol, desColor);//bien
    	cargarDescripcionMarca(unAuto.idMarca, marcas, tamMar, desMarca);//bien

       retorno=0;
     //printf("Id    Patente        Marca        Color     Modelo   \n");
       printf("\n%d   %10s          %10s          %10s         %d\n",
       unAuto.id,
       unAuto.patente,
       desMarca,
       desColor,
       unAuto.modelo);

    }

    return retorno;
}

/**
 * \brief Imprime el array de almuerzos
 * \param almuerzos Array de almuerzos a ser actualizados
 * \param tama Limite del array de almuerzos
 * \param lista Array de empleados a ser actualizados
 * \param tame Limite del array de empleados
 * \param comidas Array de comidas a ser actualizados
 * \param tamc Limite del array de comidas
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int mostrarAutos(eAuto autos[],int tamAuto,eMarca marcas[],int tamMar,eColor colores[],int tamCol)
{
    int retorno=-1;
    int flag=1;

    printf("\n                Listado de Autos\n");
    printf("-----------------------------------------------------------\n");
    printf("Id    Patente        Marca        Color     Modelo   \n");
    printf("-----------------------------------------------------------\n");
    if(autos!=NULL && tamAuto>0 && marcas!=NULL && tamMar>=0 && colores!=NULL && tamCol>=0)
    {
        retorno=0;
        for(int i=0; i<tamAuto; i++)
        {
            if(autos[i].isEmpty==0)
            {
              mostrarAuto(autos[i],marcas,tamMar,colores,tamCol);
              flag=0;
            }
        }
        if(flag)
        {
                printf("\nNo hay autos que mostrar\n");
        }
        printf("\n\n");
    }
    return retorno;
}

/**
 * \brief Da de alta un almuerzo en una posicion del array
 * \param almuerzos Array de almuerzos a ser actualizados
 * \param tama Limite del array de almuerzos
 * \param comidas Array de comidas a ser actualizados
 * \param tamc Limite del array de comidas
 * \param lista Array de empleados a ser actualizados
 * \param tame Limite del array de empleados
 * \param sectores Array de sectores a ser actualizados
 * \param tams Limite del array de sectores
 * \param pNextId Puntero identificador a ser asignado al almuerzo
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int altaAuto(eAuto autos[],int tamAuto,eMarca marcas[],int tamMar,eColor colores[],int tamCol,int* pNextId)
{
    int retorno=-1;
    int indice;
    eAuto auxAuto;

    if(autos!=NULL && tamAuto>=0 && marcas!=NULL && tamMar>=0 &&colores!=NULL && tamCol>=0 && pNextId!=NULL)
    {
        printf("\nALTA AUTO\n");
        printf("\nID: %d\n",*pNextId);
        indice=buscarLibreAuto(autos,tamAuto);

        if(indice==-1)
        {
            printf("\nNo hay lugar para mas autos\n");
        }
        else
        {
            mostrarMarcas(marcas, tamMar);
            if(utn_getNumero(&auxAuto.idMarca,
                                     "\nIngrese id de la marca:",
                                     "\nError, id no valida",1000,1004,4)==0 &&
               buscarMarca(marcas, tamMar, auxAuto.idMarca)!=-1)
            {
            	mostrarColores(colores, tamCol);
            	if(utn_getNumero(&auxAuto.idColor,
										 "\nIngrese id del color:",
										 "\nError, id no valido",5000,5004,4)==0 &&
				   buscarColor(colores, tamCol,auxAuto.idColor)!=-1)
            	{
            		if(utn_getNumero(&auxAuto.modelo,  "\nIngrese modelo(anio):",  "\nError, modelo no valido", 1, 3000, 4)==0 &&
            		utn_getTexto(auxAuto.patente, TAM_PAT, "\nIngrese patente:", "\nError, patente no valida", 4)==0)
            		{
            			auxAuto.isEmpty=0;
						auxAuto.id=*pNextId;
						autos[indice] = auxAuto;
						(*pNextId)++;
						retorno=0;
            		}
            	}
             }
        }
    }
    return retorno;
}

/**
 * \brief Actualiza una posicion del array
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param indice Posicion a ser actualizada
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int bajaTrabajo(eAuto autos[],int tamAutos,int indice)
{
    int retorno=-1;

    if(autos!=NULL && tamAutos>=0 && indice >=0)
    {
    	autos[indice].isEmpty=1;
        retorno=0;
    }
    return retorno;
}

