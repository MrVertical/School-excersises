/*Leer a y b, dos números enteros y positivos y visualizar en la pantalla los números primos que están entre ellos.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa20()
{
	int n;
	int con;
	int div;
	int cdiv; cdiv = 0;
	int a;
	int b;
	int aux;
	LeerNumeroEntero(&a);
	LeerNumeroEntero(&b);
	if (a>b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	for (n = a; n <= b; n++)
	{
		cdiv = 0;
		div = 1;
		for (con = 1; con <= n; con++)
		{
			if (n % div == 0)
				cdiv = cdiv++;
			div = div++;
		}
		if (cdiv <= 2)
			printf("%d ",n);
	}
}