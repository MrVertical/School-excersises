/*Mostrar un coadrado de asteriscos cual lado sea el numero introducido
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa16()
{
	int n;
	int con1;
	int con2;
	LeerNumeroEntero(&n);
	for(con1=1;con1<=n;con1++)
	{
		for(con2=1;con2<=n;con2++)
		{
			printf("* ");
		}
		printf("\n");
	}
}