/* Leer dos números enteros y escribir en orden. */

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void KP2017_2()
{
	int n;
	int i = 1;
	int k = 0;
	LeerNumeroEntero(&n);
	while (k <= n)
	{
		for (i = 1;i<=k;i++)
			printf("*");
		printf("\n");
		k++;
	}
	k = n-1;
	while (k >= 1)
	{
		for (i = 1; i <= k; i++)
			printf("*");
		printf("\n");
		k--;
	}
}