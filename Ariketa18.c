/*leer la suma de los digitos de un numero
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa18()
{
	int n;
	int r;
	int suma = 0;
	LeerNumeroEntero(&n);
	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		suma = suma + r;
	}
	printf("La suma de los digitos es %d. \n", suma);

}