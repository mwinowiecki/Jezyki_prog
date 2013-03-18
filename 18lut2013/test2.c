#include <stdio.h>
#define N 10

int main()
{
  int a,b,c,d,i,tab[N]; 
  a = b = c = d = 0;

  printf("a == %i\n", a);

  for (i=0; i<N; tab[i++]=i);


  for (i=0; i<N; tab[++i]=i);

    
  return 0;
}