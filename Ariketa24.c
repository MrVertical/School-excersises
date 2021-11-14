/*Comprobar si el numero es capicua
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa24()
{
	int n;
	int nintroducido;
	int nuevo = 0;
	int uni;
	LeerNumeroEntero(&n);
	nintroducido = n;
	while(n != 0)
	{
		uni = n % 10;
		n = n / 10;
		nuevo = (nuevo * 10) + uni;
	}
	if (nintroducido == nuevo)
		printf("El numero introducido es capicua. \n");
	else
		printf("El numero introducido no es capicua. \n");
}