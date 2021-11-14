/*Hacer un programa que visualice los divisores de un numero.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa10()
{
	int n;
	int contador;
	LeerNumeroEntero(&n);
	for (contador = 1; contador <= n; contador++)
	{
		if ((n%contador) == 0)
			VisualizarNumeroEntero(contador);
	}
}