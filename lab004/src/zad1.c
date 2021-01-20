#include <stdio.h>
int main()
{
	float r, l, v, a, PI; // introducing variables
	char s = 's';
	PI = 3.14;
	r = 3;
	switch (s){ // define action
	case 's':
	s = PI*r*r;
	printf ("%f\n", s);
	break;
	case 'v':
	a = (3*100)/4;
	v = a*PI*r*r*r/100;
	printf ("%f\n", v);
	break;
	case 'l':
	l = 2*PI*r;
	printf ("%f\n", l);
	break;
	}
	return 0;
}
