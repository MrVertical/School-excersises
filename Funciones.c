#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Pausa()
{
	char str[128];
	printf("Sakatu \"return\" amaitzeko .....");
	fgets(str, 128, stdin);
}

void LeerNumeroEntero(int *z)
{
	char str[128];
	int zbk;
	printf("Sartu zenbaki bat :  ");
	fgets(str, 128, stdin);
	sscanf(str, "%d", &zbk);
	*z = zbk;
}

int f_LeerNumeroEntero()
{
	char str[128];
	int zbk;
	printf("Sartu zenbaki bat :  ");
	fgets(str, 128, stdin);
	sscanf(str, "%d", &zbk);
	return zbk;
}

void LeerNumeroEntero_Mensaje(char m[], int *z)
{
	char str[128];
	int zbk;
	printf(m);
	fgets(str, 128, stdin);
	sscanf(str, "%d", &zbk);
	*z = zbk;
}

int f_LeerNumeroEntero_Mensaje(char m[])
{
	char str[128];
	int zbk;
	printf(m);
	fgets(str, 128, stdin);
	sscanf(str, "%d", &zbk);
	return zbk;
}


void VisualizarNumeroEntero(int zbk)
{
	printf("..... %d \n", zbk);
}
void VisualizarNumeroEntero_Mensaje(char m[], int zbk)
{
	printf(m);
	printf("..... %d \n", zbk);

}

void VisualizarMensaje(char m[])
{
	printf(m);
	// hurrengo lerrora salto egin.
	printf("\n");
}






