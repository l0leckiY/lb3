#include <stdio.h>
int main()
{
	float x, a, b, c, r; // introducing variables
	x = 345.657;
	a = x*1000;
	int d;
	d = a;
	b = d%1000;
	c = a/1000;
	r = (int)x / 1000; // count the value of the variables
	float result;
	if (r == 0){ // division by zero check
	printf ("error");
	}
	else
	{
	result = b/c;
	int k;
	k = result * 100;
	result = (float)k / 100;
	printf ("%f\n", result);
	}
	
	return 0;
}
