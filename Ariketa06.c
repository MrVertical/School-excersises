/*Leer cinco números enteros y visualizar el mayor y el menor de ellos.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa06()
{

	int N;
	int May;
	int Men;
	VisualizarMensaje("Escribe una secuenia de numeros");
	do
	{
		LeerNumeroEntero(&N);
		if (N == 0)
			VisualizarMensaje("Numero erroneo");
	} 
	while (N != 0);
	May = N;
	Men = N;
	do
	{
		LeerNumeroEntero(&N);
		if ((N == 0) || (N = May))
			VisualizarMensaje("Numero erroneo");
	}
	while ((N == !0) && (N = !May));
	while (N == !0)
	{
		if (N <= Men)
			Men = N;
		else if (N >= May)
			May = N;
	}
	printf("El numero mas grande introducido es %d y el mas pequeño es %d", May, N);
}