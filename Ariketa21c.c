/*Los numeros de fibonacci pero en primos solo 10
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa21c()
{
	int a = 0;
	int b = 1;
	int c;
	int fprimos = 0;
	int con;
	int div;
	int cdiv;
	while (fprimos <= 10)
	{
		c = a + b;
		cdiv = 0;
		div = 1;
		for (con = 1; con <= c; con++)
		{
			if (c % div == 0)
				cdiv = cdiv++;
			div = div++;
		}
		if (cdiv <= 2)
		{
			printf("%d ", c);
			fprimos++;
		}
		a = b;
		b = c;
	}
}