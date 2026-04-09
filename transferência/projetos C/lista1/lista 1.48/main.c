#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Digite o tamanho desejado do vetor: ");
    scanf("%i", &size);
    int vet[size];

    for(int i=0; i<size; i++)   {
        printf("Digite um numero do vetor: ");
        scanf("%i", &vet[i]);
    }
    int j=0;
    for(int i=0; i<size; i++)   {
        if(vet[i]%2==0)   {
        printf("%i ", vet[i]);
        j++;    }  }
     printf("\nA quantidade de numeros pares do vetor eh: %i", j);

     return 0;




}
