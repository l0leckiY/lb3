#include <stdio.h>
#include <time.h>
int main(){
	float digit = 16;
	float sqrt = digit / 2.f;
  	float x;


      do
      {
        x = sqrt;
        sqrt = (x + (digit / x)) / 2.f;
      } while ((x - sqrt != 0.f));
     

	printf("%f\n", sqrt);
	return 0;
}

