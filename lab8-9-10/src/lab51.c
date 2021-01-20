#include <stdio.h>
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
 * @file lab51.c
 * @brief Файл з першим завданням 5 лаборатороної роботи
 * "Визначити спільний дільник для 2х чисел"
 * @author Zagrebenev Sergei.
 * @date 01-jan-2021
 * @version 0.1
 */
 
 /**
 * @brief Функція, що шукає найбільший спільний дільник
 * @param 2 цілих числа 
 * @return Логічну відповідь у консоль якщо при введенні чисел виявлено помилку, або НОД, якщо все введено правильно	
 */
int NOD(a,b){

	if ( a < 0 || b < 0 ){
		a = -1 * a;
		b = -1 * b;
	}
	if (( a > 0 && b < 0) || (a < 0 && b > 0)){
		printf ("Невозможно найти НОД для отрицательного и положительного числа\n");
		return 0;
	} else if (a == 0 || b == 0){
		printf ("Нельзя вводить 0, введите натуральое число\n");
		return 0;
	} else {
	
		while (a !=0 && b != 0){
			if (a > b){
			
				a = a % b;
			
			} else {
			
				b = b % a;
			}
		
		}
		a = a + b;
		return a;
	}
}



/**
* main функція, викликає функцію {@link NOD} декілька раз
* 
*/
int main(){
	printf("%d\n",NOD (25,25));
	int a = rand() % 10;
	int b = rand() % 10;
	printf("%d\n", NOD (a , b)  );

	return 0;
}
