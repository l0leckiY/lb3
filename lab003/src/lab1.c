#include <stdio.h>
int main()
{
	int a;
	a = 345;
	int b, c, d, result;
   	b = (a % 10);
    	c = (a/10%10);
    	d = (a/100);
	result = (b * 100) + (c * 10) + d;
	printf ("%d\n", result);
	return 0;
	}
	
