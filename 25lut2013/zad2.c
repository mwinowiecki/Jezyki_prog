#include <stdio.h>

int cztery_znaki()
{
  int pom=0, i;
  unsigned char znak;
  for(i=0; i<4; i++)
    {
      znak = getchar();
      pom = (pom << 8)+znak;
    }

  return pom;
}

/*void bin(int n)
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
    if(i%4==0)
      printf(" ");
    printf ("%d",tab[i]);
  }
  //printf("");
} */

int main()
{
  char z=' ';
  int cos;


 /* z=getchar();
  while (z!=EOF) 
  {
    
    //liczba=(int)z;
    //bin(liczba); 
    z=getchar(); */
    printf("%i",cztery_znaki(z));
 // }

  

 
  return 0;
}