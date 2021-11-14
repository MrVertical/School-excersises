/*Hacer un programa que escriba los n�meros perfectos inferiores a 1000. Un n�mero perfecto es cuando la
suma de sus divisores(sin contar el n�mero) da el mismo n�mero.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa23()
{
	int n;
	int ac;
	int d;
	for (n = 1; n <= 999; n++)
	{
		ac = 0;
		d = 0;
		for (d = 1; d <= (n - 1); d++)
			if ((n % d) == 0)
				ac = ac + d;
		if (n == ac)
			printf("%d, ", n);
	}
	
}