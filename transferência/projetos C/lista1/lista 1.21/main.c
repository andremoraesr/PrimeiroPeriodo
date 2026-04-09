#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double nreal;

   printf("Digite um numero real: ");
   scanf("%lf", &nreal);

   if (nreal > 0)  {
      double n2 = sqrt(nreal);
      printf("Como o numero inserido foi positivo, aqui esta a sua raiz quadrada: %2.lf", n2);
   } else  {
      double n3 = pow(nreal, 2.0);
      printf("Como o numero inserido foi negativo, aqui esta o quadrado dele: %2.lf", n3);
   }
   return 0;
}
