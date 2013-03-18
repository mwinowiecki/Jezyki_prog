#include <stdio.h>

int bin(int n)
{
   do
   {
      printf("%d", n%2);
      n=n/2;
   }
   while(n!=0);
   return 0;
}

int main()
{
  char z;
  int i,liczba,a;   

  //z=getchar();
  while(z!=EOF)
  {
    liczba = (int)z;
    a = bin(liczba);
    printf("%i",a);
    if(i%8==0)
      {  printf(" "); 
          i++;
      }
    //printf("%i",a);
    z=getchar();    
  }

  printf("\n");

  return 0;
}
