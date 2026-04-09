#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[5];
    printf("Digite 5 valores inteiros: ");

    for(int i=0; i<5; i++)  {
        scanf("%i", &vet[i]);    }

    int maior = vet[0];

    for(int i=0; i<5; i++)   {
        printf("%i ", vet[i]);
    }
    for(int i=0; i<5; i++)   {
        if (maior<vet[i])   {
            maior=vet[i];}
    }
    int i=0;
    while(maior!=vet[i])   {
        i++;   }

    int certo=i+1;

    printf("\n O maior elemento eh %i e eh o %io elemento ", maior, certo);


    return 0;

}
