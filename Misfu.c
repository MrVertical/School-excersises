void VisualizarMensaje(char m[]);
void LeerNumeroEntero(int* z);
void VisualizarNumeroEntero(int zbk);
int f_LeerNumeroEntero();

//Ariketaf01
int  ariketaf01(int N1, int N2)
{
	int Sol;
	int Contador;
	Sol = 0;
	for (Contador = 1; Contador <= N2; Contador++)
		Sol = Sol + N1;
	return Sol;
}

//Ariketaf02
void  ariketaf02(int n)
{
	int k;
	int i;
	for (i = 1; i <= n; i++)
	{
		k = 1;
		while (k <= n)
		{
			printf("* ");
			k++;
		}
		printf("\n");
	}
}

/* Ariketaf03
Dise�ar una funci�n que al recibir como par�metros de entrada dos n�meros enteros X y n,
calcule la suma de la siguiente sucesi�n.Para calcular potencias dise�ar y utilizar una funci�n.*/
long double potencia(int n, int k)
{
	int i;
	long double sol = n;
	if (k == 0)
		return 1;
	for (i = 1; i < k; i++)
		sol = sol * n;
	return sol;
}

int ariketaf03(int x, int n)
{
	int i;
	int sol = 1;
	for (i = 1; i <= n; i++)
		sol = sol + potencia(x, i);
	return sol;
}

/*Ariketaf04
Se introducir�n n�meros enteros por el teclado hasta escribir un 0, el programa ha de indicar
cuantos d�gitos tiene cada uno. Para ello utilizar una funci�n que reciba como par�metro un
n�mero entero y devuelva el n�mero de d�gitos de que consta.*/
int cuantosdigitos(int n)
{
	int con = 0;
	while (n > 0)
	{
		con++;
		n = n / 10;
	}
	return con;
}

void ariketaf04()
{
	int n;
	LeerNumeroEntero(&n);
	while (n != 0)
	{
		printf(" %d tiene %d digitos. \n", n, cuantosdigitos(n));
		LeerNumeroEntero(&n);
	}
}
/*Ariketaf05
Escribir un programa que calcule el valor de 
un n�mero combinatorio utilizando la funcion del factorial.*/
long double factorial(int f)
{
	long double N1 = 0;
	long double sol = 1;
	if (f == 0)
		return sol;
	else
	{
		while (N1 != f)
		{
			N1++;
			sol = N1 * sol;
		}
		return sol;
	}
}

float combinatorio(int m, int n)
{
	float x;
	x = factorial(m) / (factorial(n) * factorial(m - n));
	return x;
}

/*Ariketaf06
Hacer un programa que escriba todos los n�meros primos que haya entre dos n�meros enteros
introducidos por el teclado. Para ello dise�ad una funcion que al recibir un n�mero diga si es o no primo.*/
int primo(int n)
{
	int con;
	int div = 1;
	int cdiv = 0;
	for (con = 1; con <= n; con++)
	{
		if (n % div == 0)
			cdiv = cdiv++;
		div = div++;
	}
	if (cdiv <= 2)
		return 1;
	else
		return 0;
	
}

void ariketaf06()
{
	int n1;
	int n2; 
	int aux;
	int i;
	LeerNumeroEntero(&n1);
	LeerNumeroEntero(&n2);
	if (n1 < n2)
	{
		aux = n2;
		n2 = n1;
		n1 = aux;
	}
	for (i = n2; i <= n1; i++)
		if (primo(i) == 1)
			printf("%d \n", i);
}

/*Ariketaf07
Dise�ar una funci�n que reciba como par�metro un a�o determinado y diga si es o no bisiesto.
(Un a�o se considera bisiesto si es m�ltiplo de 4, no siendo los m�ltiplos de 100 aunque si los
son los de 400) */
int bisiesto(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}

void ariketaf07()
{
	int n;
	LeerNumeroEntero(&n);
	if (bisiesto(n) == 0)
		printf("%d no es bisiesto. \n", n);
	else
		printf("%d es bisiesto. \n", n);
}

/*Ariketaf08
Dise�ar una funcion que reciba un numero entero positivo como parametro y
devuelva el elemento i de la sucesion de fibonacci*/
int n_fibo(int n)
{
	int a = 0;
	int b = 1;
	int c;
	int i;
	for (i = 1; i <= n; i++)
	{
		c = a + b;
		b = a;
		a = c;
	}
	return c;
}

void ariketaf08()
{
	int n;
	LeerNumeroEntero(&n);
	printf("%d es el %d numero de fibonacci. \n", n_fibo(n), n);
}

/*Ariketaf09
Escribir un programa que lea una fecha por el teclado(a�o, nes, dia) y 
calcule el numero de dias que faltan para finalizar el mes de la fecha*/
int diasmes(int a�o,int mes)
{
	switch (mes)
	{
	case 1: return 31;
		break;
	case 2: if (bisiesto(a�o) == 1)
				return 29;
			else
				return 28;
		break;
	case 3: return 31;
		break;
	case 4: return 30;
		break;
	case 5: return 31;
		break;
	case 6: return 30;
		break;
	case 7: return 31;
		break;
	case 8: return 31;
		break;
	case 9: return 30;
		break;
	case 10: return 31;
		break;
	case 11: return 30;
		break;
	case 12: return 31;
		break;
	}
}

void restodias()
{
	int a�o;
	int mes;
	int dia;
	int k;
	printf("Introduce el a�o. \n");
	LeerNumeroEntero(&a�o);
	printf("Introduce el mes. \n");
	LeerNumeroEntero(&mes);
	printf("Introduce el dia. \n");
	LeerNumeroEntero(&dia);
	k = (diasmes(a�o, mes)- dia);
	if (k == 1)
		printf("Quedan %d dia. \n", k);
	else if(k>=0)
		printf("Quedan %d dias. \n", k);
	else
		printf("Introduce un numero valido. \n");
		
}

/*Ariketaf10
Dise�ar una funci�n que determine si un n�mero es o no perfecto. (Un n�mero es perfecto si
la suma de sus divisores da como resultado el mismo n�mero. 6 es un n�mero perfecto).
Utilizando esta funci�n calcular todos los n�meros perfectos ente 1 y 200.*/
int n_perf(int n)
{
	int i;
	int sum = 0;
	for (i = 1; i < n; i++)
		if (n % i == 0)
			sum = sum + i;
	if (n == sum)
		return 1;
	else
		return 0;
}

void ariketaf10()
{
	int i;
	int k;
	for (i = 1; i <= 200; i++)
	{
		if (n_perf(i) == 1)
			printf("%d \n", i);
	}
}

/*Ariketaf11

Dise�ar una funci�n que reciba como par�metro de entrada un n�mero entero y
de c�mo salida el mismo n�mero escrito a la inversa*/
int zbkalderantziz(int n)
{
	int dig;
	int num = 0;
	while (n != 0)
	{
		dig = n % 10;
		num = (num *10) +dig;
		n = n / 10;
	}
	return num;
}

void ariketaf11()
{
	int n;
	LeerNumeroEntero(&n);
	printf("%d \n", zbkalderantziz(n));
}

/*Ariketaf12

El siguiente desarrollo calcula el valor de Sen(x). 
Dise�ar una funci�n tal que reciba el valor de �x� y devuelva el valor del Sen(x).
(utilizar las funciones de potencia y factorial)*/
long double sin(int x)
{
	int i;
	long double sum;
	long double sin=0;
	for (i=0; i <=20 ; i++)
	{
		long double a;
		long double b;
		long double c;
		a = potencia(-1, i);
		b = potencia(x, 2 * i + 1);
		c = factorial(2 * i+1);
		sum=(a*(b/c));
		sin = sin + sum;
	}
	return sin;
}

void ariketaf12()
{
	int n;
	LeerNumeroEntero(&n);
	printf("%.10f \n", sin(n));
}

/*Ariketaf13

Hacer un programa que al introducir dos fechas (a�o, mes, d�a) nos calcule el n�mero de d�as
que hay entre las dos fechas.
Para ello dise�ar tres funciones.
a) Funci�n  �fbisiesto�.  Recibe  como  par�metro  de  entrada  el  a�o  e  indica  si  es
bisiesto o no.
b) Funcion �fdiasmes�. Recibe como par�metro el a�o y el mes e indica cuantos d�as
tiene ese mes.
c) Funci�n  �fdiasfin�.  Recibe  como  par�metros  de  entrada  una  fecha  (a,m,d)  y
calcula el n�mero de d�as que hay desde la fecha hasta el final del mismo a�o.*/

int fbisiesto(int n)
{
		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
			return 1;
		else
			return 0;
}

int fdiasmes(int a�o, int mes)
{
	switch (mes)
	{
	case 1: return 31;
		break;
	case 2: if (bisiesto(a�o) == 1)
		return 29;
		  else
		return 28;
		break;
	case 3: return 31;
		break;
	case 4: return 30;
		break;
	case 5: return 31;
		break;
	case 6: return 30;
		break;
	case 7: return 31;
		break;
	case 8: return 31;
		break;
	case 9: return 30;
		break;
	case 10: return 31;
		break;
	case 11: return 30;
		break;
	case 12: return 31;
		break;
	}
}

int fdiasfin(int a, int m, int d)
{
	int i;
	int c=0;
	for (i = m; i <= 12; i++)
		c = c + fdiasmes(a, i);
	c = c - d;
	return c;
}

void ariketaf13()
{
	//Variables
	int a�o1;
	int mes1;
	int dia1;
	int a�o2;
	int mes2;
	int dia2;
	int diasfin1;
	int diasfin2;
	int a�osmedio = 0;
	int tot;
	int diasa�o2;
	int aux;
	//Recoleccion de datos
	printf("Escribe el a�o de inicio. \n");
	LeerNumeroEntero(&a�o1);
	printf("Escribe el mes de inicio.. \n");
	LeerNumeroEntero(&mes1);
	printf("Escribe el dia de inicio.. \n");
	LeerNumeroEntero(&dia1);
	printf("Escribe el a�o final. \n");
	LeerNumeroEntero(&a�o2);
	printf("Escribe el mes final. \n");
	LeerNumeroEntero(&mes2);
	printf("Escribe el dia final. \n");
	LeerNumeroEntero(&dia2);
	//Verificacion de datos
	if (a�o2 < a�o1)
	{
		aux = a�o1;
		a�o1 = a�o2;
		a�o2 = aux;
	}
	if (mes2 < mes1)
	{
		aux = mes1;
		mes1 = mes2;
		mes2 = aux;
	}
	if (dia2 < dia1)
	{
		aux = dia1;
		dia1 = dia2;
		dia2 = aux;
	}
	diasfin1 = fdiasfin(a�o1, mes1, dia1);
	diasfin2 = fdiasfin(a�o2, mes2, dia2);
	a�o1++;
	while (a�o1 < a�o2)  //for(a�o1;a�o1<a�o2;a�o1++)
	{
		if (bisiesto(a�o1) == 1)
			a�osmedio = a�osmedio + 366;
		else
			a�osmedio = a�osmedio + 365;
		a�o1++;
	}
	if (bisiesto(a�o2) == 1)
		diasa�o2 = 366 - diasfin2;
	else
		diasa�o2 = 365 - diasfin2;
	tot = diasfin1 + a�osmedio + diasa�o2;
	// esta calculando los dias que faltan hasta finalizar el a�o, no hasta la segunda fecha. diasfin en la segunda fecha, el resultado menos el numero total de dias del a�o == los dias del a�o que han pasado.
	printf("Hay %d dias de diferencia. \n", tot);
}
/*Kpf2017ariketa1
Escribir un programa que lea dos numeros y que calcule el resto de la division entera mediante restas sucesivas. 
Para ello, hacer una funcion que calcule dicho resto.*/
int resto(int n1, int n2)
{
	int ac = n1;
	while(ac - n2 >= 0)
		ac = ac - n2;
	return ac;
}

void Kpf2021ariketa1()
{
	int n1;
	int n2;
	LeerNumeroEntero(&n1);
	LeerNumeroEntero(&n2);
	printf("%d \n", resto(n1, n2));
}
