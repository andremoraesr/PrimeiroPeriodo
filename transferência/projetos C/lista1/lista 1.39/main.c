#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int a, b, menor, maior;

    printf("Digite um número A qualquer: ");
    scanf("%i", &a);
    printf("Digite um número B qualquer: ");
    scanf("%i", &b);

    if(b<a) {
       menor=b;
       maior=a;
    }  else if(b>a)  {
          menor=a;
          maior=b;
    }
    while (menor<=maior)   {
        if (menor%2==0)
           printf("%i ", menor);
    menor++;
    }

}
