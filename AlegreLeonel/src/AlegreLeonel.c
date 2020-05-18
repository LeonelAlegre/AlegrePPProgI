/*
 ============================================================================
 Name        : AlegreLeonel.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

float aplicarDescuento(float preico);
int contarCaracteres(char* cadena, char letra); //no funciona

int main(void) {
	float precio;
	float precioDescuento;

	char cadena[9999];
	char letra;
	int contadorLetra;


	//FUNCION aplicarDescuento:
	printf("***** Aplicar Descuento: *****\n");
	if(utn_getNumeroFlotante(&precio, "Ingresar monto a realizar el descuento: \n", "Error, monto ingresado erroneo\n", 0, 999999999999, 2) == 0)
	{
		precioDescuento = aplicarDescuento(precio);
		printf("Precio sin descuento: %.2f --- Precio con cinco porciento de descuento: %.2f\n\n", precio, precioDescuento);
	}
	//FUNCION contarCaracteres:
	if(	utn_getString(cadena, sizeof(cadena),"Ingresar cadena: \n", "Error al ingresar la cadena\n", 2) == 0 &&
		utn_getChar(&letra, "Ingresar letra a buscar: \n", "Error al ingresar letrar\n",'A','z', 2) == 0)
	{
		contadorLetra = contarCaracteres(cadena, letra);
		printf("Cadena: %s\nVeces que aparece la letra %c: %d\n", cadena, letra, contadorLetra);
	}

	system("pause");
	return EXIT_SUCCESS;
}
float aplicarDescuento(float precio)
{
	int resultado;

	if(precio == 0)
	{
		resultado = precio;
	}else
	{
		resultado = precio - (precio * 5/100);
	}
	return resultado;
}
int contarCaracteres(char* cadena, char letra)
{
	int contadorLetra = 0;

	if(cadena != NULL )
	{
		for(int i = 0; i < sizeof(cadena); i++)
		{
			if(cadena[i] == letra)
			{
				contadorLetra++;
			}
		}
	}
	return contadorLetra;
}










