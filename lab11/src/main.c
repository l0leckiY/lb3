#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<malloc.h>
#define N 15
int calculating_LEN(float mass[], int chislo)
{
	int LEN = 0;
	for(chislo;  chislo < N; chislo++)
	{
		if(mass[chislo+1] < 0)
		{
			break;
		}
		else
		{
			LEN++;
		}
	}
	printf("\n\n\n");
	return LEN;
}
int search(float mass[])
{
	int chislo;
	for (int j = 0; j < N; j++)
	{
		if(mass[j] < 0)
		{
			chislo = j;
			break;	
		}
	}
	return chislo;
}
void filling(float mass[])
{
	for( int i = 0; i < N ; i++ ){	
		int znak = rand()%10;
		if(znak > 5)
		{
			mass[i] = rand()%10;
		}
		else
		{
			mass[i] = -rand()%10;
		}
	printf("%f\n", mass[i]);
}
}
int main()
{	
	srand(time(NULL));
	float mass[N] = {};
	filling(mass);
	int chislo = search(mass);
	
	int a = chislo+1;
	int LEN = calculating_LEN(mass, chislo);
	
	float * block = calloc(LEN , sizeof(float));
	for(int i = 0; i < LEN; i++)
	{
		block[i] = mass[a];
		a++;
		printf("%f\n", block[i]);
	}
}
