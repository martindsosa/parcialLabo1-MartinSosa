/*
 * Trabajo.c
 *
 *  Created on: 13 may. 2021
 *      Author: martindamian
 */


#include "Trabajo.h"
#include <string.h>
#include <stdio.h>
#define LIBRE 0
#define OCUPADO 1

int TrabajoIdIncremental = 2000;

int BuscarLibre(eTrabajo list[], int tamT)
{
	int retorno = -1;
	int i;

	if (list != NULL && tamT > 0)
	{
		for (i = 0; i < tamT; i++) {
			if (list[i].isEmpty == LIBRE) {
				retorno = i;
				break;
			}
		}
	}

	return retorno;
}

int TrabajoGetID() {
	//INCREMENTA VARIABLE ESTATICA CADA VEZ QUE SE LLAMA ESTA FUNCION
	return TrabajoIdIncremental += 1;
}






