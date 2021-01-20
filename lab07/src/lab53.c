#include <stdio.h>
#include <time.h>


void islucky(int a){

    
    int chet1 = 0;
    int chet2 = 0;
	int j = 1;
    for (int i = 0; i < 5; i++)
    {

    if (i < 3)
    {
    	chet1+= a / j % 10;  
    }
    else {
    	chet2 += a / j % 10;
    }
    j = j * 10;
    }
    chet2 += a / 100000;
	
	if (chet2 == chet1){
		printf("Билет счастлиый, УРА!\n");
	}else {
		printf ("Увы, билет не счастливый\n");
	}
	return 0;
}




int main(){
	islucky(600123);
	
	time_t seconds;
	seconds = time(NULL)  % 10000000 / 10;
	
	islucky (seconds);

	return 0;
}
