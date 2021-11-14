/* Leer dos números enteros y escribir en orden. */

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa02()
{
	int N1;
	int N2;
	VisualizarMensaje("Escribe dos numeros");
	N1 = f_LeerNumeroEntero();
	N2 = f_LeerNumeroEntero();
	if (N1 <= N2)
	{
		VisualizarNumeroEntero(N2);
		VisualizarMensaje("es mas grande que ");
		VisualizarNumeroEntero(N1);
	}
	else
	{
		VisualizarNumeroEntero(N1);
		VisualizarMensaje("es mas grande que ");
		VisualizarNumeroEntero(N2);
	}
	}