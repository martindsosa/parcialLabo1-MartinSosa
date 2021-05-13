/*
 ============================================================================
 Name        : primerParcial.c
 Author      : Martin D. Sosa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include<stdlib.h>
#include "TrabajoServicio.h"

#define TOPETRABAJO 10
#define TOPESERVICIO 10


int menu(void)
{
    eTrabajo listaTrabajos[TOPETRABAJO];
    eServicio listaServicios[TOPESERVICIO];
    int retorno;
    int miOpcion;

    HardCodearServicio (listaServicios,TOPESERVICIO);
    do
    {
        printf("1. Alta\n");
        printf("2. Modificacio\n");
        printf("3. Baja\n");
        printf("4. Listar Trabajos\n");
        printf("10. Salir\n");
        printf("Ingrese una opcion: ");
        fflush(stdin);
        scanf("%d", &miOpcion);

        switch(miOpcion)
        {
            case 1:
            	retorno =  CargarTrabajos(listaTrabajos, TOPETRABAJO,listaServicios,TOPESERVICIO);
				if(retorno !=-1)
				{
					printf("Trabajo dado de alta con exito!!!");
				}
				else
				{
					printf("No hay lugar para un alta de trabajo!!");
				}
            break;
            case 2:
                printf("modificacion!!!\n");
            break;
            case 3:
                printf("baja!!!\n");
            break;
            case 4:
                printf("listar!!!\n");
            break;
            default:
                printf("NO EXISTE Opcion ingresada !!!\n");
        }

    }while(miOpcion!=10);

    return EXIT_SUCCESS;
}

