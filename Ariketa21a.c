/*10 primeros numeross fibonacci
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa21a()
{
	int a=0;
	int b=1;
	int c;
	int con;
	printf("%d \n", a);
	printf("%d \n", b);
	for (con = 1; con <= 8; con++)
	{
		c = a + b;
		printf("%d \n", c);
		a = b;
		b = c;
	}

}