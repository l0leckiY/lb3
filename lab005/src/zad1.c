#include <stdio.h>
int main()
{
	int a, b;
	a = 7;
	b = 7;
		while (a!=0 && b!=0){
			if (a>b ){
			a = a % b;
			}
			else {
			b = b% a;
			}
		}
		a = a + b;
		printf ("%d\n", a);
}
