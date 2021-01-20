#include <string.h>
#include <stdio.h>
/**
 * @mainpage
 * # Загальне завдання
 * **Завдання** 
 *  текст - програма на мові С визначити чи є всі пари дужок  
 *
 *
 * @author Zagrebenev Sergei.
 * @date 01-jan-2021
 * @version 0.1
 */

/**
 * @file lab13.c
 * @brief Файл завданням 13 лаборатороної роботи
 * "текст - програма на мові С визначити чи є всі пари дужок"
 * @author Zagrebenev Sergei.
 * @date 01-jan-2021
 * @version 0.1
 */
 
 /**
 * @brief Функція, що шукає дужки 
 * @param массив цілих чисел
 * @return 0 якщо всі дужки на місці, 1 якщо недостатньо 
 */
int checker(char text[],char mass[])
{
		int result = 0;
		for (int i = 0; i < 6; i++){
		if (strchr(text, mass[i]) == NULL){
		result = 1;
		break;
		}
		
	}
	return result;
}




int main(void)
{
	char text[] = "for () int {} and []";
	char mass[6] = {'(',  ')',  '{', '}', '[', ']'};
	int result = checker(text, mass); /*0 - усі на місці 1 - недостатьно*/
	printf("%d\n", result);
return 0;
}
