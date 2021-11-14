/*  Escribir un programa que lea un número y muestre el siguiente dibujo en función del valor leído. Si el número
es impar, visualizar un mensaje diciendo que no se puede dibujar.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// programa.Solucion.
void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void KP2019_2()
{
	int f;
	int c;
	int i;
	int i2=1;
	int k2;
	int k3=1;
	LeerNumeroEntero(&f);
	c = f * 2;
	for (i = 1; i <= f; i++)
	{
		for(k2=1;k2<=i;k2++)
			printf("*");
		while (i2 < (c - k3))
		{
			printf("A");
			i2++;
		}
		for (k2 = 1; k2 <= i; k2++)
			printf("*");
		printf("\n");
		i2 = 1;
		k3=k3+2;
	}
}