#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datawarehouse.h"

#define CANT 10
#define TAM_TRA 20

char nombres[CANT][TAM_TRA]={
    "Donato","German","Daniel",
    "Andrea","Carmen","Chepi",
    "Alex","Julio","Rosa","Camilo"};

char apellidos[CANT][TAM_TRA]={
    "Diaz","Gilardini","Pasco",
    "Ambrussiti","Caceres","Saenz",
    "Alvarez","Jaramillo","Buendia","Lopez"};


char sexos[CANT]={
    'm','m','m','f','f','f','m','m','f','m'};

int edades[CANT]={56,25,39,41,25,43,36,48,52,60};

int documentos[CANT]={40126493,44621458,43888777,38071976,22146789,35545696,32142788,41126475,20555321,20534512};

float sueldos[CANT]={
   15000,18000,20100,22500,30000,
   11000,10500,28000,29600,32500};


eFecha fechas[CANT]={
    {10,12,2018},{15,02,2012},{19,03,2020},
    {27,03,2018},{13,11,2021},{25,01,2013},
    {30,05,2015},{27,07,2016},{23,06,2019},
    {11,04,2011}};

char telefonos[CANT][TAM_TRA]={
    "11-50124578","4612-5207","4613-5112",
    "4615-5001","11-55124576","5212-5555",
    "4611-5990","11-37274577","9912-5887",
    "4402-5667"};


char mails[CANT][TAM_TRA]={
    "donato56@gmail.com","german25@gmail.com",
    "daniel39@gmail.com","andrea41@gmail.com",
    "carmen25@gmail.com","chepi43@gmail.com",
    "alex36@gmail.com","julio48@gmail.com",
    "rosa52@gmail.com","camilo60@gmail.com"};

char direcciones [CANT][TAM_TRA]={
    "fray cayetano 345","Av.Cordoba 1243",
    "Av.Corrientes 235","paseo Colon 478",
    "Av.Callao 367","catarmarca 3125",
    "humberto primo 1670","Av.Libertador 238",
    "Mozart 2334","Av.San juan 2701"};

char localidades[CANT][TAM_TRA]={
    "Capital Federal","Avellaneda",
    "Lanus","Castelli",
    "Vicente Lopez","La plata",
    "Paso del Rey","Pilar",
    "Moron","Valentin Alsina"};

int idSectores[CANT]={
    500,503,503,
    504,501,503,
    502,502,500,501};

eFecha fechas2[]={
    {1,1,2021},{1,1,2021},{1,1,2021},
    {1,1,2021},{1,1,2021},{1,1,2021},{2,1,2021},{2,1,2021},
    {2,1,2021},{2,1,2021},{2,1,2021},{3,1,2021},{3,1,2021},
    {3,1,2021},{3,1,2021},{3,1,2021},{3,1,2021},{4,1,2021},
    {4,1,2021},{4,1,2021},{4,1,2021},{4,1,2021},{4,1,2021}};

int legajos[]={
20000,20006,20001,20005,20007,
20002,20000,20004,20001,20003,
20008,20001,20006,20003,20004,
20008,20005,20000,20005,20003,
20007,20009,20004};

int idComidas[]={
    1000,1003,1002,1000,
    1000,1004,1002,1001,
    1004,1003,1003,1004,
    1000,1002,1004,1004,
    1001,1001,1000,1001,
    1002,1002,1000};

/**
 * \brief Hardcodea una lista de empleados con sus datos personales
 * \param lista Array de empleados a cargar
 * \param  tam Limite del array de empleados a cargar
 * \param  cant Cantidad de datos a cargar en el array de empleados
 * \param  pLegajo Puntero identificador a ser asignado al empledo
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int hardcodearTrabajos(eTrabajo lista[], int tam,int cant,int* pLegajo)
{
    int retorno=-1;

    if(lista!=NULL && tam>=0 && cant >=0 && cant <=tam &&pLegajo!=NULL)
    {
        for(int i=0;i<cant;i++)
        {
            strncpy(lista[i].nombre,nombres[i],TAM_PAT);
            lista[i].edad=edades[i];
            lista[i].sexo=sexos[i];
            lista[i].sueldo=sueldos[i];

            lista[i].fIngreso.dia=fechas[i].dia;
            lista[i].fIngreso.mes=fechas[i].mes;
            lista[i].fIngreso.anio=fechas[i].anio;

            lista[i].fNacimiento.dia=fechas[i].dia;
            lista[i].fNacimiento.mes=fechas[i].mes;
            lista[i].fNacimiento.anio=fechas[i].anio;

            strncpy(lista[i].telefono,telefonos[i],TAM_TEL);
            strncpy(lista[i].mail,mails[i],TAM_MAIL);
            lista[i].idSector=idSectores[i];

            lista[i].legajo=*pLegajo;
            (*pLegajo)++;
            lista[i].isEmpty=0;

            retorno=0;
        }
    }
    return retorno;
}*/

/**
 * \brief Hardcodea una lista de almuerzos con sus datos
 * \param almuerzos Array de almuerzos a cargar
 * \param  tama Limite del array de almuerzos a cargar
 * \param  cant Cantidad de datos a cargar en el array de almuerzos
 * \param  pId Puntero identificador a ser asignado al almuerzo
 * \return Retorna 0 (EXITO) -1 (ERROR)
 */
/*int hardcodearAlmuerzos(eAuto almuerzos[],int tama,int cant,int* pId)
{
    int retorno=-1;

    if(almuerzos!=NULL && tama>=0 && cant >=0 && cant <=tama && pId!=NULL)
    {
        for(int i=0;i<cant;i++)
        {
            almuerzos[i].id=*pId;
            almuerzos[i].LegEmpleado=legajos[i];
            almuerzos[i].idComida=idComidas[i];
            almuerzos[i].fecha=fechas2[i];

            (*pId)++;
            almuerzos[i].isEmpty=0;
            retorno=0;
        }
    }
    return retorno;
}*/

