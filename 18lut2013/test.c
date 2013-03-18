#include <stdio.h>
int main()
{
  char z='a';

  while(z!=EOF)
  { 
    z=getchar();
    printf("%c",z);
  }
 
  return 0;
}