#include <stdio.h>
int main()
{
	float x, y; // introducing variables
	x = 3;
	if (x <= -1){ // task completion
	y = -1/x;
	}
	if (x > -1 && x < 1){
	y = x*x;
	}
	else {
	y = 1;
	}
	printf ("%f\n", y);
	return 0;
}
