#include <stdio.h>

int NOD(a,b){


	
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



int main(){
	printf("%d\n",NOD (25,25));
	int a = rand() % 10;
	int b = rand() % 10;
	printf("%d\n", NOD (a , b)  );

	return 0;
}
