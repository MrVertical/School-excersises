/*Escriba en la pantalla el primer n�mero que cumple esta condici�n: �entre 1 y x, la suma de todos los n�meros enteros debe ser mayor que 500�
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa14()
{
	int ac; ac = 0;
	int n; n = 0;
	while (n<=500)
	{
		ac++;
		n = n + ac;
	}
	printf("El numero es %d. \n", ac);
}