/*
 * Trabajo.h
 *
 *  Created on: 13 may. 2021
 *      Author: martindamian
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_
typedef struct
{
	int dia;
	int mes;
	int anio;
}eFecha;

typedef struct
{
    int id;	//pk
    char marcaBicicleta[20];
    int rodado;
    int idServicio;
    eFecha fecha;
    int isEmpty;

}eTrabajo;


int BuscarLibre(eTrabajo[], int tamT);
int TrabajoGetID();

#endif /* TRABAJO_H_ */
