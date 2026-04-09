#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vet[5];

    for(i=0; i<5; i++)   {
        printf("Digite um numero: ");
        scanf("%i", &vet[i]);
        printf("\n");
    }
    for(i=4; i>=0; i--)  {
        printf("%i", vet[i]);
    }

    return 0;
}
