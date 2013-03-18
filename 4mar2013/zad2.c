//Marcin Winowiecki 4.03.2013

#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <math.h>

int main()
{
  short x=SHRT_MIN, y=SHRT_MIN;

  printf("Short: %i * %i == %lf\n",x,y,pow(x,y));



  return 0;
}