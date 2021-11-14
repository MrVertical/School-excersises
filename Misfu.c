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
Diseñar una función que al recibir como parámetros de entrada dos números enteros X y n,
calcule la suma de la siguiente sucesión.Para calcular potencias diseñar y utilizar una función.*/
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
Se introducirán números enteros por el teclado hasta escribir un 0, el programa ha de indicar
cuantos dígitos tiene cada uno. Para ello utilizar una función que reciba como parámetro un
número entero y devuelva el número de dígitos de que consta.*/
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
un número combinatorio utilizando la funcion del factorial.*/
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
Hacer un programa que escriba todos los números primos que haya entre dos números enteros
introducidos por el teclado. Para ello diseñad una funcion que al recibir un número diga si es o no primo.*/
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
Diseñar una función que reciba como parámetro un año determinado y diga si es o no bisiesto.
(Un año se considera bisiesto si es múltiplo de 4, no siendo los múltiplos de 100 aunque si los
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
Diseñar una funcion que reciba un numero entero positivo como parametro y
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
Escribir un programa que lea una fecha por el teclado(año, nes, dia) y 
calcule el numero de dias que faltan para finalizar el mes de la fecha*/
int diasmes(int año,int mes)
{
	switch (mes)
	{
	case 1: return 31;
		break;
	case 2: if (bisiesto(año) == 1)
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
	int año;
	int mes;
	int dia;
	int k;
	printf("Introduce el año. \n");
	LeerNumeroEntero(&año);
	printf("Introduce el mes. \n");
	LeerNumeroEntero(&mes);
	printf("Introduce el dia. \n");
	LeerNumeroEntero(&dia);
	k = (diasmes(año, mes)- dia);
	if (k == 1)
		printf("Quedan %d dia. \n", k);
	else if(k>=0)
		printf("Quedan %d dias. \n", k);
	else
		printf("Introduce un numero valido. \n");
		
}

/*Ariketaf10
Diseñar una función que determine si un número es o no perfecto. (Un número es perfecto si
la suma de sus divisores da como resultado el mismo número. 6 es un número perfecto).
Utilizando esta función calcular todos los números perfectos ente 1 y 200.*/
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

Diseñar una función que reciba como parámetro de entrada un número entero y
de cómo salida el mismo número escrito a la inversa*/
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
Diseñar una función tal que reciba el valor de “x” y devuelva el valor del Sen(x).
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

Hacer un programa que al introducir dos fechas (año, mes, día) nos calcule el número de días
que hay entre las dos fechas.
Para ello diseñar tres funciones.
a) Función  “fbisiesto”.  Recibe  como  parámetro  de  entrada  el  año  e  indica  si  es
bisiesto o no.
b) Funcion “fdiasmes”. Recibe como parámetro el año y el mes e indica cuantos días
tiene ese mes.
c) Función  “fdiasfin”.  Recibe  como  parámetros  de  entrada  una  fecha  (a,m,d)  y
calcula el número de días que hay desde la fecha hasta el final del mismo año.*/

int fbisiesto(int n)
{
		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
			return 1;
		else
			return 0;
}

int fdiasmes(int año, int mes)
{
	switch (mes)
	{
	case 1: return 31;
		break;
	case 2: if (bisiesto(año) == 1)
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
	int año1;
	int mes1;
	int dia1;
	int año2;
	int mes2;
	int dia2;
	int diasfin1;
	int diasfin2;
	int añosmedio = 0;
	int tot;
	int diasaño2;
	int aux;
	//Recoleccion de datos
	printf("Escribe el año de inicio. \n");
	LeerNumeroEntero(&año1);
	printf("Escribe el mes de inicio.. \n");
	LeerNumeroEntero(&mes1);
	printf("Escribe el dia de inicio.. \n");
	LeerNumeroEntero(&dia1);
	printf("Escribe el año final. \n");
	LeerNumeroEntero(&año2);
	printf("Escribe el mes final. \n");
	LeerNumeroEntero(&mes2);
	printf("Escribe el dia final. \n");
	LeerNumeroEntero(&dia2);
	//Verificacion de datos
	if (año2 < año1)
	{
		aux = año1;
		año1 = año2;
		año2 = aux;
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
	diasfin1 = fdiasfin(año1, mes1, dia1);
	diasfin2 = fdiasfin(año2, mes2, dia2);
	año1++;
	while (año1 < año2)  //for(año1;año1<año2;año1++)
	{
		if (bisiesto(año1) == 1)
			añosmedio = añosmedio + 366;
		else
			añosmedio = añosmedio + 365;
		año1++;
	}
	if (bisiesto(año2) == 1)
		diasaño2 = 366 - diasfin2;
	else
		diasaño2 = 365 - diasfin2;
	tot = diasfin1 + añosmedio + diasaño2;
	// esta calculando los dias que faltan hasta finalizar el año, no hasta la segunda fecha. diasfin en la segunda fecha, el resultado menos el numero total de dias del año == los dias del año que han pasado.
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
