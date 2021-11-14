/*Decir si es primo o no
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa13()
{
	int n;
	int con;
	int cdiv; cdiv = 0;
	LeerNumeroEntero(&n);
	for (con = 1; con <= n; con++)
	{
		if (n % con == 0)
			cdiv = cdiv++;
	}
	if (cdiv > 2)
		VisualizarMensaje("El numero no es primo.");
	else
		VisualizarMensaje("El numero es primo.");
}