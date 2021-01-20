#include <stdio.h>
#include <time.h>

/**
 * @mainpage
 * # Загальне завдання
 * **Завдання** 
 *  Переробити завдання з 5 та 6 лабораторної роботи у функції, згідно з лабораторним практикумом 
 *
 *
 * @author Zagrebenev Sergei.
 * @date 01-jan-2021
 * @version 0.1
 */

/**
 * @file lab06.c
 * @brief Файл завданням 6 лаборатороної роботи
 * "У масиві цілих чисел визначити суму двозначних"
 * @author Zagrebenev Sergei.
 * @date 01-jan-2021
 * @version 0.1
 */
 
 /**
 * @brief Функція, що шукає cуму двозначних чисел
 * @param массив цілих чисел
 * @return сумму двозначних чисел	
 */
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
	return sum;
}
 
 
 
int main(void)
{
	
	int mass[] = {1, 2, 20, 12, 43, 5, 4, -100 ,9999};
	int size = sizeof(mass) / sizeof(int);
	
	int answer1 = doubledigit(mass, size);


	int mass2[size];
	srand(time(NULL));
	
	for (int i = 0; i < size; i++)
	{
		mass2[i] = rand() % 100;	
	}
	
	int answer2 = doubledigit(mass2, size);
	return 0;
}










