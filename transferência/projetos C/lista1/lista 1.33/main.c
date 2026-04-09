#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, soma=0;

   for(int i=1; i<11; i++)     {
    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
    soma=soma+x;
    printf("\n");
   }
   float media=soma/10.0;

   printf("A media dos valores eh: %.2f", media);

   return 0;


}
