/*Diseña un algoritmo y su correspondiente programa en C que pida al usuario un número de 4 cifras 
(el sistema lo comprobara y seguirá pidiendo números hasta que esta condición se cumpla, es decir, hasta se introduzca un número de 4 cifras). 
Para ese número que cumpla la condición hay que indicar cuantas cifras pares y cuantas impares tiene. 
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void KP2020_2()
{
	int n;
	int con;
	int dig;
	int k = 1;
	int conpar;
	int coninpar;
	while (k != 0)
	{
		con = 0;
		conpar = 0;
		coninpar = 0;
		LeerNumeroEntero(&n);
		while (0 < n)
		{
			dig = n % 10;
			k = dig % 2;
			if (k == 0)
				conpar++;
			else
				coninpar++;
			con++;
			n = n / 10;
		}
		if (con == 4)
		{
			printf(" %d digitos son par y % d digitos son inpar. \n", conpar, coninpar);
			k = 0;
		}
		else

			printf("Introduce numeros de 4 digitos. \n");
	}
}
