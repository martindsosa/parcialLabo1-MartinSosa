/*
 * Servicio.h
 *
 *  Created on: 13 may. 2021
 *      Author: martindamian
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct
{
    int id; //PK
    char descripcion[20];
    float precio;
    int isEmpty;

}eServicio;


void HardcodearServicio(eServicio[],int);
void MostrarListadoServicio(eServicio[],int);


#endif /* SERVICIO_H_ */
