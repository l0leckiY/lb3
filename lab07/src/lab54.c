#include <stdio.h>
#include <time.h>


void isperfect(int a){
  int i = 1;
  int b = 0;
  for (i = 1; i < a; i++) {
    if (a % i == 0 ) 
    {
      b = b + i;
    }
  }
  if (a == b) {
    printf( "Число идеальное\n");
  }
  else {
    printf( "Число не идеальное");
  }
  
  
  
	i = 0;
	b = 0;  
 }


int main(){
	isperfect(6);
	time_t seconds;
	seconds = time(NULL);
	isperfect (seconds % 10);
	return 0;
}
