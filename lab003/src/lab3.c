#include <stdio.h>
int main()
{
	int chislo, a, b, c, d;
	int sist;
	chislo = 0007;
	a = (chislo/1000)*(sist*sist*sist);
	b = ((chislo/100)%10)*(sist*sist);
	c = ((chislo/10)%10)*sist;
	d = (chislo%10);
	d = a+b+c+d;
	printf ("%d\n", d);
	return 0;
}
