/*Mostrar un cubo de asteriscos cual lado sea el numero introducido
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa17()

{
	int n;
	int con1; con1 = 1;
	int con2;
	int con3; con3 = 0;
	LeerNumeroEntero(&n);
	while (con1 <= n)
	{
		con3++;
		con2 = 1;
		while (con2 <= (con3 - 1))
		{
			printf("*");
			con2++;
		}
		printf("* \n");
		con1++;
	}
}