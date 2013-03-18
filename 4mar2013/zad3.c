//Marcin Winowiecki  4.03.2013

#include <stdio.h>
#include <float.h>
#include <limits.h>


int main(){
  printf("Rzutowanie float na int: \n");
  printf("Wartosc max po rzutowaniu: %i\n",(int)FLT_MAX);
  printf("Wartosc max: %e\n\n",FLT_MAX);

  printf("Rzutowanie double na int: \n");
  printf("Wartosc max po rzutowaniu: %i\n",(int)DBL_MAX);
  printf("Wartosc max: %le\n\n",DBL_MAX);

  printf("Rzutowanie long na double: \n");
  printf("Wartosc max po rzutowaniu: %le\n",(double)LONG_MAX);
  printf("Wartosc max: %li\n\n",LONG_MAX);

  printf("Rzutowanie long long na short: \n");
  printf("Wartosc max po rzutowaniu: %i\n",(short)LLONG_MAX);
  printf("Wartosc max: %lli\n\n",LLONG_MAX);

  return 0;
}