#include <stdio.h>

void reszta(int n, int k, int* q, int* r)
{
  if(k)
  {
    q=n/k;
    r=n%k;
  }

}

int main()
{
  int a=5,b=2,il=0,resz=0;

  reszta(a,b,il,resz);

  printf("\nIloraz == %i ; Reszta == %i ",il,resz);

  return 0;
}
