#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double n;

   printf("Digite um numero qualquer: ");
   scanf("%lf", &n);

   if (n > 0)  {
       double n1 = sqrt(n);
       printf("A raiz quadrada deste numero eh: %3.lf", n1);
    } else  {
       double n2 = sqrt(-n);
       printf("A raiz quadrada deste numero eh: %3.lf i", n2);
    }
    return 0;
}
