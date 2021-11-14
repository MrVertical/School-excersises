/*  “a” eta “b” bi zenbaki oso irakurri eta a + b  kalkulatzen duen programa egin .
Escribir un programa que lea dos números enteros “a” y “b” y calcule
la suma de a + b */

void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void KP2018_3()
{
	int n;
	int d;
	int con6;
	int dig;
	int con6tot = 0;
	LeerNumeroEntero(&n);
	d = n;
	while (n != 0)
	{
		con6 = 0;
		while (n > 0)
		{
			dig = n % 10;
			n = n / 10;
			if (dig == 6)
				con6++;
		}
		printf("En %d Hay %d digitos que son 6. \n", d, con6);
		con6tot = con6tot + con6;
		LeerNumeroEntero(&n);
		d = n;

	}
	printf("%d digitos han sido 6. \n", con6tot);
}