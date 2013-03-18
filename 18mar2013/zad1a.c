#include <stdio.h>

void reszta(int n, int k, int* q, int* r)
{
  *q=n/k;
  *r=n%k;
}

int main()
{
  int a,b,il,resz;

  printf("Podaj a: ");
  scanf("%i",&a);
  printf("\nPodaj b: ");
  scanf("%i",&b);

  reszta(a,b,&il,&resz);

  printf("\nIloraz == %i \tReszta == %i \n\n",il,resz);

  return 0;
}