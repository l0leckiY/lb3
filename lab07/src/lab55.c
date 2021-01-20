#include <stdio.h>
#include <time.h>

float sqrt(float digit)
{
	 float sqrt = digit / 2.f;
    float x;


      do
      {
        x = sqrt;
        sqrt = (x + (digit / x)) / 2.f;
      } while ((x - sqrt != 0.f));
     

	return sqrt; 

}


int main(){

	printf("%f\n", sqrt(16));
	time_t seconds;
	seconds = time(NULL);
	
	printf("%f\n", sqrt(seconds));	
	return 0;
}
