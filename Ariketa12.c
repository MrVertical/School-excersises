/*Calcular los dijitos de el numero introducido
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa12()
{
	int N1; 
	int Contador; Contador = 0;
	LeerNumeroEntero(&N1);
	do
	{
		Contador++;
		N1 = N1 / 10;
	} 
	while (N1 > 0);
	printf("El numero introducido tiene %d digitos. \n", Contador);
}