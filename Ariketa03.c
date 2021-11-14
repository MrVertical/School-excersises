/* El trío pitagórico es el conjunto formado por tres números (a,b,c), es decir, a2+b2=c2 . Hacer un programa que
recibe tres números y que diga si forman un trío pitagórico.*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa03()
{
	int a;
	int b;
	int c;
	VisualizarMensaje("Introduce 3 numeros.");
	a=f_LeerNumeroEntero();
	b=f_LeerNumeroEntero();
	c=f_LeerNumeroEntero();
	if (a * a == b * b + c * c)
		VisualizarMensaje("Se forma el trio pitagorico.");
	else
		VisualizarMensaje("No se forma el trio pitagorico.");
}