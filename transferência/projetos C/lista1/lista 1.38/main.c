#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma=0;

    for(int i=1; i<11; i++)   {
       int x;
       printf("Digite um numero: ");
       scanf("%i", &x);
       if(x>=0)   {
            soma=soma+x;
       }
    }
    float media=soma/10.0;
    printf("A media dos dez numeros eh: %.2f", media);

    return 0;

}
