#include <stdio.h>
int main()
{
	int a;
	a = 5;
	for (int i = 2; i < a; i++){
		if (a % i == 0){
		printf ("число не простое");
		break;
		}
		else {
		printf("число простое");
		break;
		}
	}
}
	

