#include <stdio.h>

void bin(int n)
{
  int tab[8];
  int i;

  for (i=7;i>=0;i--)
  {
    tab[i]=(n&1);
    n = n >> 1;
  }

  for (i=0;i<8;i++)
  {
    printf ("%d",tab[i]);
  }
  printf(" ");
}

int main()
{
  char znak;
  int liczba;

  znak=getchar();
  while (znak!=EOF) 
  {
    liczba=(int)znak;
    bin(liczba); 
    znak=getchar();
  }
  return 0;
}