/*Hacer un programa que calcule la factorial de un numero.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa09()
{
	int F;
	int N1;
	int sol;
	N1 = 0;
	sol = 1;
	VisualizarMensaje("Numero para hacer la factorial:");
	LeerNumeroEntero(&F);
	if (F == 0)
		printf("La factorial es 0. \n");
	else
	{
		while (N1 != F)
		{
			N1 = N1 + 1;
			sol = N1 * sol;
		}
			printf("La factorial es %.2f \n", sol);
	}
}