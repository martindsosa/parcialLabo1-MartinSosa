/*
 * Servicio.c
 *
 *  Created on: 13 may. 2021
 *      Author: martindamian
 */


#include <string.h>
#include <stdio.h>
#include "Servicio.h"
#define LIBRE 0
#define OCUPADO 1


void HardCodearServicio(eServicio listaServicios[],int tamServicio)
{
    int i;

    int id[4]={1,2,3,4};
    char descripcion[4][20]={"Limpieza","Parche","Centrado","Cadena"};
    float precio[4]={250,300,400,350};
    int estado[4]={OCUPADO,OCUPADO,OCUPADO,OCUPADO};


    for(i=0; i<tamServicio; i++)
    {
        listaServicios[i].id =id[i];
        strcpy(listaServicios[i].descripcion, descripcion[i]);
        listaServicios[i].precio = precio[i];
        listaServicios[i].isEmpty = estado[i];
    }
}



void MostrarListadoServicio(eServicio listaServicio[],int tamS)
{
    int i;
    char flagHayServicio;
    printf("++++++++++++++++ Listado de Servicios ++++++++++++++++\n\n");
    for (i=0;i<tamS;i++)
    {
        if (listaServicio[i].isEmpty == OCUPADO )
        {
            flagHayServicio = 's';
            printf("%3d %20s  %5.2f \n",listaServicio[i].id
                                       ,listaServicio[i].descripcion
									   ,listaServicio[i].precio);
        }

    }
    if (flagHayServicio != 's')
    {
        printf ("\nNo hay Servicios DADOS DE ALTA !!!\n");
    }
    else
    {
        printf("++++++++++++++ FIN  DE Listado de Servicios +++++++++++++\n");
    }

}
