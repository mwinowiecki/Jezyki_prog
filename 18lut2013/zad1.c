#include <stdio.h>

int main()
{
  int liczba;
  printf("Podaj liczbe naturalna: ");
  scanf("%i",&liczba);

  return liczba%3;
}