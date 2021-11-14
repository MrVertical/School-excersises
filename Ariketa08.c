/*Hacer un programa que calcule el cociente y el resto de dos números enteros mediante restas.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa08()
{
	int K;
	int R;
	int Con;
	Con = 0;
	LeerNumeroEntero(&K);
	LeerNumeroEntero(&R);
	while (K >= R)
	{
		K = K - R;
		Con = Con + 1;
	}
	printf("Cociente: %d. Resto: %d. ", Con, R);
}