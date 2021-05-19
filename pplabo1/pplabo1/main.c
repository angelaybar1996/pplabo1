#include <stdio.h>
#include <stdlib.h>

#include "auto.h"
#include "utn.h"
#include "datawarehouse.h"
#include "marca.h"
#include "color.h"
#include "servicio.h"
#include "trabajo.h"

#define TAM_COL 5
#define TAM_SER 5
#define TAM_MAR 5
#define TAM_TRA 10
#define TAM_AUTO 10

int main(void)
{
    int opcion;
    //eTrabajo trabajos[TAM_TRA];
    eAuto autos[TAM_AUTO];
    eMarca marcas[TAM_MAR]={{1000,"Renault"},{1001,"Fiat"},{1002,"Ford"},{1003,"Chevrolet"},{1004,"Peugeot"}};
    eServicio servicios[TAM_SER]={{20000,"Lavado",250},{20001,"Pulido",300},{20002,"Encerado",400},{20003,"Completo",600}};
    eColor colores[TAM_COL]={{5000,"Negro"},{5001,"Blanco"},{5002,"Gris"},{5003,"Rojo"},{5004,"Azul"}};

    //int nextTrabajo=40000;
    int nextAuto=80000;
    //int auxLegajo;
    int auxIndice;
    int decision;
    eAuto auxAuto;

    //inicializarTrabajos(trabajos,TAM_TRA);
    inicializarAutos(autos,TAM_AUTO);

    //hardcodearTrabajos(trabajos,TAM_TRA,10,&nextTrabajo);//con esto traigo los datos harcodeadoss
    //hardcodearAlmuerzos(autos,TAM_AUTO,23,&nextAuto);

    do
    {
        if(utn_getNumero(&opcion,
                         "\n---------------------\n"
                         "LAVADERO DE AUTOS\n"
                         "---------------------\n"
                         "\n1.Alta Auto"
                         "\n2.Baja Auto"
                         "\n3.Modificar Auto"
                         "\n4.Listar Autos"
                         "\n5.Listar Marcas"
                         "\n6.Listar Colores"
                         "\n7.Listar Servicios"
                         "\n8.Alta Trabajo"
                         "\n9.Listar Trabajos"
                         "\n10.------------"
                         "\n11.Informes"
                         "\n12.Salir\n\n"
                         "Ingrese opcion:",
                         "Opcion no valida",1,12,3)==0)
        {
            switch(opcion)
            {
                case 1:
                    if(altaAuto(autos,TAM_AUTO, marcas,TAM_MAR, colores, TAM_COL,&nextAuto)==0)
                    {
                        system("cls");
                        printf("Alta Auto exitosa\n");
                        system("pause");
                    }
                    else
                    {
                        system("cls");
                        printf("No hay lugar\n");
                        system("pause");
                    }
                    break;
                case 2:
                    mostrarAutos(autos, TAM_AUTO, marcas, TAM_MAR, colores, TAM_MAR);
                    if(utn_getTexto(auxAuto.patente,TAM_PAT,
                    		"\nIngrese la patente del auto que desea eliminar",
							"\nError,la patente no es valida", 2)==0)
                    {
                        auxIndice=buscarAuto(autos, TAM_AUTO,auxAuto.patente);

                        if(auxIndice>=0 && mostrarAuto(autos[auxIndice], marcas, TAM_MAR, colores, TAM_COL)==0)
                        {
                            if(utn_getNumero(&decision,
                                             "Desea eliminarlo?\n"
                                             "\n1.[si]\n"
                                             "\n2.[no]\n",
                                             "Opcion no valida",1,2,1)==0)
                            {
                                if(decision==1 &&
                                		bajaTrabajo(autos, TAM_AUTO, auxIndice)==0)//bien
                                {
                                    system("cls");
                                    printf("\nBaja realizada con exito\n");
                                    system("pause");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nDar de baja cancelada\n");
                                    system("pause");
                                }
                            }
                        }
                    }
                    break;
                case 3:
                    /*mostrarTrabajos(trabajos,TAM_TRA,colores,TAM_COL);
                    if(utn_getNumero(&auxLegajo,
                                     "\nIngrese legajo del empleado a modificar",
                                     "\nError, legajo no valido",20000,nextTrabajo,1)==0)
                    {
                        auxIndice=buscarTrabajo(trabajos,TAM_TRA,auxLegajo);
                        if(auxIndice>=0 && mostrarTrabajo(&trabajos[auxIndice],colores,TAM_COL)==0)
                        {
                            if(utn_getNumero(&decision,
                                             "Desea modificarlo?\n"
                                             "\n1.[si]\n"
                                             "\n2.[no]\n",
                                             "Opcion no valida",1,2,1)==0)
                            {
                                if(decision==1 &&
                                        menuModificarTrabajo(trabajos,TAM_TRA,auxIndice)==0)
                                {
                                    system("cls");
                                    printf("\nModificacion realizada con exito\n");
                                    system("pause");
                                }
                                else
                                {
                                    system("cls");
                                    printf("\nModificacion cancelada\n");
                                    system("pause");
                                }
                            }
                        }
                    }*/
                    break;
                case 4:
                    system("cls");
                    //mostrarTrabajos(trabajos,TAM_TRA,colores,TAM_COL);
                    system("pause");
                    break;
                case 5:
                    system("cls");
                    mostrarMarcas(marcas, TAM_MAR);//bien
                    system("pause");
                    break;
                case 6:
                    system("cls");
                    mostrarColores(colores,TAM_COL);//bien
                    system("pause");
                    break;
                case 7:
                    system("cls");
                    mostrarServicios(servicios,TAM_SER);//bien
                    system("pause");
                    break;
                case 8:
                    system("cls");
                    //mostrarAutos(autos,TAM_AUTO,trabajos,TAM_TRA,servicios,TAM_SER);
                    system("pause");
                    break;
                case 9:
                    /*if(altaAuto(autos,TAM_AUTO,servicios,TAM_SER,trabajos,TAM_TRA,colores,TAM_COL,&nextAuto)==0)
                    {
                        system("cls");
                        printf("\nAlta Almuerzo exitosa\n\n");
                        system("pause");
                    }
                    else
                    {
                        system("cls");
                        printf("\nNo hay lugar\n\n");
                        system("pause");
                    }*/
                    break;
                case 10:
                    system("cls");

                    system("pause");
                    break;
                case 11:
                    system("cls");

                    system("pause");
                    break;
                case 12:
                    printf("Salir");
                    break;
            }
        }
    }while(opcion!=12);

    return 0;
}
