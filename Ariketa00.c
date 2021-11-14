/*  “a” eta “b” bi zenbaki oso irakurri eta a + b  kalkulatzen duen programa egin .
Escribir un programa que lea dos números enteros “a” y “b” y calcule
la suma de a + b */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// programa.Solucion.
void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int *z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa00()
{
	int N1;
	int N2;
	VisualizarMensaje("Meter dos numeros");
	//printf("Meter dos numeros");
	LeerNumeroEntero(&N1);
	N2 = f_LeerNumeroEntero();
	// visualizar resultado.
	VisualizarMensaje("La suma es ... ");
	N1 = N1 + N2;
	VisualizarNumeroEntero(N1);
}