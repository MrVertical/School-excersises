/*Leer una lista de números enteros y positivos y calcular el promedio. Para terminar la lista hay que meter 0.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa11()
{
	int N1; N1 = 0.0;
	int N2; N2 = 0;
	int Contador; Contador = 0;
	do
	{
		do
		{
			LeerNumeroEntero(&N1);
			if (N1 < 0)
				printf("Escribe un numero positivo. \n");
		} while (N1 < 0);
		if (N1 != 0)
		{
			Contador++;
			N2 = N2 + N1;
		}
	}
	while (N1 != 0);
	printf("El numero promedio es %.2f \n", (float)N2 / Contador);
}