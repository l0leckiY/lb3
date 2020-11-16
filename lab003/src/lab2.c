#include <stdio.h>
int main()
{
	int a;
	// а в 4 степень за 2 операции
	a = 2;
	a = a*a;
	a = a*a;
	printf ("%d\n", a);
	// а в 6 степень за 3 операции
	a = 2;
	a = a*a*a;
	a = a*a;
	printf ("%d\n", a);
	// а в 8 степень за 3 операции
	a = 2;
	a = a*a;
	a = a*a;
	a = a*a;
	printf ("%d\n", a);
	// а в 10 степень за 4 операции
	a = 2;
	int b;
	b = a*a;
	b = b*b*a;
	b = b*b;
	printf ("%d\n", b);
	return 0;
	}
	
	
