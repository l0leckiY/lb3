#include <stdio.h>
#include <time.h>


int doubledigit(int mass[], int size)

{	

	int sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		if ((mass[i] > 9 && mass[i] < 100) || (mass[i] < -9 && mass[i] > -100))
		{
			sum+= mass[i];
		}
	}
	printf("%d\n", sum);
}
 
 
 
int main(void)
{
	
	int mass[] = {1, 2, 20, 12, 43, 5, 4, -100 ,9999};
	int size = sizeof(mass) / sizeof(int);
	
	doubledigit(mass, size);


	int mass2[size];
	srand(time(NULL));
	
	for (int i = 0; i < size; i++)
	{
		mass2[i] = rand() % 100;	
	}
	
	doubledigit(mass2, size);
	return 0;
}










