// Marcin Winowiecki  4.03.2013

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("SHORT: \n");
  printf("\tIlosc bajtow: %i \n",sizeof(short));
  printf("\tWartosc max: %i \n",SHRT_MAX);
  printf("\tWartosc min: %i \n\n",SHRT_MIN);

  printf("INT: \n");
  printf("\tIlosc bajtow: %i \n",sizeof(int));
  printf("\tWartosc max: %i \n",INT_MAX);
  printf("\tWartosc min: %i \n\n",INT_MIN);

  printf("LONG: \n");
  printf("\tIlosc bajtow: %i \n",sizeof(long));
  printf("\tWartosc max: %li \n",LONG_MAX);
  printf("\tWartosc min: %li \n\n",LONG_MIN);

  printf("LONG LONG: \n");
  printf("\tIlosc bajtow: %i \n",sizeof(long long));
  printf("\tWartosc max: %lli \n",LLONG_MAX);
  printf("\tWartosc min: %lli \n\n",LLONG_MIN);

  printf("FLOAT: \n");
  printf("\tIlosc bajtow: %i \n",sizeof(float));
  printf("\tWartosc max: %e \n",FLT_MAX);
  printf("\tWartosc min: %f \n",FLT_MIN);
  printf("\tZiarno: %e \n",FLT_EPSILON);
  printf("\tPrecyzja: %i \n\n",FLT_DIG);

  printf("DOUBLE: \n");
  printf("\tIlosc bajtow: %i \n",sizeof(double));
  printf("\tWartosc max: %le \n",DBL_MAX);
  printf("\tWartosc min: %lf \n",DBL_MIN);
  printf("\tZiarno: %le \n",DBL_EPSILON);
  printf("\tPrecyzja: %i \n\n",DBL_DIG);

  printf("LONG DOUBLE: \n");
  printf("\tIlosc bajtow: %i \n",sizeof(long double));
  printf("\tWartosc max: %Le \n",LDBL_MAX);
  printf("\tWartosc min: %Lf \n",LDBL_MIN);
  printf("\tZiarno: %Le \n",LDBL_EPSILON);
  printf("\tPrecyzja: %i \n\n",LDBL_DIG);

  return 0;
}