/*Diseña un algoritmo y su correspondiente programa en C que pida al usuario números hasta que se 
introduzca  un  número  que  sea  múltiplo  de  5.  El  programa  mostrará  en  pantalla  la  cantidad  de 
números que cumplen la condición de ser número abundante y la cantidad total de números leídos. 
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void KP2020_1()
{
	int n;
	int con = 0;
	int suma = 0;
	int conab = 0;
	int i;
	LeerNumeroEntero(&n);
	while ((n % 5) != 0)
	{
		suma = 0;
		for (i = 1; i < n; i++)
		{
			if ((n % i) == 0)
				suma = suma + i;
		}
		if (suma > n)
			conab++;
		con++;
		LeerNumeroEntero(&n);
	}
	printf("Has introducido %d numeros y de ellos %d eran abundantes.", con, conab);
}