#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float cateto1, cateto2;

   printf("Digite os catetos do triangulo retangulo: ");
   scanf("%f %f", &cateto1, &cateto2);

   float hip = sqrt(pow(cateto1,2.0)+pow(cateto2,2.0));
   printf("A hipotenusa do triangulo eh: %f", hip);

   return 0;

}
