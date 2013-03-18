//Marcin Winowiecki 4.03.2013

#include <stdio.h>

int main()
{
  float x=1.0;
  double y=1.0;
  long double z=1.0;

  printf("Float: \n");
  while (1.0+x > 1.0)
    {
      x = x/2.0;
    }
  printf("%e \n\n",x);

  printf("Double: \n");
  while (1.0+y > 1.0)
    {
      y = y/2.0;
    }
  printf("%le \n\n",y);

  printf("Long double: \n");
  while (1.0+z > 1.0)
    {
      z = z/2.0;
    }
  printf("%Le \n\n",z);

  return 0;
}