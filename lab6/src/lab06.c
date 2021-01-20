#include <stdio.h>
 
int main(void)
{

	int mass[] = {1, 2, 20, 12, 43, 5, -25, -1000 ,9999999999};
	
	int size = sizeof(mass) / sizeof(int);
	int sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		if ((mass[i] > 9 && mass[i] < 100) || (mass[i] < -9 && mass[i] > -100))
		{
		sum+= mass[i];
		}
	}
	return 0;
}
