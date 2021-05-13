/*
 * TrabajoServicio.c
 *
 *  Created on: 13 may. 2021
 *      Author: martindamian
 */
#include "utn.h"
#include "TrabajoServicio.h"
#include <string.h>
#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1


int CargarTrabajos(eTrabajo lista[], int tamT,eServicio listaServicio[],int tamS)
{

    int indice;
    int retorno = -1;
    char resp;
    int id;
    indice = BuscarLibre(lista, tamT);
    if(indice!=-1)
    {
    	id = TrabajoGetID();
    	lista[indice] = PedirDatosTrabajo(listaServicio,tamS,id);
    	resp = GetChar("Desea realizar el alta? ","Error Reingrese ",'s','n');
    	if(resp == 's')
    	{
    		lista[indice].isEmpty = OCUPADO;
    		retorno = 1;
    	}
    	else
    	{
    		retorno = 0;
    	}
    }

    return retorno;

}
eTrabajo PedirDatosTrabajo(eServicio lista[],int tamS,int id)
{
    eTrabajo miTrabajo;
    eFecha auxFecha;
    char auxMarca[25];

    miTrabajo.id = id;
	GetString("Ingrese Marca de Bicicleta: ", "Error! Demasiado largo Reingrese: ",auxMarca, 25);
	strcpy(miTrabajo.marcaBicicleta,auxMarca);
	miTrabajo.rodado = GetInt("Ingrese Rodado: ", "Error! Sector Valido 14-30 Reingrese ",14, 30);
	MostrarListadoServicio(lista,tamS);
	auxFecha.dia = GetInt("Ingrese dia: ", "Error! Dia No Valido.Reingrese ",1, 31);
	auxFecha.mes = GetInt("Ingrese mes: ", "Error! Mes No Valido.Reingrese ",1, 12);
	auxFecha.anio = GetInt("Ingrese anio: ", "Error! Anio No Valido.Reingrese ",1900, 2022);
	miTrabajo.fecha = auxFecha;

    return miTrabajo;
}
