/*Escribir un programa que lea un número y muestre el siguiente dibujo en función del valor leído.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void KP2018_2()
{
	int f;
	int i;
	int k;
	LeerNumeroEntero(&f);
	for (i = 1; i <= f; i++)
	{
		for (k = 1; k <= i; k++)
			printf("*");
		for (k = 1; k <= (f - i); k++)
			printf("A");
		printf("\n");
	}
	i = f;
	while (i > 1)
	{
		i--;
		for (k = 1; k <= i; k++)
			printf("A");
		for (k = 1; k <= (f - i); k++)
			printf("*");
		printf("\n");
	}
}