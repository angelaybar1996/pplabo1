#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "datawarehouse.h"
#include "trabajo.h"


/**
 * \brief Imprime los datos de un empleado
 * \param unEmpleado Puntero al empleado que se busca imprimir
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int mostrarTrabajo(eTrabajo* unEmpleado,eColor sectores[],int tamSec)
{
    int retorno=-1;
    char descripcion[20];

    if(unEmpleado!=NULL && unEmpleado->isEmpty==0 && sectores!=NULL && tamSec>=0)
    {
        cargarDescripcionColor(unEmpleado->idSector,sectores,tamSec,descripcion);
        retorno=0;
      //printf("Legajo   Nombre   Edad   Sexo   Sueldo   Fecha de nacimiento   Fecha de ingreso   Telefono\n");
        printf("\n%d      %10s       %d     %c     %.2f        %2d/%2d/%4d          %2d/%2d/%4d        %s     %s\n",unEmpleado->id,
               unEmpleado->nombre,
               unEmpleado->edad,
               unEmpleado->sexo,
               unEmpleado->sueldo,
               unEmpleado->fNacimiento.dia,unEmpleado->fNacimiento.mes,unEmpleado->fNacimiento.anio,
               unEmpleado->fIngreso.dia,unEmpleado->fIngreso.mes,unEmpleado->fIngreso.anio,
               unEmpleado->telefono,
               descripcion);
    }

    return retorno;
}*/

/**
 * \brief Imprime el array de empleados
 * \param lista Array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int mostrarTrabajos(eTrabajo* lista, int tam,eColor sectores[],int tamSec)
{
    int retorno=-1;

    printf("\nLista de Empleados\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("Legajo       Nombre    Edad    Sexo    Sueldo     Fecha de nacimiento    Fecha de ingreso    Telefono    Sector\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    if(lista!=NULL && tam>0 && sectores!=NULL && tamSec>=0)
    {
        retorno=0;
        for(int i=0; i<tam; i++)
        {
            mostrarTrabajo(&lista[i],sectores,tamSec);
        }
        printf("\n\n");
    }
    return retorno;
}*/

/**
 * \brief Inicializa el array
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int inicializarTrabajos(eTrabajo* lista, int tam)
{
    int retorno=-1;

    if(lista!=NULL && tam >0)
    {
        retorno=0;
        for(int i=0; i<tam; i++)
        {
            lista[i].isEmpty=1;
        }
    }
    return retorno;
}*/

/**
 * \brief Da de alta un empleado en una posicion del array
 * \param lista array de empleados a ser actualizados
 * \param tam Limite del array de empleados
 * \param sectores Array de sectores a ser actualizados
 * \param tamSec limite del array de sectores
 * \param pLegajo Puntero identificador a ser asignado al empleado
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int altaTrabajo(eTrabajo lista[],int tam,eColor sectores[],int tamSec,int* pLegajo)
{
    int retorno=-1;
    int i;
    eTrabajo auxEmpleado;

    i=buscarLibre(lista,tam);

    if(lista!=NULL && tam>=0 && sectores!=NULL && tamSec>=0 &&pLegajo!=NULL)
    {
        printf("\nlegajo: %d\n",*pLegajo);
        if(i>=0)
        {
            if(utn_getCadena(auxEmpleado.nombre,TAM_PAT,"Ingrese nombre:","\nError,nombre no valido\n",2)==0 &&
               utn_getNumero(&auxEmpleado.edad,"Ingrese edad:","\nError,edad no valida\n",18,70,2)==0 &&
               utn_getCaracter(&auxEmpleado.sexo,"Ingrese sexo:","\nError, sexo no valido\n",2)==0 &&
               utn_getNumeroFlotante(&auxEmpleado.sueldo,"Ingrese sueldo:","\nError,sueldo no valido\n",1,1000000,2)==0 &&
               utn_getNumero(&auxEmpleado.fNacimiento.dia,"Ingrese fecha de naciemiento\n\nDia:","\nError,dia no valido\n",1,31,2)==0 &&
               utn_getNumero(&auxEmpleado.fNacimiento.mes,"Mes:","\nError,mes no valido\n",1,12,2)==0 &&
               utn_getNumero(&auxEmpleado.fNacimiento.anio,"Anio:","\nError,anio no valido\n",1950,2000,2)==0 &&
               utn_getNumero(&auxEmpleado.fIngreso.dia,"Ingrese fecha de ingreso\n\nDia:","\nError,dia no valido\n",1,31,2)==0 &&
               utn_getNumero(&auxEmpleado.fIngreso.mes,"Mes:","\nError,mes no valido\n",1,12,2)==0 &&
               utn_getNumero(&auxEmpleado.fIngreso.anio,"Anio:","\nError,anio no valido\n",1990,2021,2)==0 &&
               utn_getTelefono(auxEmpleado.telefono,TAM_TEL,"Ingrese telefono:","\nError,el telefono no es valido\n",2)==0)
            {
                if(mostrarColores(sectores,tamSec)==0)
                {
                    utn_getNumero(&auxEmpleado.idSector,"Ingrese sector:","\nError,sector no valio\n",500,504,2);
                }
                retorno=0;
                auxEmpleado.isEmpty=0;
                auxEmpleado.id=*pLegajo;
                lista[i]=auxEmpleado;
                (*pLegajo)++;
            }
        }
    }
    return retorno;
}*/

/**
 * \brief busca la primer posicion vacia
 * \param  lista array de empleados
 * \param tam limite del array de clientes
 * \return Retorna el indice de la posicion vacia ó -1 (ERROR)
 */
/*int buscarLibre(eTrabajo lista[],int tam)
{
    int retorno=-1;
    if(lista!=NULL && tam>=0)
    {
        for(int i=0; i<tam; i++)
        {
            if(lista[i].isEmpty)
            {
                retorno=i;
                break;
            }
        }
    }
    return retorno;
}*/

/**
 * \brief busca un legajo en un array y devuelve la posicion en que se encuentra
 * \param  lista array de empleados
 * \param tam limite del array de empleados
 * \param legajoBuscado el valor buscado
 * \return Retorna la posicion en que se encuentra el legajo ó -1 (ERROR)
 */
/*int buscarTrabajo(eTrabajo lista[],int tam, int legajoBuscado)
{
    int retorno=-1;
	int i;

	if(lista!=NULL &&tam>0 && legajoBuscado>=0 )
	{
		retorno=0;
		for(i=0;i<tam;i++)
		{
			if(lista[i].id==legajoBuscado && lista[i].isEmpty==0)
			{
				retorno=i;
				break;
			}
		}
	}
	return retorno;
}*/

/**
 * \brief Actualiza una posicion del array
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param indice Posicion a ser actualizada
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int bajaTrabajo(eTrabajo lista[],int tam,int indice)
{
    int retorno=-1;

    if(lista!=NULL && tam>=0 && indice >=0)
    {
        lista[indice].isEmpty=1;
        retorno=0;
    }
    return retorno;
}*/

/**
 * \brief Actualiza los datos de un empleado en una posicion del array
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param indice Posicion a ser actualizada
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int modificarEmpleado(eTrabajo lista[],int tam,int indice)//modifica todos los datos
{
	int retorno=-1;
	eTrabajo auxEmpleado;

	if(lista!=NULL &&tam>0 &&indice<tam && lista[indice].isEmpty==0)
	{
		if(utn_getCadena(auxEmpleado.nombre,TAM_PAT,"Ingrese nombre:","\nError,nombre no valido\n",2)==0 &&
           utn_getNumero(&auxEmpleado.edad,"Ingrese edad:","\nError,edad no valida\n",18,100,2)==0 &&
           utn_getCaracter(&auxEmpleado.sexo,"Ingrese sexo:","\nError, sexo no valido\n",2)==0 &&
           utn_getNumeroFlotante(&auxEmpleado.sueldo,"\nIngrese sueldo:","\nError,sueldo no valido\n",1,1000000,2)==0 &&
           utn_getNumero(&auxEmpleado.fNacimiento.dia,"Ingrese fecha de naciemiento\n\nDia:","\nError,dia no valido\n",1,31,2)==0 &&
           utn_getNumero(&auxEmpleado.fNacimiento.mes,"Mes:","\nError,mes no valido\n",1,12,2)==0 &&
           utn_getNumero(&auxEmpleado.fNacimiento.anio,"Anio:","\nError,anio no valido\n",1950,2000,2)==0 &&
           utn_getNumero(&auxEmpleado.fIngreso.dia,"Ingrese fecha de ingreso\n\nDia:","\nError,dia no valido\n",1,31,2)==0 &&
           utn_getNumero(&auxEmpleado.fIngreso.mes,"Mes:","\nError,mes no valido\n",1,12,2)==0 &&
           utn_getNumero(&auxEmpleado.fIngreso.anio,"Anio:","\nError,anio no valido\n",1990,2021,2)==0 &&
           utn_getTelefono(auxEmpleado.telefono,TAM_TEL,"Ingrese telefono:","\nError,el telefono no es valido\n",2)==0)
        {
			retorno=0;
			auxEmpleado.id=lista[indice].id;//el id no se modifica es el mismo de antes
			auxEmpleado.isEmpty=0;
			lista[indice]=auxEmpleado;
		}
	}

	return retorno;
}*/


/**
 * \brief Menu de opciones de los datos del empleado a modificar
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param indice Posicion recibida
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int menuModificarTrabajo(eTrabajo lista[],int tam,int indice)
{
    int retorno=-1;
    int opcion;
    eTrabajo auxEmpleado;

	if(lista!=NULL &&tam>0 &&indice<tam && lista[indice].isEmpty==0)
	{
	    do
        {
            if(utn_getNumero(&opcion,
                             "***Modificar datos del empleado***\n\n"
                             "\n1.Modificar nombre"
                             "\n2.Modificar edad"
                             "\n3.Modificar sexo"
                             "\n4.Modificar sueldo"
                             "\n5.Modificar fecha de nacimiento"
                             "\n6.Modificar fecha de ingreso"
                             "\n7.Modificar telefono"
                             "\n8.Salir\n\n"
                             "Ingrese opcion:","\nError,opcion no valida\n",1,8,2)==0)
            {
                retorno=0;
                switch(opcion)
                {
                    case 1:
                        if(utn_getCadena(auxEmpleado.nombre,TAM_PAT,
                                      "Ingrese nombre:",
                                      "\nError,nombre no valido\n",2)==0)
                        {
                            strcpy(lista[indice].nombre,auxEmpleado.nombre);
                        }
                        break;
                    case 2:
                        if(utn_getNumero(&auxEmpleado.edad,
                                      "Ingrese edad:",
                                      "\nError,edad no valida\n",18,100,2)==0)
                        {
                            lista[indice].edad=auxEmpleado.edad;
                        }
                        break;
                    case 3:
                        if(utn_getCaracter(&auxEmpleado.sexo,
                                        "Ingrese sexo:",
                                        "\nError, sexo no valido\n",2)==0)
                        {
                           lista[indice].sexo = auxEmpleado.sexo;
                        }
                        break;
                    case 4:
                        if(utn_getNumeroFlotante(&auxEmpleado.sueldo,"\nIngrese sueldo:",
                                     "\nError,sueldo no valido\n",1,1000000,2)==0)
                        {
                           lista[indice].sueldo = auxEmpleado.sueldo;
                        }
                        break;
                    case 5:
                        if(utn_getNumero(&auxEmpleado.fNacimiento.dia,"Ingrese fecha de naciemiento\n\nDia:","\nError,dia no valido\n",1,31,2)==0 &&
                        utn_getNumero(&auxEmpleado.fNacimiento.mes,"Mes:","\nError,mes no valido\n",1,12,2)==0 &&
                        utn_getNumero(&auxEmpleado.fNacimiento.anio,"Anio:","\nError,anio no valido\n",1950,2000,2)==0)
                        {
                            lista[indice].fNacimiento.dia = auxEmpleado.fNacimiento.dia;
                            lista[indice].fNacimiento.mes = auxEmpleado.fNacimiento.mes;
                            lista[indice].fNacimiento.anio = auxEmpleado.fNacimiento.anio;
                        }
                        break;
                    case 6:
                        if( utn_getNumero(&auxEmpleado.fIngreso.dia,"Ingrese fecha de ingreso\n\nDia:","\nError,dia no valido\n",1,31,2)==0 &&
                            utn_getNumero(&auxEmpleado.fIngreso.mes,"Mes:","\nError,mes no valido\n",1,12,2)==0 &&
                            utn_getNumero(&auxEmpleado.fIngreso.anio,"Anio:","\nError,anio no valido\n",1990,2021,2)==0)
                        {
                            lista[indice].fIngreso.dia = auxEmpleado.fIngreso.dia;
                            lista[indice].fIngreso.mes = auxEmpleado.fIngreso.mes;
                            lista[indice].fIngreso.anio = auxEmpleado.fIngreso.anio;
                        }
                        break;
                    case 7:
                        if(utn_getTelefono(auxEmpleado.telefono,TAM_TEL,
                           "Ingrese telefono:","\nError,el telefono no es valido\n",2)==0)
                        {
                            strcpy(lista[indice].telefono,auxEmpleado.telefono);
                        }
                        break;
                }
            }
        }while(opcion!=8);
	}
	return retorno;
}*/

/**
 * \brief Menu de opciones de ordenamiento de los empleados
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int menuOrdenar(eTrabajo* lista, int tam)
{
    int retorno=-1;
    int opcion;
    int criterio;

	if(lista!=NULL &&tam>0 )
	{
	    do
        {
            if(utn_getNumero(&opcion,
                             "***Ordenar datos del empleado***\n\n"
                             "\n1.Ordenar por nombre"
                             "\n2.Ordenar por edad"
                             "\n3.Ordenar por sexo"
                             "\n4.Ordenar por sueldo"
                             "\n5.Ordenar por fecha de nacimiento"
                             "\n6.Ordenar por fecha de ingreso"
                             "\n7.Salir\n\n"
                             "Ingrese opcion:","\nError,opcion no valida\n",1,7,2)==0 && opcion!=7 &&
               utn_getNumero(&criterio,
                             "***Indique criterio***\n\n"
                             "\n1.ASCENDENTE"//A a Z
                             "\n2.DESCENDENTE"// Z a A
                             "\n3.SALIR\n\n"
                             "Ingrese opcion:","\nError,opcion no valida\n",1,3,2)==0 && criterio!=3)
            {
                retorno=0;
                switch(opcion)
                {
                    case 1:
                        if(ordenarNombres(lista,tam,criterio)==0)
                        {
                            system("cls");
                            printf("Ordenamiento realizado con exito\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("Ordenamiento cancelado\n");
                            system("pause");
                        }
                        break;
                    case 2:
                        if(ordenarEdades(lista,tam,criterio)==0)
                        {
                            system("cls");
                            printf("Ordenamiento realizado con exito\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("Ordenamiento cancelado\n");
                            system("pause");
                        }
                        break;
                    case 3:
                        if(ordenarSexos(lista,tam,criterio)==0)
                        {
                            system("cls");
                            printf("Ordenamiento realizado con exito\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("Ordenamiento cancelado\n");
                            system("pause");
                        }
                        break;
                    case 4:
                        if(ordenarSueldos(lista,tam,criterio)==0)
                        {
                            system("cls");
                            printf("Ordenamiento realizado con exito\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("Ordenamiento cancelado\n");
                            system("pause");
                        }
                        break;
                    case 5:
                        if(ordenarFnacimiento(lista,tam,criterio)==0)
                        {
                            system("cls");
                            printf("Ordenamiento realizado con exito\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("Ordenamiento cancelado\n");
                            system("pause");
                        }
                        break;
                    case 6:
                        if(ordenarFingreso(lista,tam,criterio)==0)
                        {
                            system("cls");
                            printf("Ordenamiento realizado con exito\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("Ordenamiento cancelado\n");
                            system("pause");
                        }
                        break;
                }
            }
        }while(opcion!=7);
	}
	return retorno;
}*/

/**
 * \brief Ordenamiento de empleados por nombre segun criterio
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param cri Criterio de ordenamiento de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
 /*int ordenarNombres(eTrabajo* lista, int tam,int cri)
 {
    int retorno=-1;
    eTrabajo auxEmpleado;

    if(lista!=NULL &&tam>0 && cri>0 )
    {
        retorno=0;
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if((cri==1 && strncmp(lista[i].nombre,lista[j].nombre,TAM_PAT)>0) ||
                   (cri==2 && strncmp(lista[i].nombre,lista[j].nombre,TAM_PAT)<0))
                {
                    auxEmpleado=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxEmpleado;
                }
            }
        }
    }
    return retorno;
 }*/

 /**
 * \brief Ordenamiento de empleados por edad segun criterio
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param cri Criterio de ordenamiento de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
 /*int ordenarEdades(eTrabajo* lista, int tam,int cri)
 {
    int retorno=-1;
    eTrabajo auxEmpleado;

    if(lista!=NULL &&tam>0 && cri>0 )
    {
        retorno=0;
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if((cri==1 && lista[i].edad>lista[j].edad) ||
                   (cri==2 && lista[i].edad<lista[j].edad))
                {
                    auxEmpleado=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxEmpleado;
                }
            }
        }
    }
    return retorno;
 }*/

 /**
 * \brief Ordenamiento de empleados por sexo segun criterio
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param cri Criterio de ordenamiento de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
 /*int ordenarSexos(eTrabajo* lista, int tam,int cri)
 {
    int retorno=-1;
    eTrabajo auxEmpleado;

    if(lista!=NULL &&tam>0 && cri>0 )
    {
        retorno=0;
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if((cri==1 && lista[i].sexo>lista[j].sexo) ||
                   (cri==2 && lista[i].sexo<lista[j].sexo))
                {
                    auxEmpleado=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxEmpleado;
                }
            }
        }
    }
    return retorno;
 }*/


 /**
 * \brief Ordenamiento de empleados por sueldo segun criterio
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param cri Criterio de ordenamiento de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
 /*int ordenarSueldos(eTrabajo* lista, int tam,int cri)
 {
    int retorno=-1;
    eTrabajo auxEmpleado;

    if(lista!=NULL &&tam>0 && cri>0 )
    {
        retorno=0;
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if((cri==1 && lista[i].sueldo>lista[j].sueldo) ||
                   (cri==2 && lista[i].sueldo<lista[j].sueldo))
                {
                    auxEmpleado=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxEmpleado;
                }
            }
        }
    }
    return retorno;
 }*/

 /**
 * \brief Ordenamiento de empleados por fecha de nacimiento segun criterio
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param cri Criterio de ordenamiento de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
 /*int ordenarFnacimiento(eTrabajo* lista, int tam,int cri)
 {
    int retorno=-1;
    eTrabajo auxEmpleado;

    if(lista!=NULL &&tam>0 && cri>0 )
    {
        retorno=0;
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(((cri==1 && lista[i].fNacimiento.anio>lista[j].fNacimiento.anio) ||
                   (lista[i].fNacimiento.anio==lista[j].fNacimiento.anio && lista[i].fNacimiento.mes>lista[j].fNacimiento.mes)||
                   (lista[i].fNacimiento.mes==lista[j].fNacimiento.mes && lista[i].fNacimiento.dia>lista[j].fNacimiento.dia))||
                   ((cri==2 && lista[i].fNacimiento.anio<lista[j].fNacimiento.anio) ||
                   (lista[i].fNacimiento.anio==lista[j].fNacimiento.anio && lista[i].fNacimiento.mes<lista[j].fNacimiento.mes)||
                   (lista[i].fNacimiento.mes==lista[j].fNacimiento.mes && lista[i].fNacimiento.dia<lista[j].fNacimiento.dia)))
                {
                    auxEmpleado=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxEmpleado;
                }
            }
        }
    }
    return retorno;
 }*/

 /**
 * \brief Ordenamiento de empleados por fecha de ingreso segun criterio
 * \param  lista array de empleados a ser actualizados
 * \param tam limite del array de empleados
 * \param cri Criterio de ordenamiento de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
 /*int ordenarFingreso(eTrabajo* lista, int tam,int cri)
 {
    int retorno=-1;
    eTrabajo auxEmpleado;

    if(lista!=NULL &&tam>0 && cri>0 )
    {
        retorno=0;
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(((cri==1 && lista[i].fIngreso.anio>lista[j].fIngreso.anio) ||
                   (lista[i].fIngreso.anio==lista[j].fIngreso.anio && lista[i].fIngreso.mes>lista[j].fIngreso.mes)||
                   (lista[i].fIngreso.mes==lista[j].fIngreso.mes && lista[i].fIngreso.dia>lista[j].fIngreso.dia))||
                   ((cri==2 && lista[i].fIngreso.anio<lista[j].fIngreso.anio) ||
                   (lista[i].fIngreso.anio==lista[j].fIngreso.anio && lista[i].fIngreso.mes<lista[j].fIngreso.mes)||
                   (lista[i].fIngreso.mes==lista[j].fIngreso.mes && lista[i].fIngreso.dia<lista[j].fIngreso.dia)))
                {
                    auxEmpleado=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxEmpleado;
                }
            }
        }
    }
    return retorno;
 }*/

/**
 * \brief ordena el array de empleados agrupado por sexo y nombre
 * \param  lista array de empleados
 * \param tam limite del array de empleados
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int ordenarSexoNombre(eTrabajo* lista, int tam)
{
    int retorno=-1;
    eTrabajo auxEmpleado;

    if(lista!=NULL &&tam>0 )
	{
        retorno=0;
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(lista[i].sexo>lista[j].sexo || (lista[i].sexo==lista[j].sexo && strcmp(lista[i].nombre,lista[j].nombre)>0) )
                {
                    auxEmpleado=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxEmpleado;
                }
            }
        }
	}
    return retorno;
}*/

/**
 * \brief Busca un id y lo remplaza por su descripcion
 * \param id identificador del empleado
 * \param sectores Array de sectores
 * \param tamSec limite del array de sectores
 * \param desc Array donde se va a cargar la descripcion
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int cargarNombreTrabajo(int legajo,eTrabajo lista[],int tame,char nombre[])
{
    int retorno=-1;
    int indice;

    if(lista!=NULL && tame>=0 && nombre!=NULL)
    {
        indice=buscarTrabajo(lista,tame,legajo);
        if(indice!=-1)
        {
            strcpy(nombre,lista[indice].nombre);
            retorno=0;
        }
    }
    return retorno;
}*/






