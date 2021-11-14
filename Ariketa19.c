/*El programa que muestre los primeros 100 números primos.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa19()
{
	int n = 0;
	int con;
	int div; div = 1;
	int cdiv; cdiv = 0;
	int cuantosprimos = 0;
	do
	{
		for (con = 1; con <= n; con++)
		{
			if (n % div == 0)
				cdiv++;
				div++;
		}
		if (cdiv <= 2)
		{
			printf("% d  ", n);
			cuantosprimos++;
		}
		n++;
		cdiv = 0;
		div = 1;
			
	} 
	while (cuantosprimos <= 100);
}
