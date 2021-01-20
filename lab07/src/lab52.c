#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

 
void issimple(int a){

		for (int i = 2; i < a; i++ ){
			if (a % i == 0){
					printf ("Число не простое \n");
					a = 1;
					break;
				}
	
			}
		if (a != 1){
			printf("Число простое\n");
		}
	
}





int main(){
	issimple(11);

	time_t seconds;
	seconds = time(NULL);

	issimple(seconds % 100);
	return 0;
}



