#include <stdio.h>
#include <stdlib.h>

int main()
{
   float d;

   printf("Digite o numero de dias trabalhados pelo encanador: %");
   scanf ("%f", &d);

   float v = (92.5/100)*30*d ;

   printf("A quantia liquida a ser paga pelo encanador e: %f reais", v);

   return 0;
}
