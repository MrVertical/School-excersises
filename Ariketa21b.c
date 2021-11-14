/*10 primeros numeross fibonacci
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa21b()
{
	int a = 0;
	int b = 1;
	int c;
	int con;
	int n;
	LeerNumeroEntero(&n);
	printf("%d \n", a);
	printf("%d \n", b);
	for (con = 1; con <= (n-2); con++)
	{
		c = a + b;
		printf("%d \n", c);
		a = b;
		b = c;
	}

}