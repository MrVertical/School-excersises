/*Leer cinco números enteros y visualizar el mayor y el menor de ellos.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa15()
{
	int n;
	int c; c = 1;
	LeerNumeroEntero(&n);
	while (c <= n)
	{
		printf("*");
		c++;
	}
	printf("\n");
}