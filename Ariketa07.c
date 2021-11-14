/*Hacer un programa que calcule la multiplicación de dos números enteros mediante sumas.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa07()
{
	int N1;
	int N2;
	int Sol;
	int Contador;
	LeerNumeroEntero(&N1);
	LeerNumeroEntero(&N2);
	Sol = 0;
	for (Contador = 1; Contador <= N2; Contador++)
		Sol = Sol + N1;
	printf("La solucion es %d. \n", Sol);
}