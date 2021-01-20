#include <stdio.h>
int main()
{
	float x, y; // introducing variables
	x = 3;
	if (x <= -1){ // task completion
	y = -x - 1;
	}
	if (x > -1 && x <= 0){
	y = x + 1;
	}
	if (x  > 0 && x <= 1){
	y = -x + 1;
	}
	if (x > 1){
	y = x -1;
	}
	printf ("%f\n", y);
	return 0;
}
