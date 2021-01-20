#include <stdio.h>
int main()
{
	int a, b;
	b = 0;
	a = 4;
	int i;
	for ( i=1; i < a; i++){
		if (a % i == 0){
		b = b + i;
		}
	}
	printf ("%d\n", b);
	if (b == a){
	printf("число идеальное");
	}
	else{
	printf("число идеальное");
	}
	
}
