/*Leer cinco números enteros y visualizar el mayor y el menor de ellos.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa05()
{
	int Contador;
	int N;
	int May;
	int Men;
	
	LeerNumeroEntero(&N);
	May = N;
	Men = N;
	for (Contador = 2; Contador <= 5; Contador++)
	{
		LeerNumeroEntero(&N);
		if (N > May)
			May = N;
		else if (N < Men)
			Men = N;
	}
	printf("El numero mas pequeño introducido es : % d y el mas grande es : % d  \n", Men, May);
}