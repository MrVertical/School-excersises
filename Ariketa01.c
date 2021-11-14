/* Leer dos números y visualizar el mayor.Repetir el ejercicio con tres números. */

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa01()
{
	int N1;
	int N2;
	VisualizarMensaje("Meter dos numeros:");
	N1 = f_LeerNumeroEntero();
	N2 = f_LeerNumeroEntero();
	
	if (N1 > N2)
	{
		VisualizarMensaje("El numero mas grande es ");
		VisualizarNumeroEntero(N1);
	}
	else if (N1==N2)
	{
		VisualizarMensaje("Son iguales");
	}
	else
	{
		printf("%d es nas grande que %d", N2, N1);
	}
}