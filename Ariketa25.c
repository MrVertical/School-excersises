/* Después de leer M y N, dos números enteros y positivos, calcular los números que son más pequeños que M y múltiplos de N y visualizarlas. */

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa25()
{
	int m;
	int n;
	int i = 1;
	LeerNumeroEntero(&m);
	LeerNumeroEntero(&n);
	printf("1 ");
	while (i < m)
	{
		i++;
		if ((n % i) == 0)
		{
			printf("%d ", i);
			n = n / i;
			i = 1;
		}
	}
}