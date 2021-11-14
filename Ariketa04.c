/*Hacer un programa que calcule la factura del agua de una casa. El cálculo del consumo se hace con estas
condiciones:
- La cuota del mes. 6€
- Los primeros 50 litros no se pagan
- 0,1€ por litro en los primeros 200 litros
- A partir de ahí 0,3€ por litro
Si en los anteriores algoritmos el usuario ha metido un número negativo, se visualizará un mensaje de error.
*/

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void Ariketa04()
{
	int L;
	L = -1;
	VisualizarMensaje("Escribe los litros consumidos este mes:");
	while (L < 0)
	{
		L = f_LeerNumeroEntero();
		if (L < 0)
			VisualizarMensaje("Introduce un numero postivo.");
	}
	if ((50 < L) && (L < 200))
		printf("Hay que pagar : %.2f euros.", ((L-50) * 0.1 + 6));
	else if (200 <= L)
	{
		printf("Hay que pagar : %.2f euros.", (15 + (L-200) * 0.3 + 6));
	}
	else
			printf("Hay que pagar 6 euros.");
}
