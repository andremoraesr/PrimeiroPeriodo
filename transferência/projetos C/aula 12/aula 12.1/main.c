#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"");
   int idade;

   printf("Qual a sua idade? ");
   scanf("%i", &idade);

   if (idade < 30)  {
      printf("Você ainda é jovem!");
   }
   return 0;
}
