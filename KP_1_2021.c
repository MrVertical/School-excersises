void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

void kp2021_1()
{
	int n;
	int i; 
	int dig;
	int cuantosprimos = 0;
	int cuantosmultiplos;
	int d;
	LeerNumeroEntero(&n);
	d = n;
	while (n > 0)
	{
		dig = n % 10;
		n = n / 10;
		cuantosmultiplos = 0;
		for (i = 1; i <= dig; i++)
			if ((dig % i) == 0)
				cuantosmultiplos++;
		if (cuantosmultiplos <= 2)
			cuantosprimos++;
	}
	if (cuantosprimos >= 3)
		printf("El numero %d es alto. \n", d);
	else
		printf("El numero %d es bajo. \n", d);
}

void kp2021_2()
{
	int n;
	int k;
	int i;
	LeerNumeroEntero(&n);
	for (i = 1; i <= n; i++)
	{
		k = 0;
		while (k < (n - i))
		{
			k++;
			printf("%d ", k);
		}
		printf("* ");
		k++;
		while (k < n)
		{
			printf("0 ");
			k++;
		}
		printf("\n");
	}
}

void kp2021_3()
{
	int n;
	int i;
	int a;
	int b;
	LeerNumeroEntero(&n);
	while (n > 0)
	{
		i = 0;
		while (i <= n)
		{
			i++;
			a = 3 * (i * i);
			b = 2 * i;
			if (n == (a - b))
			{
				i = n + 1;
				printf("El numero %d es octogonal.\n", n);
			}
		}
		LeerNumeroEntero(&n);
	}
}