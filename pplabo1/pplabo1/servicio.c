#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "servicio.h"



/**
 * \brief Imprime el array de comidas
 * \param lista Array de comidas a ser actualizados
 * \param tam Limite del array de comidas
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int mostrarServicios(eServicio servicios[], int tamSer)
{
    int retorno=-1;

    printf("\n     Lista de Servicios  \n");
    printf("--------------------------\n");
    printf("Id     Descripcion  Precio\n");
    printf("--------------------------\n");
    if(servicios!=NULL && tamSer>=0)
    {
        retorno=0;
        for(int i=0; i<tamSer; i++)
        {
            mostrarServicio(&servicios[i]);
        }
        printf("\n\n");
    }
    return retorno;
}

/**
 * \brief Imprime una comida
 * \param unaComida Puntero a la comida que se busca imprimir
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int mostrarServicio(eServicio* unaComida)
{
    int retorno=-1;

    if(unaComida!=NULL)
    {
        retorno=0;
        printf("\n%d    %10s  %.2f\n",unaComida->id,unaComida->descripcion,unaComida->precio);
    }

    return retorno;
}

/**
 * \brief Busca un id y lo remplaza por su descripcion
 * \param id identificador del idComida
 * \param comidas Array de comidas
 * \param tam Limite del array de comidas
 * \param desc Array donde se va a cargar la descripcion
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
int cargarDescripcionServicio(int id,eServicio servicios[],int tamSer,char desc[])
{
    int retorno=-1;

    if(servicios!=NULL && tamSer>=0 && id>=20000 && id<=20003 && desc!=NULL)
    {
        for(int i=0;i<tamSer;i++)
        {
            if(servicios[i].id==id)
            {
                strcpy(desc,servicios[i].descripcion);
                break;
                retorno=0;
            }
        }
    }
    return retorno;
}


