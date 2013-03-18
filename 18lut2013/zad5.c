#define N 10
#include <stdio.h>

int main()
{
  double a[N];
  int i=0;

  for(i=0; i<N; i++)
   a[i]=0;

  while(i<N & a[i]==0) i++;

  printf("%i",i);
  return 0;
}